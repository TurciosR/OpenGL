#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <SOIL/SOIL.h>
#include <SDL/SDL.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include "funciones.cpp"
#define MUS_PATH "audio.wav"
using namespace std;

//Prototipo de nuestra devolución de llamada de audio
// Ver la implementación para más información
void my_audio_callback(void *userdata, Uint8 *stream, int len);

// Declaraciones de variables
static Uint8 *audio_pos;//Puntero global al búfer de audio que se va a reproducir
static Uint64 audio_len; // Longitud restante de la muestra que tenemos que jugar
// variables que representan direccion de la camara
float lx=0.0f,lz=-1.0f;
// XZ posicion de la camara
float x=0.0f,z=5.0f,zz=0.0;
int P = 0;
// angulo de rotación
float angulo = 0.0f;
int frameNumber;
void text(float P)
{
    char text[32];
  //ceil(puntaje);
    sprintf(text, "Score: %.0f", P*-1);
    //cout<<puntaje<<endl;
    glColor3f(1, 1, 1);
    glRasterPos3f( 0.8 , 2.0 , 0.1);
    for(int i = 0; text[i] != '\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
}
// --------------- Para animación  ------------------------------------------

int animating = 0;      // 0 sin animación
                       // Se cambia con la llamada a las funciones startAnimation() and pauseAnimation()
void pauseAnimation()
{
// Llamamo a la función para detener la animación
   animating = 0;
}

void updateFrame()
{
// En esta funcion agregamos el codigo que hara la secuencia de cada escena como si fuera un fotograma

 //glColor3f(0.0,1.0,0.0);
 //Hacemos que la tetera gire
 for (float i=0; i<=500; i+=0.1)
 {
  zz=zz-=i;
  //printf("%f \n",i);

 }
  //Verificamos el numero de frames para detener animación
  if(frameNumber==2000)
   {
     pauseAnimation();
     frameNumber=0;
   }
 //Almacenamos el numero de frames
 frameNumber++;
//printf ("Numero de Frame: %d \n", frameNumber);
}

void timerFunction(int timerID)
{
// Invocamos la funcion para controlar el tiempo de la ejecucion de funciones
//sleep(6);
   if (animating)
   {
       updateFrame();
       glutTimerFunc(30, timerFunction, 0);
       glutPostRedisplay();
   }
}

void startAnimation()
{
     // llamamos la función para iniciar la animación
  if ( ! animating ) {
      animating = 1;
      glutTimerFunc(30, timerFunction, 1);
  }
}
void camara(int w, int h)
{
// Evitar una división por cero, cuando la ventana es demasiado pequeña
// (No permitir una ventana de alto 0).
if (h == 0)
h = 1;
float proporcion = w * 1.0 / h;

// Usando Matrix proyección
glMatrixMode(GL_PROJECTION);

// Reseteando la Matrix
glLoadIdentity();

// configurar el viewport para una ventana completa
glViewport(0, 0, w, h);

// Configurando las perspectivas.
gluPerspective(45.0f, proporcion, 0.1f, 100.0f);

// Regresar la vista a Modelview
glMatrixMode(GL_MODELVIEW);
}
//long int vaa = 100000000000000000;
long int vaa = 1000000;
//long int va = 100000000000000000;
void display(void)
{
  glClearColor(0.0, 0.0, 1.0, 0.5);
  // Borrar Color and Depth Buffers
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  // Reseteando transformaciones
  glLoadIdentity();
  gluLookAt(0.0f, 4.0f, 500.0f, 0.0, 1.0f, 490,  0.0f, 1.0f, 0.0f);
  //text();
  glTranslatef(0.0f , 0.0f, 495+(-zz/-vaa));
  arbol();
  cesped();
  camino();
  opstaculos();

  glPushMatrix();
  float ggg = -5.0-(-zz/-vaa)-0.75;
  double nnnn = round(ggg);
  printf("%f \n",ggg);
  printf("%f \n",nnnn);
  //printf("%f \n",x);
  glTranslatef(x , 1.0f, -5.0-(-zz/-vaa));
  glScalef(0.5,0.6,0.5);
  cubo();
  float a = 900.0;
  int par = 1;
  for (int i=0; i<200; i++)
  {
    if(a>-5)
    {
        if(x>0)
        {
          if(par>0)
          {
            if(nnnn==a)
            {
              animating = 0;
            }
          }
        }
        if(x<0)
        {
          if(par<0)
          {
            if(nnnn==a)
            {
              animating = 0;
            }
          }
        }

    }
   // printf("%f\n", a);
    par*=-1;
    a-=5.0;
  }

  glPushMatrix();
  glTranslatef(0.0, 0.5, -5.0);
  glTranslatef(0.0, 0.5, -5.0-(-zz/-vaa));

glutSwapBuffers();
}

void salir(unsigned char key, int x, int y)
{
  if (key == 27)
  {
    exit(0);
  }
  if(key ==' ')
  {
    display();
    startAnimation();
  }

}

void keyboard(int key, int xx, int yy)
{
  float fraccion = 0.1f;
  switch (key)
  {
    case GLUT_KEY_LEFT :
      //lx = -0.5;
      x = -0.5;
    break;
    case GLUT_KEY_RIGHT :
      //lx = 0.5;
      x = 0.5;
    break;
    }
}


int main(int argc, char **argv)
{

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
  glutInitWindowPosition(300,100);
  glutInitWindowSize(800,600);
  glutCreateWindow("The Cube");
  // sonido
  	// Inicializar SDL.
	if (SDL_Init(SDL_INIT_AUDIO) < 0)
			return 1;

	// Variables locales
	static Uint32 wav_length; // Longitud de nuestra muestra
	static Uint8 *wav_buffer; // Buffer que contiene nuestro archivo de audio
	static SDL_AudioSpec wav_spec; // Las especificaciones de nuestra pieza de música

	/* Cargar el WAV */
	// Las especificaciones, la longitud y el búfer de nuestro wav se llenan
	if( SDL_LoadWAV(MUS_PATH, &wav_spec, &wav_buffer, &wav_length) == NULL )
	{
	  return 1;
    }
	// Establecer la función de devolución de llamada
	wav_spec.callback = my_audio_callback;
	wav_spec.userdata = NULL;

	// Establecer nuestras variables estáticas globales
	audio_pos = wav_buffer ; // Copia el buffer de sonido
	audio_len = wav_length; // Copia la longitud del archivo

	/*Abrir el dispositivo de audio */
	if ( SDL_OpenAudio(&wav_spec, NULL) < 0 )
	{
	  fprintf(stderr, "No se pudo abrir el audio: %s\n", SDL_GetError());
	  exit(-1);
	}

	/* Empezar a jugar */
	SDL_PauseAudio(0);

	// Esperar hasta que no jugamos
	while ( audio_len > 0 )
	{
		SDL_Delay(10);
		// register callbacks
  glutDisplayFunc(display);
  glutReshapeFunc(camara);
  glutIdleFunc(display);
  glutKeyboardFunc(salir);
  glutSpecialFunc(keyboard);
  // OpenGL init
  glEnable(GL_DEPTH_TEST);
  //Para texturas
  glEnable(GL_TEXTURE_2D);
  glShadeModel(GL_SMOOTH);
  glDepthFunc(GL_LEQUAL);
  glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
  glutMainLoop();
  return 1;
	}

	// Cerrar todo
	SDL_CloseAudio();
	SDL_FreeWAV(wav_buffer);
}
//Función de devolución de llamada de audio
//Aquí tiene que copiar los datos de su buffer de audio en el
// Solicitud de búfer de audio (secuencia)
//Sólo debe copiar tanto como la longitud solicitada (len)
void my_audio_callback(void *userdata, Uint8 *stream, int len)
{

	if (audio_len ==0)
		return;

	len = ( len > audio_len ? audio_len : len );
	//SDL_memcpy (stream, audio_pos, len); 					// Simplemente copie desde un buffer en el otro
	SDL_MixAudio(stream, audio_pos, len, SDL_MIX_MAXVOLUME);// Mezclar de un buffer a otro

	audio_pos += len ;
	audio_len -= len ;
}
