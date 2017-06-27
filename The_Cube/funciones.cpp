GLuint texture[0];
//Funcion que dibuja el cesped
void cesped(void)
{
  //Definicion de texturas
  //textura del cesped
  texture[0] = SOIL_load_OGL_texture // load an image file directly as a new OpenGL texture
  (
      "cesped.bmp",
      SOIL_LOAD_AUTO,
      SOIL_CREATE_NEW_ID,
      SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
  );
  glEnable(GL_TEXTURE_2D);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
  // dibujando el cesped
  glBindTexture(GL_TEXTURE_2D, texture[0]);
  glBegin(GL_QUADS);
  glTexCoord2f(1000,1000); glVertex3f( -50.0f, 0.0f, -1000.0f);
  glTexCoord2f(0,1000);    glVertex3f( -50.0f, 0.0f,  1000.0f);
  glTexCoord2f(1000,0);    glVertex3f(  50.0f, 0.0f,  1000.0f);
  glTexCoord2f(0,0);       glVertex3f(  50.0f, 0.0f, -1000.0f);
  glEnd();
}

//Funcion que dibuja el camino
void camino(void)
{
  //Definicion de textura del camino
  texture[0] = SOIL_load_OGL_texture // load an image file directly as a new OpenGL texture
  (
      "arena_2.bmp",
      SOIL_LOAD_AUTO,
      SOIL_CREATE_NEW_ID,
      SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
  );
  glEnable(GL_TEXTURE_2D);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
  // dibujando el camino
  glBindTexture(GL_TEXTURE_2D, texture[0]);
  glBegin(GL_QUADS);
  glTexCoord2f(1,10000); glVertex3f( -1.0f, 0.01f, -1000.0f );
  glTexCoord2f(0,10000); glVertex3f( -1.0f, 0.01f,  1000.0f );
  glTexCoord2f(1,0);    glVertex3f(  1.0f, 0.01f,  1000.0f );
  glTexCoord2f(0,0);    glVertex3f(  1.0f, 0.01f, -1000.0f );
  glEnd();
}
//funcion que dibuja el cubo
void cubo(void)
{
  //Definicion de texturas del cubo
  texture[1] = SOIL_load_OGL_texture // load an image file directly as a new OpenGL texture
  (
      "cara2.bmp",
      SOIL_LOAD_AUTO,
      SOIL_CREATE_NEW_ID,
      SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
  );
//dibujando el cubo
// Frente
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D, texture[1]);
glBegin(GL_POLYGON);
glTexCoord2f(0.0f, 0.0f); glVertex3f(-0.5f, -0.5f, 0.5f);
glTexCoord2f(1.0f, 0.0f); glVertex3f( 0.5f, -0.5f, 0.5f);
glTexCoord2f(1.0f, 1.0f); glVertex3f( 0.5f, 0.5f, 0.5f);
glTexCoord2f(0.0f, 1.0f); glVertex3f(-0.5f, 0.5f, 0.5f);
glEnd();
glDisable(GL_TEXTURE_2D);

glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0);
glTexCoord2f(1.0f, 0.0f); glVertex3f(-0.5f, -0.5f, -0.5f);
glTexCoord2f(1.0f, 1.0f); glVertex3f(-0.5f, 0.5f, -0.5f);
glTexCoord2f(0.0f, 1.0f); glVertex3f( 0.5f, 0.5f, -0.5f);
glTexCoord2f(0.0f, 0.0f); glVertex3f( 0.5f, -0.5f, -0.5f);
glEnd();
// Arriba
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0);
glTexCoord2f(0.0f, 1.0f); glVertex3f(-0.5f, 0.5f, -0.5f);
glTexCoord2f(0.0f, 0.0f); glVertex3f(-0.5f, 0.5f, 0.5f);
glTexCoord2f(1.0f, 0.0f); glVertex3f( 0.5f, 0.5f, 0.5f);
glTexCoord2f(1.0f, 1.0f); glVertex3f( 0.5f, 0.5f, -0.5f);
glEnd();

// Abajo
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0);
glTexCoord2f(1.0f, 1.0f); glVertex3f(-0.5f, -0.5f, -0.5f);
glTexCoord2f(0.0f, 1.0f); glVertex3f( 0.5f, -0.5f, -0.5f);
glTexCoord2f(0.0f, 0.0f); glVertex3f( 0.5f, -0.5f, 0.5f);
glTexCoord2f(1.0f, 0.0f); glVertex3f(-0.5f, -0.5f, 0.5f);
glEnd();

// lado Derecho
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0);
glTexCoord2f(1.0f, 0.0f); glVertex3f( 0.0f, -0.5f, -0.5f);
glTexCoord2f(1.0f, 1.0f); glVertex3f( 0.0f, 0.5f, -0.5f);
glTexCoord2f(0.0f, 1.0f); glVertex3f( 0.0f, 0.5f, 0.5f);
glTexCoord2f(0.0f, 0.0f); glVertex3f( 0.0f, -0.5f, 0.5f);
glEnd();

