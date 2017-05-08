
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

//función para las paredes
void paredes(double ancho)
{
	//guarda la matriz de coordenadas
    glPushMatrix();
    glTranslated(0.5,0.5*ancho,0.5);
    glScaled(1.0,ancho,1.0);
    glutSolidCube(1.0);
    glPopMatrix();
}


//función para las patas
void patas(double ancho,double largo)
{
	//guarda la matriz de coordenadas
    glPushMatrix();
    glTranslated(0,largo/2,0);
    glScaled(ancho,largo,ancho);
    glutSolidCube(1.0);
    //resetea la matriz
    glPopMatrix();
}

//funcion mesa
void mesa(double a, double b,double c,double d)
{    glPushMatrix();
    glTranslated(0,d,0);
    glScaled(a, b,a);

    //dibuja la tabla
    glutSolidCube(1.0);
    glPopMatrix();
    double dist =0.95* a/2.0 - c/2.0;
    glPushMatrix();
    glTranslated(dist,0,dist);

    //dibuja las patas
    patas(c,d);
    glTranslated(0.0,0.0,-2*dist);
    patas(c,d);
    glTranslated(-2*dist,0,2*dist);
    patas(c,d);
    glTranslated(0,0,-2*dist);
    patas(c,d);
    glPopMatrix();
}

void display(void)
{
  glClearColor(0.0,0.0,0.0,1.0);
  // Propiedades del material
    GLfloat mat_ambient[] = { 0.19225f, 0.19225f, 0.19225f,1.0f };
    GLfloat mat_diffuse[] = { 0.50754f, 0.50754f, 0.50754f, 1.0f };
    GLfloat mat_specular[] = { 0.508273f, 0.508273f, 0.508273f, 1.0f };
    GLfloat mat_shininess[]={50.0f};

    glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
    glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
    glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
    glMaterialfv(GL_FRONT,GL_SHININESS,mat_shininess);


    glMatrixMode(GL_PROJECTION);
    //Resetear transformaciones
    glLoadIdentity();
  //vista ortogonal
    glOrtho(-1.33,1.33, -1,1,0.1,100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    //vista
    gluLookAt(1,1,1,0.0,0.25,0.0,0.0,1.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glTranslated(0.4,0,0.4);
    //llama la funcion mesa
    mesa(0.7,0.03,0.03,0.4);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.4,0.38,0.5);
    glRotated(45,0,1,0);

    //dibuja una tetera
    glTranslated(0.1,0.28,0.5);
    glutSolidTeapot(0.1);
    glPopMatrix();

    //dibuja la base
    paredes(0.03);
    glPushMatrix();
    glRotated(90.0,0.0,0.0,1.0);
    //dibuja la pared de la izquierda
    paredes(0.03);
    glPopMatrix();
    glPushMatrix();
    glRotated(-90.0,1.0,0.0,0.0);
    //dibuja la pared de la derecha
    paredes(0.03);
    glPopMatrix();
    glFlush();
}
void init(void)
{
// Define las luces
GLfloat lightIntensity[] ={ 1.0f,1.0f,1.0f,1.0f};
GLfloat light_position[] ={ -1.0f,5.0f,5.0f,0.0f};
glLightfv(GL_LIGHT0 ,GL_POSITION,light_position);
glLightfv(GL_LIGHT0 ,GL_DIFFUSE,lightIntensity);

// Activamos la fuente de luz
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0); //Activamos las luces en 0
glDepthFunc(GL_LESS); //comparación de profundidad
glEnable(GL_DEPTH_TEST); //activa GL_DEPTH_TEST
glEnable(GL_NORMALIZE);
}
int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    //  Inicializar los parámetros GLUT y de usuario proceso
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
    glutInitWindowSize (800, 800);//tamaño de la ventana
    glutInitWindowPosition (300, 100);//posicion de la ventana en la pantalla
    //crear ventana
    glutCreateWindow ("Figura#3");
    //funciones de retrollamada
    init();
    glutDisplayFunc(display);

    glutMainLoop();

return 0;

}
