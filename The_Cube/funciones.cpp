GLuint texture[0];
//Funcion que dibuja el cesped
void cesped(void)
{
  //Definicion de texturas
  texture[0] = SOIL_load_OGL_texture // load an image file directly as a new OpenGL texture
  (
      "cesped1.jpeg",
      SOIL_LOAD_AUTO,
      SOIL_CREATE_NEW_ID,
      SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
  );
  glEnable(GL_TEXTURE_2D);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
  // allocate a texture name
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
  //Definicion de texturas
  texture[0] = SOIL_load_OGL_texture // load an image file directly as a new OpenGL texture
  (
      "arena_2.jpg",
      SOIL_LOAD_AUTO,
      SOIL_CREATE_NEW_ID,
      SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
  );
  glEnable(GL_TEXTURE_2D);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
  // allocate a texture name
  glBindTexture(GL_TEXTURE_2D, texture[0]);
  glBegin(GL_QUADS);
  glTexCoord2f(1,1000); glVertex3f( -1.0f, 0.01f, -1000.0f );
  glTexCoord2f(0,1000); glVertex3f( -1.0f, 0.01f,  1000.0f );
  glTexCoord2f(1,0);    glVertex3f(  1.0f, 0.01f,  1000.0f );
  glTexCoord2f(0,0);    glVertex3f(  1.0f, 0.01f, -1000.0f );
  glEnd();
}
void cubo(void)
{
  //Definicion de texturas
  texture[1] = SOIL_load_OGL_texture // load an image file directly as a new OpenGL texture
  (
      "cara.jpg",
      SOIL_LOAD_AUTO,
      SOIL_CREATE_NEW_ID,
      SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
  );
// Frente
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D, texture[1]);
glBegin(GL_POLYGON);
glNormal3f( 0.0f, 0.0f, 1.0f);
glTexCoord2f(0.0f, 0.0f); glVertex3f(-0.5f, -0.5f, 0.5f);
glTexCoord2f(1.0f, 0.0f); glVertex3f( 0.5f, -0.5f, 0.5f);
glTexCoord2f(1.0f, 1.0f); glVertex3f( 0.5f, 0.5f, 0.5f);
glTexCoord2f(0.0f, 1.0f); glVertex3f(-0.5f, 0.5f, 0.5f);
glEnd();

// parte de Atras
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D, texture[1]);
glBegin(GL_POLYGON);
glNormal3f( 0.0f, 0.0f,-1.0f);
glTexCoord2f(1.0f, 0.0f); glVertex3f(-0.5f, -0.5f, -0.5f);
glTexCoord2f(1.0f, 1.0f); glVertex3f(-0.5f, 0.5f, -0.5f);
glTexCoord2f(0.0f, 1.0f); glVertex3f( 0.5f, 0.5f, -0.5f);
glTexCoord2f(0.0f, 0.0f); glVertex3f( 0.5f, -0.5f, -0.5f);
glEnd();
// Arriba
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D, texture[1]);
glBegin(GL_POLYGON);
glNormal3f( 0.0f, 1.0f, 0.0f);
glTexCoord2f(0.0f, 1.0f); glVertex3f(-0.5f, 0.5f, -0.5f);
glTexCoord2f(0.0f, 0.0f); glVertex3f(-0.5f, 0.5f, 0.5f);
glTexCoord2f(1.0f, 0.0f); glVertex3f( 0.5f, 0.5f, 0.5f);
glTexCoord2f(1.0f, 1.0f); glVertex3f( 0.5f, 0.5f, -0.5f);
glEnd();

// Abajo
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D, texture[1]);
glBegin(GL_POLYGON);
glNormal3f( 0.0f,-1.0f, 0.0f);
glTexCoord2f(1.0f, 1.0f); glVertex3f(-0.5f, -0.5f, -0.5f);
glTexCoord2f(0.0f, 1.0f); glVertex3f( 0.5f, -0.5f, -0.5f);
glTexCoord2f(0.0f, 0.0f); glVertex3f( 0.5f, -0.5f, 0.5f);
glTexCoord2f(1.0f, 0.0f); glVertex3f(-0.5f, -0.5f, 0.5f);
glEnd();

// lado Derecho
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D, texture[1]);
glBegin(GL_POLYGON);
glNormal3f( 1.0f, 0.0f, 0.0f);
glTexCoord2f(1.0f, 0.0f); glVertex3f( 0.0f, -0.5f, -0.5f);
glTexCoord2f(1.0f, 1.0f); glVertex3f( 0.0f, 0.5f, -0.5f);
glTexCoord2f(0.0f, 1.0f); glVertex3f( 0.0f, 0.5f, 0.5f);
glTexCoord2f(0.0f, 0.0f); glVertex3f( 0.0f, -0.5f, 0.5f);
glEnd();

// Lado Izquierdo
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D, texture[1]);
glBegin(GL_POLYGON);
glNormal3f(-1.0f, 0.0f, 0.0f);
glTexCoord2f(0.0f, 0.0f); glVertex3f(-0.5f, -0.5f, -0.5f);
glTexCoord2f(1.0f, 0.0f); glVertex3f(-0.5f, -0.5f, 0.5f);
glTexCoord2f(1.0f, 1.0f); glVertex3f(-0.5f, 0.5f, 0.5f);
glTexCoord2f(0.0f, 1.0f); glVertex3f(-0.5f, 0.5f, -0.5f);
glEnd();

  glDisable(GL_TEXTURE_2D);
  //glFlush();
  glutSwapBuffers();
}
void opstaculos(void)
{
  float a = 900.0;
  int par = 1;
  glColor3f(1, 0, 0);
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
    par*=-1;
    a-=5.0;
  }
  glColor3f(1.0,1.0,1.0);
}
//textura del arbol
void arbol(void)
{
  texture[0] = SOIL_load_OGL_texture // load an image file directly as a new OpenGL texture
  (
      "hojas1.jpg",
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
      "arbol.jpg",
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
