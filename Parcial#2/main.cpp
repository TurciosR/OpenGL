#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

//Definimos variables
double rotate_x=0;
GLfloat color=0.0f;
GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;

void display()
{
	glClearColor(1,1,1,0.5);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode( GL_MODELVIEW_MATRIX );
    glLoadIdentity();
	// Rotacion de -5 grados en torno al eje x
    glRotated(-5, 1.0, 0.0, 0.0);
	// Rotacion de 20 grados en torno al eje y
    glRotated(20.0, 0.0, 1.0, 0.0);
    glPushMatrix();
    //Dibujando el Cubo base Color Azul
    glColor3f(0.0, 0.0, 1.0);
    glTranslated(0.0f, -0.7f, 0.0f);
    glutSolidCube(0.2);
    glPopMatrix();
    glPushMatrix();
    //Dibujando el Mastil base Color Rojo
    glColor3f(1.0, 0.0, 0.0);
    glTranslated(0.0f, 0.2f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.0f, 0.1f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-0.0f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.0f, -0.1f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.0f, -0.2f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.0f, -0.3f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.0f, -0.4f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.0f, -0.5f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.0f, -0.6f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    //Barra Horizontal
    /*
     glBegin(GL_POLYGON);
		glColor3f(0.2, 0.4, 1.0);
		glRotatef( rotate_y, 0.0, 0.1, 0.0 );
		glTranslated(-0.7f, 0.3f, 0.0f);
		glNormal3f (-0.8, 0.4, 0.1);	
		glVertex3f (-0.8, 0.4, 0.1);	
		glNormal3f (0.33, 0.4, 0.1);
		glVertex3f (0.33, 0.4, 0.1);
		glNormal3f (0.33, 0.24, 0.1);	
		glVertex3f (0.33, 0.24, 0.1);
		glNormal3f (-0.8, 0.24, 0.1);	
		glVertex3f (-0.8, 0.24, 0.1);	
	glEnd();
    */
    glColor3f(0.2, 0.4, 1.0);
    glRotatef( rotate_x, 0.0, 0.1, 0.0 );
    glTranslated(0.0f, 0.3f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glRotatef( rotate_x, 0.0, 0.1, 0.0 );
    glTranslated(0.1f, 0.3f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glRotatef( rotate_x, 0.0, 0.1, 0.0 );
    glTranslated(0.2f, 0.3f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glRotatef( rotate_x, 0.0, 0.1, 0.0 );
    glTranslated(0.3f, 0.3f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glRotatef( rotate_x, 0.0, 0.1, 0.0 );
    glTranslated(0.4f, 0.3f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glRotatef( rotate_x, 0.0, 0.1, 0.0 );
    glTranslated(0.5f, 0.3f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    //Barra Vertical
    glRotatef( rotate_x, 0.0, 0.1, 0.0 );
    glTranslated(0.5f, 0.3f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glRotatef( rotate_x, 0.0, 0.1, 0.0 );
    glTranslated(0.5f, 0.2f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glRotatef( rotate_x, 0.0, 0.1, 0.0 );
    glTranslated(0.5f, 0.1f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    //Cable
    for(GLfloat i=-0.5; i<=0.1; i+=0.01)
        {
		glColor3f(0.75, 0.75, 0.75);
		glRotatef( rotate_x, 0.0, 0.1, 0.0 );
		glTranslatef(X, Y, Z); // Transladar en los 3 ejes
		glTranslated(0.5f,i, 0.0f);
		glutSolidCube(0.02);
		glPopMatrix();
		glPushMatrix();		
	    }
	//Cubo de la grua
	glColor3f(0.0, 0.0, 0.0);
	glRotatef( rotate_x, 0.0, 0.1, 0.0 );
	glTranslatef(X, Y, Z); // Transladar en los 3 ejes
    glTranslated(0.5f, -0.5f, 0.0f);
    glutSolidCube(0.05);
    glPopMatrix();
    glPushMatrix();
    //Cubo #1 Color Verde
    glColor3f(0+color, 1.0, 0.0);
    glTranslated(0.2f, 0.0f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    //Cubo #2 color rojo
    glColor3f(1.0, 0.0, color);
    glTranslated(0.3f, -0.8f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    //Cubo #3 Color Amarillo
    glColor3f(1.0, 1.0, 0.0);
    glTranslated(0.6f, -0.3f, 0.0f);
    glutSolidCube(0.1);
    glPopMatrix();
    glPushMatrix();
    glEnd();
    glFlush();
    glutSwapBuffers();

}

// Función para controlar teclas especiales
void specialKeys( int key, int x, int y )
{
    //  Flecha arriba: rotación en eje X positivo 7 grados
    if (key == GLUT_KEY_RIGHT)
		if(rotate_x<=-7)
		{
            rotate_x += 5;
        }
    //  Flecha abajo: rotación en eje X negativo 7 grados
    if (key == GLUT_KEY_LEFT)
		 if(rotate_x>=-180)
		 {
            rotate_x -= 5;
         }
        //  Flecha arriba: sube 0.01f en Y
    if (key == GLUT_KEY_UP)
			if(Y<=0.2)
			{
			Y += 0.01f;
			}
        
    //  Flecha abajo: baja 0.01f en Y
    if (key == GLUT_KEY_DOWN)
			if(Y >=0.0)
			{
			Y -= 0.01f;	
			}
     else{
            if(rotate_x==0){
                color=0.5;

            }
            if (rotate_x==60)
            {
                color=0.5;
            }
          }
    //  Solicitar actualización de visualización
    glutPostRedisplay();

}

int main(int argc, char* argv[])
{

    //  Inicializar los parámetros GLUT y de usuario proceso
    glutInit(&argc,argv);

    // Solicitar ventana con color real y doble buffer con Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (0, 0);
    // Crear ventana
    glutCreateWindow("Cubo controlado por teclas");

    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);

    // Funciones de retrollamada
    
    glutDisplayFunc(display);
    glutSpecialFunc(specialKeys);

    // Pasar el control de eventos a GLUT
    glutMainLoop();

    // Regresar al sistema operativo
    return 0;

}
