#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

void Tablero(void)
{
  //Columna #1 de izquierda a Derecha
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(6.5f,-16.0f,0.0f);
  glVertex3f(8.5f,-16.0f,0.0f);
  glVertex3f(8.5f,-18.0f,0.0f);
  glVertex3f(6.5f,-18.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(6.5f,-14.0f,0.0f);
  glVertex3f(8.5f,-14.0f,0.0f);
  glVertex3f(8.5f,-16.0f,0.0f);
  glVertex3f(6.5f,-16.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(6.5f,-12.0f,0.0f);
  glVertex3f(8.5f,-12.0f,0.0f);
  glVertex3f(8.5f,-14.0f,0.0f);
  glVertex3f(6.5f,-14.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(6.5f,-10.0f,0.0f);
  glVertex3f(8.5f,-10.0f,0.0f);
  glVertex3f(8.5f,-12.0f,0.0f);
  glVertex3f(6.5f,-12.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(6.5f,-8.0f,0.0f);
  glVertex3f(8.5f,-8.0f,0.0f);
  glVertex3f(8.5f,-10.0f,0.0f);
  glVertex3f(6.5f,-10.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(6.5f,-6.0f,0.0f);
  glVertex3f(8.5f,-6.0f,0.0f);
  glVertex3f(8.5f,-8.0f,0.0f);
  glVertex3f(6.5f,-8.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(6.5f,-4.0f,0.0f);
  glVertex3f(8.5f,-4.0f,0.0f);
  glVertex3f(8.5f,-6.0f,0.0f);
  glVertex3f(6.5f,-6.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(6.5f,-2.0f,0.0f);
  glVertex3f(8.5f,-2.0f,0.0f);
  glVertex3f(8.5f,-4.0f,0.0f);
  glVertex3f(6.5f,-4.0f,0.0f);
  glEnd();

  //Columna #2 de izquierda a Derecha
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(4.5f,-16.0f,0.0f);
  glVertex3f(6.5f,-16.0f,0.0f);
  glVertex3f(6.5f,-18.0f,0.0f);
  glVertex3f(4.5f,-18.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(4.5f,-14.0f,0.0f);
  glVertex3f(6.5f,-14.0f,0.0f);
  glVertex3f(6.5f,-16.0f,0.0f);
  glVertex3f(4.5f,-16.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(4.5f,-12.0f,0.0f);
  glVertex3f(6.5f,-12.0f,0.0f);
  glVertex3f(6.5f,-14.0f,0.0f);
  glVertex3f(4.5f,-14.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(4.5f,-10.0f,0.0f);
  glVertex3f(6.5f,-10.0f,0.0f);
  glVertex3f(6.5f,-12.0f,0.0f);
  glVertex3f(4.5f,-12.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(4.5f,-8.0f,0.0f);
  glVertex3f(6.5f,-8.0f,0.0f);
  glVertex3f(6.5f,-10.0f,0.0f);
  glVertex3f(4.5f,-10.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(4.5f,-6.0f,0.0f);
  glVertex3f(6.5f,-6.0f,0.0f);
  glVertex3f(6.5f,-8.0f,0.0f);
  glVertex3f(4.5f,-8.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(4.5f,-4.0f,0.0f);
  glVertex3f(6.5f,-4.0f,0.0f);
  glVertex3f(6.5f,-6.0f,0.0f);
  glVertex3f(4.5f,-6.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(4.5f,-2.0f,0.0f);
  glVertex3f(6.5f,-2.0f,0.0f);
  glVertex3f(6.5f,-4.0f,0.0f);
  glVertex3f(4.5f,-4.0f,0.0f);
  glEnd();

  //Columna #3 de izquierda a Derecha
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(2.5f,-16.0f,0.0f);
  glVertex3f(4.5f,-16.0f,0.0f);
  glVertex3f(4.5f,-18.0f,0.0f);
  glVertex3f(2.5f,-18.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(2.5f,-14.0f,0.0f);
  glVertex3f(4.5f,-14.0f,0.0f);
  glVertex3f(4.5f,-16.0f,0.0f);
  glVertex3f(2.5f,-16.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(2.5f,-12.0f,0.0f);
  glVertex3f(4.5f,-12.0f,0.0f);
  glVertex3f(4.5f,-14.0f,0.0f);
  glVertex3f(2.5f,-14.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(2.5f,-10.0f,0.0f);
  glVertex3f(4.5f,-10.0f,0.0f);
  glVertex3f(4.5f,-12.0f,0.0f);
  glVertex3f(2.5f,-12.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(2.5f,-8.0f,0.0f);
  glVertex3f(4.5f,-8.0f,0.0f);
  glVertex3f(4.5f,-10.0f,0.0f);
  glVertex3f(2.5f,-10.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(2.5f,-6.0f,0.0f);
  glVertex3f(4.5f,-6.0f,0.0f);
  glVertex3f(4.5f,-8.0f,0.0f);
  glVertex3f(2.5f,-8.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(2.5f,-4.0f,0.0f);
  glVertex3f(4.5f,-4.0f,0.0f);
  glVertex3f(4.5f,-6.0f,0.0f);
  glVertex3f(2.5f,-6.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(2.5f,-2.0f,0.0f);
  glVertex3f(4.5f,-2.0f,0.0f);
  glVertex3f(4.5f,-4.0f,0.0f);
  glVertex3f(2.5f,-4.0f,0.0f);
  glEnd();

  //Columna #4 de izquierda a Derecha
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(0.0f,-16.0f,0.0f);
  glVertex3f(2.5f,-16.0f,0.0f);
  glVertex3f(2.5f,-18.0f,0.0f);
  glVertex3f(0.0f,-18.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(0.0f,-14.0f,0.0f);
  glVertex3f(2.5f,-14.0f,0.0f);
  glVertex3f(2.5f,-16.0f,0.0f);
  glVertex3f(0.0f,-16.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(0.0f,-12.0f,0.0f);
  glVertex3f(2.5f,-12.0f,0.0f);
  glVertex3f(2.5f,-14.0f,0.0f);
  glVertex3f(0.0f,-14.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(0.0f,-10.0f,0.0f);
  glVertex3f(2.5f,-10.0f,0.0f);
  glVertex3f(2.5f,-12.0f,0.0f);
  glVertex3f(0.0f,-12.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(0.0f,-8.0f,0.0f);
  glVertex3f(2.5f,-8.0f,0.0f);
  glVertex3f(2.5f,-10.0f,0.0f);
  glVertex3f(0.0f,-10.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(0.0f,-6.0f,0.0f);
  glVertex3f(2.5f,-6.0f,0.0f);
  glVertex3f(2.5f,-8.0f,0.0f);
  glVertex3f(0.0f,-8.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(0.0f,-4.0f,0.0f);
  glVertex3f(2.5f,-4.0f,0.0f);
  glVertex3f(2.5f,-6.0f,0.0f);
  glVertex3f(0.0f,-6.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(0.0f,-2.0f,0.0f);
  glVertex3f(2.5f,-2.0f,0.0f);
  glVertex3f(2.5f,-4.0f,0.0f);
  glVertex3f(0.0f,-4.0f,0.0f);
  glEnd();

  //Columna #5 de izquierda a Derecha
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(0.0f,-16.0f,0.0f);
  glVertex3f(-2.5f,-16.0f,0.0f);
  glVertex3f(-2.5f,-18.0f,0.0f);
  glVertex3f(0.0f,-18.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(0.0f,-14.0f,0.0f);
  glVertex3f(-2.5f,-14.0f,0.0f);
  glVertex3f(-2.5f,-16.0f,0.0f);
  glVertex3f(0.0f,-16.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(0.0f,-12.0f,0.0f);
  glVertex3f(-2.5f,-12.0f,0.0f);
  glVertex3f(-2.5f,-14.0f,0.0f);
  glVertex3f(0.0f,-14.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(0.0f,-10.0f,0.0f);
  glVertex3f(-2.5f,-10.0f,0.0f);
  glVertex3f(-2.5f,-12.0f,0.0f);
  glVertex3f(0.0f,-12.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(0.0f,-8.0f,0.0f);
  glVertex3f(-2.5f,-8.0f,0.0f);
  glVertex3f(-2.5f,-10.0f,0.0f);
  glVertex3f(0.0f,-10.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(0.0f,-6.0f,0.0f);
  glVertex3f(-2.5f,-6.0f,0.0f);
  glVertex3f(-2.5f,-8.0f,0.0f);
  glVertex3f(0.0f,-8.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(0.0f,-4.0f,0.0f);
  glVertex3f(-2.5f,-4.0f,0.0f);
  glVertex3f(-2.5f,-6.0f,0.0f);
  glVertex3f(0.0f,-6.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(0.0f,-2.0f,0.0f);
  glVertex3f(-2.5f,-2.0f,0.0f);
  glVertex3f(-2.5f,-4.0f,0.0f);
  glVertex3f(0.0f,-4.0f,0.0f);
  glEnd();
  //Columna #6 de izquierda a Derecha
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(-2.5f,-16.0f,0.0f);
  glVertex3f(-4.5f,-16.0f,0.0f);
  glVertex3f(-4.5f,-18.0f,0.0f);
  glVertex3f(-2.5f,-18.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(-2.5f,-14.0f,0.0f);
  glVertex3f(-4.5f,-14.0f,0.0f);
  glVertex3f(-4.5f,-16.0f,0.0f);
  glVertex3f(-2.5f,-16.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(-2.5f,-12.0f,0.0f);
  glVertex3f(-4.5f,-12.0f,0.0f);
  glVertex3f(-4.5f,-14.0f,0.0f);
  glVertex3f(-2.5f,-14.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(-2.5f,-10.0f,0.0f);
  glVertex3f(-4.5f,-10.0f,0.0f);
  glVertex3f(-4.5f,-12.0f,0.0f);
  glVertex3f(-2.5f,-12.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(-2.5f,-8.0f,0.0f);
  glVertex3f(-4.5f,-8.0f,0.0f);
  glVertex3f(-4.5f,-10.0f,0.0f);
  glVertex3f(-2.5f,-10.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(-2.5f,-6.0f,0.0f);
  glVertex3f(-4.5f,-6.0f,0.0f);
  glVertex3f(-4.5f,-8.0f,0.0f);
  glVertex3f(-2.5f,-8.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(-2.5f,-4.0f,0.0f);
  glVertex3f(-4.5f,-4.0f,0.0f);
  glVertex3f(-4.5f,-6.0f,0.0f);
  glVertex3f(-2.5f,-6.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(-2.5f,-2.0f,0.0f);
  glVertex3f(-4.5f,-2.0f,0.0f);
  glVertex3f(-4.5f,-4.0f,0.0f);
  glVertex3f(-2.5f,-4.0f,0.0f);
  glEnd();
  //Columna #7 de izquierda a Derecha
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(-4.5f,-16.0f,0.0f);
  glVertex3f(-6.5f,-16.0f,0.0f);
  glVertex3f(-6.5f,-18.0f,0.0f);
  glVertex3f(-4.5f,-18.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(-4.5f,-14.0f,0.0f);
  glVertex3f(-6.5f,-14.0f,0.0f);
  glVertex3f(-6.5f,-16.0f,0.0f);
  glVertex3f(-4.5f,-16.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(-4.5f,-12.0f,0.0f);
  glVertex3f(-6.5f,-12.0f,0.0f);
  glVertex3f(-6.5f,-14.0f,0.0f);
  glVertex3f(-4.5f,-14.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(-4.5f,-10.0f,0.0f);
  glVertex3f(-6.5f,-10.0f,0.0f);
  glVertex3f(-6.5f,-12.0f,0.0f);
  glVertex3f(-4.5f,-12.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(-4.5f,-8.0f,0.0f);
  glVertex3f(-6.5f,-8.0f,0.0f);
  glVertex3f(-6.5f,-10.0f,0.0f);
  glVertex3f(-4.5f,-10.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(-4.5f,-6.0f,0.0f);
  glVertex3f(-6.5f,-6.0f,0.0f);
  glVertex3f(-6.5f,-8.0f,0.0f);
  glVertex3f(-4.5f,-8.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(-4.5f,-4.0f,0.0f);
  glVertex3f(-6.5f,-4.0f,0.0f);
  glVertex3f(-6.5f,-6.0f,0.0f);
  glVertex3f(-4.5f,-6.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(-4.5f,-2.0f,0.0f);
  glVertex3f(-6.5f,-2.0f,0.0f);
  glVertex3f(-6.5f,-4.0f,0.0f);
  glVertex3f(-4.5f,-4.0f,0.0f);
  glEnd();
  //Columna #8 de izquierda a Derecha
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(-6.5f,-16.0f,0.0f);
  glVertex3f(-8.5f,-16.0f,0.0f);
  glVertex3f(-8.5f,-18.0f,0.0f);
  glVertex3f(-6.5f,-18.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(-6.5f,-14.0f,0.0f);
  glVertex3f(-8.5f,-14.0f,0.0f);
  glVertex3f(-8.5f,-16.0f,0.0f);
  glVertex3f(-6.5f,-16.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(-6.5f,-12.0f,0.0f);
  glVertex3f(-8.5f,-12.0f,0.0f);
  glVertex3f(-8.5f,-14.0f,0.0f);
  glVertex3f(-6.5f,-14.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(-6.5f,-10.0f,0.0f);
  glVertex3f(-8.5f,-10.0f,0.0f);
  glVertex3f(-8.5f,-12.0f,0.0f);
  glVertex3f(-6.5f,-12.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(-6.5f,-8.0f,0.0f);
  glVertex3f(-8.5f,-8.0f,0.0f);
  glVertex3f(-8.5f,-10.0f,0.0f);
  glVertex3f(-6.5f,-10.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(-6.5f,-6.0f,0.0f);
  glVertex3f(-8.5f,-6.0f,0.0f);
  glVertex3f(-8.5f,-8.0f,0.0f);
  glVertex3f(-6.5f,-8.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(1.0, 1.0, 1.0);
  glVertex3f(-6.5f,-4.0f,0.0f);
  glVertex3f(-8.5f,-4.0f,0.0f);
  glVertex3f(-8.5f,-6.0f,0.0f);
  glVertex3f(-6.5f,-6.0f,0.0f);
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(-6.5f,-2.0f,0.0f);
  glVertex3f(-8.5f,-2.0f,0.0f);
  glVertex3f(-8.5f,-4.0f,0.0f);
  glVertex3f(-6.5f,-4.0f,0.0f);
  glEnd();
}
void display(void)
{
    //  Borrar pantalla y Z-buffer
    glClearColor(0.75,0.75,0.75,0.5);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    // Resetear transformaciones
    glLoadIdentity();

    //Dibujando El Tablero
  	Tablero();
    //Dibujando lineas
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-8.5f, -2.0f, 0.0f);
    glVertex3f(-8.5f, -18.0f, 0.0f);
    glVertex3f(8.5f, -2.0f, 0.0f);
    glVertex3f(8.5f, -18.0f, 0.0f);
    glVertex3f(8.5f, -2.0f, 0.0f);
    glVertex3f(-8.5f, -2.0f, 0.0f);
    glVertex3f(-8.5f, -2.0f, 0.0f);
    glVertex3f(-6.25f, -2.0f, -20.0f);
    glVertex3f(8.5f, -2.0f, 0.0f);
    glVertex3f(6.25f, -2.0f, -20.0f);
    glEnd();
    glFlush();
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}

void reshape(int w, int h)
{
  glClearColor(0,0,0.2,0.1);
	glViewport(0,0,(GLsizei)w,(GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(80.0f, (GLfloat)w/(GLfloat)h, 0.0f, 1.0f);

	gluLookAt(0.0,-24.0,-10.0,0.0,3.0,-1.0,0.0,1.0,0.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 800);//tamaño de la ventana
    glutInitWindowPosition (300, 100);//posicion de la ventana en la pantalla
    glutCreateWindow ("Figura#2");//nombre de la ventana
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}