// Lado Izquierdo
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0);
glTexCoord2f(0.0f, 0.0f); glVertex3f(-0.5f, -0.5f, -0.5f);
glTexCoord2f(1.0f, 0.0f); glVertex3f(-0.5f, -0.5f, 0.5f);
glTexCoord2f(1.0f, 1.0f); glVertex3f(-0.5f, 0.5f, 0.5f);
glTexCoord2f(0.0f, 1.0f); glVertex3f(-0.5f, 0.5f, -0.5f);
glEnd();



  glFlush();
  glutSwapBuffers();
  glColor3f(1.0, 1.0, 1.0);
}
//funcion que dibujando los obstaculos
void obstaculos(void)
{
  float a = 900.0;
  int par = -1;
  glColor3f(1, 0, 0);//color del obstaculo
  for (int i=0; i<200; i++)
  {
    if(a>-5)
    {
        glBegin(GL_POLYGON);
        glVertex3f( -1.0*par,-0.2f, a);
        glVertex3f(  0.0*par,-0.2f, a);
        glVertex3f(  0.0*par, 0.2f, a);
        glVertex3f( -1.0*par, 0.2f, a);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f( -1.0*par, 0.2f, a+0.5);
        glVertex3f(  0.0*par, 0.2f, a+0.5);
        glVertex3f(  0.0*par, 0.2f, a);
        glVertex3f( -1.0*par, 0.2f, a);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f( -1.0*par,-0.2f, a+0.5);
        glVertex3f(  0.0*par,-0.2f, a+0.5);
        glVertex3f(  0.0*par, 0.2f, a+0.5);
        glVertex3f( -1.0*par, 0.2f, a+0.5);
        glEnd();
    }
   // printf("%f\n", a);
    par*=-1;
    a-=5.0;
  }
  glColor3f(1.0,1.0,1.0);
}
//funcion que dibuja el arbol
void arbol(void)
{
  //textura de los arboles
  texture[0] = SOIL_load_OGL_texture // load an image file directly as a new OpenGL texture
  (
      "hojas1.bmp",
      SOIL_LOAD_AUTO,
      SOIL_CREATE_NEW_ID,
      SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
  );
  glEnable(GL_TEXTURE_2D);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

  texture[1] = SOIL_load_OGL_texture // load an image file directly as a new OpenGL texture
  (
      "arbol.bmp",
      SOIL_LOAD_AUTO,
      SOIL_CREATE_NEW_ID,
      SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
  );
  glEnable(GL_TEXTURE_2D);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
  //Arbol#1
  float a=700.0;
  for (int i=-10; i<200; i++)
  {
    if(a>-500)
    //dibujando el arbol
    {
    glBindTexture(GL_TEXTURE_2D, texture[0]);
    glBegin(GL_TRIANGLES);
      glTexCoord2f(1,1);glVertex3f( 4.0f, 1.0f, a );
      glTexCoord2f(0,1);glVertex3f( 6.0f, 1.0f, a );
      glTexCoord2f(1,0);glVertex3f( 5.0f, 3.0f, a );
    glEnd();
    glBegin(GL_TRIANGLES);
      glTexCoord2f(1,1);glVertex3f( 4.0f, 1.7f, a );
      glTexCoord2f(0,1);glVertex3f( 6.0f, 1.7f, a );
      glTexCoord2f(1,0);glVertex3f( 5.0f, 4.0f, a );
    glEnd();
    glBindTexture(GL_TEXTURE_2D, texture[1]);
    glBegin(GL_QUADS);
      glTexCoord2f(1,1);glVertex3f( 4.8f, 0.0f, a );
      glTexCoord2f(0,1);glVertex3f( 4.8f, 1.0f, a );
      glTexCoord2f(1,0);glVertex3f( 5.2f, 1.0f, a );
      glTexCoord2f(0,0);glVertex3f( 5.2f, 0.0f, a );
    glEnd();
  }
  if(a>-500)
  {
    glBindTexture(GL_TEXTURE_2D, texture[0]);
    glBegin(GL_TRIANGLES);
      glTexCoord2f(1,1);glVertex3f( -4.0f, 1.0f, a );
      glTexCoord2f(0,1);glVertex3f( -6.0f, 1.0f, a );
      glTexCoord2f(1,0);glVertex3f( -5.0f, 3.0f, a );
    glEnd();
    glBegin(GL_TRIANGLES);
      glTexCoord2f(1,1);glVertex3f( -4.0f, 1.7f, a );
      glTexCoord2f(0,1);glVertex3f( -6.0f, 1.7f, a );
      glTexCoord2f(1,0);glVertex3f( -5.0f, 4.0f, a );
    glEnd();
    glBindTexture(GL_TEXTURE_2D, texture[1]);
    glBegin(GL_QUADS);
      glTexCoord2f(1,1);glVertex3f( -4.8f, 0.0f, a );
      glTexCoord2f(0,1);glVertex3f( -4.8f, 1.0f, a );
      glTexCoord2f(1,0);glVertex3f( -5.2f, 1.0f, a );
      glTexCoord2f(0,0);glVertex3f( -5.2f, 0.0f, a );
    glEnd();
  }
  a-=5.0;
  }
 }
