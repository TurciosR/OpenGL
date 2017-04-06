#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


//DECLARACION DE VARIABLES A UTILIZAR

int id_menu[2]; // vector donde almacenaremos el id de la imagen a imprimir


//los vértices se representan como puntos individuales
void punto(float xx, float yy, float size, float R, float G, float B)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(size);
    glColor3f(R,G,B);
    glBegin(GL_POINTS);
    glVertex2f(xx,yy);
    glEnd();
    glFlush ();

}
//cada pareja de vertices repesenta una línea
void line(float xx, float yy,float xxx, float yyy, float R, float G, float B)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(R,G,B);
    glBegin(GL_LINES);
    glVertex2f(xx,yy);
    glVertex2f(xxx,yyy);
    glEnd();
    glFlush ();
}
//los vertices definen triángulos
void triangulo(float xx, float yy,float xxx, float yyy,float xxxx, float yyyy, float R, float G, float B)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(R,G,B);
    glBegin(GL_TRIANGLES);
    glVertex2f(xx,yy);
    glVertex2f(xxx,yyy);
    glVertex2f(xxxx,yyyy);
    glEnd();
    glFlush ();
}
//los vertices definen cuadrilateros
void cuadrado(float xx, float yy,float xxx, float yyy,float xxxx, float yyyy,float x1, float y1, float R, float G, float B)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(R,G,B);
    glBegin(GL_QUADS);
    glVertex2f(xx,yy);
    glVertex2f(xxx,yyy);
    glVertex2f(xxxx,yyyy);
    glVertex2f(x1,y1);
    glEnd();
    glFlush ();
}
//los vertices forman un secuencia abierta de líneas
void LineStrip(float linex, float liney,float linexx, float lineyy, float R, float G, float B)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(R,G,B);
    glBegin(GL_LINE_STRIP);
    glVertex2f(linex,liney);
    glVertex2f(linexx,lineyy);
    glEnd();
    glFlush ();
}
//los vertices forman un secuencia cerrada de líneas
void LineLoop(float loopx, float loopy,float loopxx, float loopyy,float loopxxx, float loopyyy, float R, float G, float B)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(R,G,B);
    glBegin(GL_LINE_LOOP);
    glVertex2f(loopx,loopy);
    glVertex2f(loopxx,loopyy);
    glVertex2f(loopxxx,loopyy);
    glEnd();
    glFlush ();
}
//los vertices definen un polígono
void Polygon(float polygonx, float polygony,float polygonxx, float polygonyy,float polygonxxx, float polygonyyy,float polygonxxxx, float polygonyyyy,float polygonxxxxx, float polygonyyyyy, float R, float G, float B)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(R,G,B);
    glBegin(GL_POLYGON);
    glVertex2f(polygonx,polygony);
    glVertex2f(polygonxx,polygonyy);
    glVertex2f(polygonxxx,polygonyyy);
    glVertex2f(polygonxxxx,polygonyyyy);
    glVertex2f(polygonxxxxx,polygonyyyyy);
    glEnd();
    glFlush ();
}
//los vertices definen un abanico de triángulos
void TrianglesFan(float fanx, float fany,float fanxx, float fanyy,float fanxxx, float fanyyy,float fanxxxx, float fanyyyy, float R, float G, float B)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(R,G,B);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(fanx,fany);
    glVertex2f(fanxx,fanyy);
    glVertex2f(fanxxx,fanyyy);
    glVertex2f(fanxxxx,fanyyyy);
    glEnd();
    glFlush ();
}
//los vertices definen una tira de cuadrilateros
void QuadStrip(float Stripx, float Stripy,float Stripxx, float Stripyy,float Stripxxx, float Stripyyy,float Stripxxxx, float Stripyyyy, float R, float G, float B)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(R,G,B);
    glBegin(GL_QUAD_STRIP);
    glVertex2f(Stripx,Stripy);
    glVertex2f(Stripxx,Stripyy);
    glVertex2f(Stripxxx,Stripyyy);
    glVertex2f(Stripxxxx,Stripyyyy);
    glEnd();
    glFlush ();
}
void TrianglesStrip(float trianglesx, float trianglesy,float trianglesxx, float trianglesyy,float trianglesxxx, float trianglesyyy,float trianglesxxxx, float trianglesyyyy,float x1, float y1, float R, float G, float B)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(R,G,B);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(trianglesx,trianglesy);
    glVertex2f(trianglesxx,trianglesyy);
    glVertex2f(trianglesxxx,trianglesyyy);
    glVertex2f(trianglesxxxx,trianglesyyyy);
    glEnd();
    glFlush ();
}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10, 10, -10, 10, -1, 1);
}

void menu(int opc)
{
    id_menu[1]=opc; // En el vector VF, en su campo 1, se almacenara el id de la imagen
    glClear (GL_COLOR_BUFFER_BIT);
    switch(opc)
{ // checando la imagen elegida para mostrar
           case 1:
               punto(0,0,10.0,1,0,0);
               break;
           case 2:
               line(0,0,0,3,0,1,0);
               break;
           case 3:
               triangulo(-0.2,0.0,0.2,0.0,0.0,0.3,0,0,1);
               break;
           case 4:
               cuadrado(-0.1,-0.1,0.1,-0.1,0.1,0.1,-0.1,0.1,1,0,0);
               break;
           case 5:
               LineStrip(-0.3,0.0,0.3,0.0,0,0,1);
               break;
           case 6:
               LineLoop(-0.3,0.3,0.3,0.0,-0.3,0.0,1,0,0);
               break;
           case 7:
               Polygon(-0.3,0.3,-0.3,0.0,0.3,0.0,0.3,0.3,0.0,0.6,0,1,0);
               break;
           case 8:
               TrianglesFan(-0.3,0.0,0.3,0.0,0.0,0.3,-0.6,0.6,0,0,1);
               break;
           case 9:
               QuadStrip(-0.3,0.0,0.3,0.0,0.0,0.3,0.6,0.6,0,0,1);
               break;
           case 10:
               TrianglesStrip(-0.3,0.3,-0.3,0.0,0.3,0.0,0.3,0.3,0.0,0.6,0,1,0);
               break;
          case 11:
          exit(0);
   }
   glutPostRedisplay();
   glFlush();
}

// METODO QUE RE DIBUJA LA PANTALLA
void redraw( void ){
    //Limpiando la pantalla
    glClear(GL_COLOR_BUFFER_BIT);
    // Haciendo uso del metodo menu, pasandoles como paramentro el id
    menu(id_menu[1]);
	glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowSize (700, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow("Ejemplo menu");
    init ();
    // CREACION DEL MENU PARA ELEGIR ALGUNA IMAGEN
    glutCreateMenu(menu);
      glutAddMenuEntry("POINTS",1);
      glutAddMenuEntry("LINES",2);
      glutAddMenuEntry("TRIANGLES",3);
      glutAddMenuEntry("QUADS",4);
      glutAddMenuEntry("LINE STRIP",5);
      glutAddMenuEntry("LINE LOOP",6);
      glutAddMenuEntry("POLYGON",7);
      glutAddMenuEntry("TRIANGLES FAN",8);
      glutAddMenuEntry("QUAD STRIP",9);
      glutAddMenuEntry("TRIANGLES STRIP",10);
      glutAddMenuEntry("SALIR",11);
      glutAttachMenu(GLUT_RIGHT_BUTTON); // Eligiendo con el click derecho del raton
	  glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
	  glutDisplayFunc(redraw);
	  glutIdleFunc(redraw);
    glutMainLoop();
    return 0;
}
