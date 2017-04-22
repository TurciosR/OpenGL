#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

double rotate_y=0;
double rotate_x=0;


GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
GLfloat light_position[] = {0.0, 0.2, -0.9, 0.0};

GLint ancho=900;
GLint alto=600;

// materiales globales
    GLfloat mat_ambient[] = { 0.1745f, 0.01175f, 0.01175f,1.0f };
    GLfloat mat_diffuse[] = { 0.61424f, 0.04136f, 0.04136f, 1.0f };
    GLfloat mat_specular[] = { 0.727811f, 0.626959f, 0.626959f, 1.0f };
    GLfloat shine[] = {27.8974f};
    //Ruby



void display(void)
{	

	
    /* AQUI BORRAMOS LA PANTALLA */
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); 
    
    glMatrixMode( GL_MODELVIEW_MATRIX );// Resetear transformaciones
    
    glLoadIdentity();
    
    //setMaterial
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
    // AQUI ROTAN EN EL EJE X, Y, Z
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
		//Triangulo derecha
		glBegin(GL_POLYGON);
		glNormal3f (0.4, 0.0, -0.4);
        glVertex3f (0.4, 0.0, -0.4);
        glNormal3f (-0.4, 0.0, -0.4);
        glVertex3f (-0.4, 0.0, -0.4);
        glNormal3f (0.0, 0.9, 0.0);
        glVertex3f (0.0, 0.9, 0.0);
        glEnd();
		//Triangulo de atras
		glBegin(GL_POLYGON);
		glNormal3f (-0.4, 0.0, -0.4);
		glVertex3f (-0.4, 0.0, -0.4);
		glNormal3f (-0.4, 0.0, 0.4);
		glVertex3f (-0.4, 0.0, 0.4);
		glNormal3f (0.0, 0.9, 0.0);
		glVertex3f (0.0, 0.9, 0.0);
		glEnd();
	 //Tringulo de la izquierda
		glBegin(GL_POLYGON);
		glNormal3f (-0.4, 0.0, 0.4);
		glVertex3f (-0.4, 0.0, 0.4);
		glNormal3f (0.4, 0.0, 0.4);
		glVertex3f (0.4, 0.0, 0.4);
		glNormal3f (0.0, 0.9, 0.0);
		glVertex3f (0.0, 0.9, 0.0);
		glEnd();

		//Triangulo frontal
		glBegin(GL_POLYGON);
		glNormal3f (0.4, 0.0, -0.4);
		glVertex3f (0.4, 0.0, -0.4);
		glNormal3f (0.4, 0.0, 0.4);
		glVertex3f (0.4, 0.0, 0.4);
		glNormal3f (0.0, 0.9, 0.0);
		glVertex3f (0.0, 0.9, 0.0);
		glEnd();
		//Base de la piramide
		glBegin(GL_POLYGON);
		glNormal3f (-0.4, 0.0, -0.4);
		glVertex3f (-0.4, 0.0, -0.4);
		glNormal3f (0.4, 0.0, -0.4);
		glVertex3f (0.4, 0.0, -0.4);
		glNormal3f (0.4, 0.0, 0.4);
		glVertex3f (0.4, 0.0, 0.4);
		glNormal3f (-0.4, 0.0, 0.4);
		glVertex3f (-0.4, 0.0, 0.4);
		
		glEnd();
    
    glFlush ();
    glutSwapBuffers();
}

void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel (GL_SMOOTH);
    glLightfv(GL_LIGHT0,GL_POSITION,light_position);
    glEnable(GL_LIGHTING); 
	glEnable(GL_LIGHT0);
	glDepthFunc(GL_LESS);
	glEnable(GL_DEPTH_TEST);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    ancho = 900;
    alto = 600;

}

void reshape(int width, int height) 
{

	glViewport(0, 0, width,height); 
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();                  
	glOrtho(-10, 10, -10, 10, -10, 10);
	glLoadIdentity(); 
	gluPerspective(45.0, GLfloat(width) / GLfloat(height), 1.0, 50.0);	
	ancho = width;
    alto = height;
	
}
 
void specialKeys( int key, int x, int y )
{

    //  Flecha derecha: aumentar rotación 15 grados
    if (key == GLUT_KEY_RIGHT)
        rotate_y += 15;

    //  Flecha izquierda: rotación en eje Y negativo 7 grados
    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 15;
        
    //  Flecha arriba: rotación en eje X positivo 7 grados
    else if (key == GLUT_KEY_UP)
        rotate_x += 15;
        
    //  Flecha abajo: rotación en eje X negativo 7 grados
    else if (key == GLUT_KEY_DOWN)
        rotate_x -= 15;

    glutPostRedisplay();

}

