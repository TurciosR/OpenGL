#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <SOIL/SOIL.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "funciones.cpp"
// variables que representan direccion de la camara
float lx=0.0f,lz=-1.0f;
// XZ posicion de la camara
float x=0.0f,z=5.0f,zz=0.0;

// angulo de rotación
float angulo = 0.0f;
int frameNumber;

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
long int va = 100000000000000000;
void display(void)
{
  glClearColor(0.0, 0.0, 1.0, 0.5);
  // Borrar Color and Depth Buffers
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  // Reseteando transformaciones
  glLoadIdentity();
  gluLookAt(0.0f, 4.0f, 500.0f, 0.0, 1.0f, 490,  0.0f, 1.0f, 0.0f);
  glTranslatef(0.0f , 0.0f, 495+(-zz/-vaa));
  arbol();
  cesped();
  camino();
  opstaculos();

  glPushMatrix();

  glTranslatef(x , 1.0f, -5.0-(-zz/-vaa));
  glScalef(0.5,0.6,0.5);
  cubo();
  glPushMatrix();

glutSwapBuffers();
}

void salir(unsigned char key, int x, int y)
{
  if (key == 27)
  exit(0);
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
      case GLUT_KEY_UP :
      z += lz * fraccion;
    break;
      case GLUT_KEY_DOWN :
      z -= lz * fraccion;
    break;
    }
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

int main(int argc, char **argv)
{

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
  glutInitWindowPosition(300,100);
  glutInitWindowSize(800,600);
  glutCreateWindow("Escena1.1");

  // register callbacks
  glutDisplayFunc(display);
  glutReshapeFunc(camara);
  glutIdleFunc(display);
  glutKeyboardFunc(salir);
  glutSpecialFunc(keyboard);

  // OpenGL init
  glEnable(GL_DEPTH_TEST);
  frameNumber = 0;
  zz = zz = 0;
  //Para texturas
  glEnable(GL_TEXTURE_2D);
  glShadeModel(GL_SMOOTH);
  glDepthFunc(GL_LEQUAL);
  glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
  startAnimation();
  glutMainLoop();
  return 1;
}