void idDisplay()
{
    display();
}

 
void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
	
	case '1':
        //Pasamos Material Pearl
        mat_ambient[0]=  (GLfloat)0.25; mat_ambient[1]=(GLfloat)0.20725; mat_ambient[2]=(GLfloat)0.20725; mat_ambient[3]=(GLfloat)1.0;
        mat_diffuse[0] = (GLfloat)1; mat_diffuse[1]=(GLfloat)0.829; mat_diffuse[2]=(GLfloat) 0.829; mat_diffuse[3]=(GLfloat) 1.0;
        mat_specular[0] =  (GLfloat)0.296648; mat_specular[1]=(GLfloat)0.296648; mat_specular[2]=(GLfloat)0.296648; mat_specular[3]=(GLfloat) 1.0;
        shine[0] = (GLfloat) 0.088;
        break;
    case '2':
        //Pasamos Material chorme
        mat_ambient[0]=  (GLfloat)0.25; mat_ambient[1]=(GLfloat)0.25; mat_ambient[2]=(GLfloat)0.25; mat_ambient[3]=(GLfloat)1.0;
        mat_diffuse[0] = (GLfloat)0.4; mat_diffuse[1]=(GLfloat)0.4; mat_diffuse[2]=(GLfloat)0.4; mat_diffuse[3]=(GLfloat) 1.0;
        mat_specular[0] =  (GLfloat)0.774597; mat_specular[1]=(GLfloat)0.774597; mat_specular[2]=(GLfloat)0.774597; mat_specular[3]=(GLfloat) 1.0;
        shine[0] = (GLfloat) 0.6;
        break;
    case '3':
        //Pasamos Material Turquoise
        mat_ambient[0]=  (GLfloat)0.1; mat_ambient[1]=(GLfloat)0.18725; mat_ambient[2]=(GLfloat)0.1745; mat_ambient[3]=(GLfloat)1.0;
        mat_diffuse[0] = (GLfloat)0.396; mat_diffuse[1]=(GLfloat)0.74151; mat_diffuse[2]=(GLfloat)0.69102; mat_diffuse[3]=(GLfloat) 1.0;
        mat_specular[0] =  (GLfloat)0.297254; mat_specular[1]=(GLfloat)0.30829; mat_specular[2]=(GLfloat)0.306678; mat_specular[3]=(GLfloat) 1.0;
        shine[0] = (GLfloat) 0.1;
        break;
    case '4':
        //Pasamos Material Cyan emerald
        mat_ambient[0]=  (GLfloat) 0.0215; mat_ambient[1]=(GLfloat)0.1745; mat_ambient[2]=(GLfloat)0.0215; mat_ambient[3]=(GLfloat)1.0;
        mat_diffuse[0] = (GLfloat)0.07568; mat_diffuse[1]=(GLfloat)0.61424; mat_diffuse[2]=(GLfloat)0.07568; mat_diffuse[3]=(GLfloat) 1.0;
        mat_specular[0] =  (GLfloat)0.633; mat_specular[1]=(GLfloat)0.727211; mat_specular[2]=(GLfloat)0.633; mat_specular[3]=(GLfloat) 1.0;
        shine[0] = (GLfloat) 0.6;
        break;
    case '5':
        //Pasamos Material Green plastic
        mat_ambient[0]=  (GLfloat)0.0; mat_ambient[1]=(GLfloat)0.0; mat_ambient[2]=(GLfloat)0.0; mat_ambient[3]=(GLfloat)1.0;
        mat_diffuse[0] = (GLfloat)0.1; mat_diffuse[1]=(GLfloat)0.35; mat_diffuse[2]=(GLfloat)0.01; mat_diffuse[3]=(GLfloat) 1.0;
        mat_specular[0] =  (GLfloat)0.45; mat_specular[1]=(GLfloat)0.55; mat_specular[2]=(GLfloat)0.45; mat_specular[3]=(GLfloat) 1.0;
        shine[0] = (GLfloat) 0.25;

        break;
    case 'q': 
      exit(0);  
    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(700, 500);  
    glutInitWindowPosition(0,0);
    glutCreateWindow("Piramide");
    
    init();                      
    glutDisplayFunc(display);    
    glutReshapeFunc(reshape);    
    glutIdleFunc(idDisplay);    
    glutKeyboardFunc(keyboard); 
    glutSpecialFunc(specialKeys);
    
    glutMainLoop();
    return 0;

}
