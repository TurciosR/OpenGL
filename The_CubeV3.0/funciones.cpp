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
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

  texture[1] = SOIL_load_OGL_texture // load an image file directly as a new OpenGL texture
  (
      "arena_2.bmp",
      SOIL_LOAD_AUTO,
      SOIL_CREATE_NEW_ID,
      SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
  );
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
  // dibujando el cesped
  glEnable(GL_TEXTURE_2D);
  glBindTexture(GL_TEXTURE_2D, texture[0]);
  glBegin(GL_QUADS);
  glTexCoord2f(100,100);  glVertex3f( -50.0f, 0.0f, -60.0f);
  glTexCoord2f(0,100);    glVertex3f( -50.0f, 0.0f,  60.0f);
  glTexCoord2f(100,0);    glVertex3f(  50.0f, 0.0f,  60.0f);
  glTexCoord2f(0,0);      glVertex3f(  50.0f, 0.0f, -60.0f);
  glEnd();
  glDisable(GL_TEXTURE_2D);
  glEnable(GL_TEXTURE_2D);
  glBindTexture(GL_TEXTURE_2D, texture[1]);
  glBegin(GL_QUADS);
  glTexCoord2f(1000,1000); glVertex3f( -50.0f, 0.0f,  60.0f);
  glTexCoord2f(0,1000);    glVertex3f( -50.0f, 0.0f,  130.0f);
  glTexCoord2f(1000,0);    glVertex3f(  50.0f, 0.0f,  130.0f);
  glTexCoord2f(0,0);       glVertex3f(  50.0f, 0.0f,  60.0f);
  glEnd();
  glDisable(GL_TEXTURE_2D);
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
  glTexCoord2f(1,10000); glVertex3f( -1.0f, 0.01f, -60.0f );
  glTexCoord2f(0,10000); glVertex3f( -1.0f, 0.01f,  60.0f );
  glTexCoord2f(1,0);    glVertex3f(  1.0f, 0.01f,   60.0f );
  glTexCoord2f(0,0);    glVertex3f(  1.0f, 0.01f,  -60.0f );
  glEnd();
  glBegin(GL_QUADS);
  glColor3f(0.0, 0.0, 1.0);
  glTexCoord2f(1000,1000); glVertex3f( -1.0f, 0.01f,  60.0f);
  glTexCoord2f(0,1000);    glVertex3f( -1.0f, 0.01f,  130.0f);
  glTexCoord2f(1000,0);    glVertex3f(  1.0f, 0.01f,  130.0f);
  glTexCoord2f(0,0);       glVertex3f(  1.0f, 0.01f,  60.0f);
  glEnd();
  glColor3f(1.0, 1.0, 1.0);
}
//funcion que dibuja el cubo
void cubo(void)
{
  //Definicion de texturas del cubo
  texture[1] = SOIL_load_OGL_texture // load an image file directly as a new OpenGL texture
  (
      "cara1.png",
      SOIL_LOAD_AUTO,
      SOIL_CREATE_NEW_ID,
      SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
  );
//dibujando el cubo
// Frente
glEnable(GL_TEXTURE_2D);
glBindTexture(GL_TEXTURE_2D, texture[1]);
glBegin(GL_POLYGON);
glTexCoord2f(0.0f, 0.0f); glVertex3f(-0.5f,-0.2f, 0.5f);
glTexCoord2f(1.0f, 0.0f); glVertex3f( 0.5f,-0.2f, 0.5f);
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
glTexCoord2f(1.0f, 0.0f); glVertex3f( 0.5f, -0.5f, -0.5f);
glTexCoord2f(1.0f, 1.0f); glVertex3f( 0.5f, 0.5f, -0.5f);
glTexCoord2f(0.0f, 1.0f); glVertex3f( 0.5f, 0.5f, 0.5f);
glTexCoord2f(0.0f, 0.0f); glVertex3f( 0.5f, -0.5f, 0.5f);
glEnd();
// Lado Izquierdo
glBegin(GL_POLYGON);
glColor3f(1.0, 1.0, 0.0);
glTexCoord2f(0.0f, 0.0f); glVertex3f(-0.5f, -0.5f, -0.5f);
glTexCoord2f(1.0f, 0.0f); glVertex3f(-0.5f, -0.5f, 0.5f);
glTexCoord2f(1.0f, 1.0f); glVertex3f(-0.5f, 0.5f, 0.5f);
glTexCoord2f(0.0f, 1.0f); glVertex3f(-0.5f, 0.5f, -0.5f);
glEnd();

glBegin(GL_POLYGON);
//frente
glColor3f(0.60, 0.40, 0.12);
glVertex3f(-0.5f, -0.5f, 0.5f);
glVertex3f( 0.5f, -0.5f, 0.5f);
glVertex3f( 0.5f, -0.2f, 0.5f);
glVertex3f(-0.5f, -0.2f, 0.5f);
glEnd();
glBegin(GL_POLYGON);
//Lado derecho
glVertex3f( 0.5f, -0.5f, -0.5f);
glVertex3f( 0.5f, -0.2f, -0.5f);
glVertex3f( 0.5f, -0.2f, 0.5f);
glVertex3f( 0.5f, -0.5f, 0.5f);
glEnd();
glBegin(GL_POLYGON);
//Lado izquierdo
glVertex3f( -0.5f, -0.5f, -0.5f);
glVertex3f( -0.5f, -0.2f, -0.5f);
glVertex3f( -0.5f, -0.2f, 0.5f);
glVertex3f( -0.5f, -0.5f, 0.5f);
glEnd();
glLineWidth(1);
glBegin(GL_LINES);
  glColor3f(0.0, 0.0, 0.0);
  glVertex3f(0.5, -0.2, 0.5);
  glVertex3f(-0.5, -0.2, 0.5);
  glVertex3f(0.5, -0.3, 0.5);
  glVertex3f(-0.5, -0.3, 0.5);
  glVertex3f(-0.1, -0.2, 0.5);
  glVertex3f(-0.1, -0.3, 0.5);
  glVertex3f( 0.1, -0.2, 0.5);
  glVertex3f( 0.1, -0.3, 0.5);
glEnd();
//Extremdades
glLineWidth(5);
glBegin(GL_LINES);
glColor3f(1.0, 1.0, 0.0);
glVertex3f(0.5, 0.1, 0.25);
glVertex3f(1, -0.1, 0.25);
glVertex3f(-0.5, 0.1, 0.25);
glVertex3f(-1, -0.1, 0.25);
glVertex3f(0.25, -0.5, 0.25);
glVertex3f(0.25, -0.75, 0.25);
glVertex3f(-0.25, -0.5, 0.25);
glVertex3f(-0.25, -0.75, 0.25);
glEnd();
glPointSize(10);
glBegin(GL_POINTS);
glColor3f(0.0, 0.0, 0.0);
glVertex3f(-0.25, -0.85, 0.25);
glVertex3f(0.25, -0.85, 0.25);
glEnd();


  glFlush();
  glutSwapBuffers();
  glColor3f(1.0, 1.0, 1.0);
}
//funcion que dibujando los obstaculos
void obstaculos(void)
{
  float a =120.0;
  int par = -1;

  for (int i=0; i<2000; i++)
  {
    if(a>=60)
    {
      glBegin(GL_POLYGON);
      glColor3f(0.6, 0.2, 0.4);
      glVertex3f( -0.25*par, 0.5f, a);//1
      glVertex3f( -0.275*par, 0.375f, a);//2
      glVertex3f( -0.5*par, 0.25, a);//3
      glVertex3f( -0.275*par, 0.125f, a);//4
      glVertex3f( -0.5*par, 0.0f, a);//5
      glVertex3f( -0.25*par, 0.125f, a);//6
      glVertex3f(  0.0*par, 0.0f, a);//7
      glVertex3f( -0.225*par, 0.125f, a);//8
      glVertex3f(  0.0*par, 0.25f, a);//9
      glVertex3f( -0.225*par, 0.375f, a);//10
      glEnd();
      glColor3f(1.0, 1.0, 1.0);
    }
    if(a<60)
    {
      if(a>=0)
      {
      glColor3f(1, 0, 0);//color del obstaculo
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
        glColor3f(1.0,1.0,1.0);
      }
    }
   // printf("%f\n", a);
    par*=-1;
    a-=5.0;
  }

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
  glBegin(GL_LINES);
  GLfloat angu;
  float i, px=0.0f, py=4.0, ra=2.0, cx, cy;
  for(GLfloat i=0; i<=180; i+=0.005)
      {
    glColor3f(1.0f,1.0f,0.0f);
    angu = i*M_PI/180.0f; //convirtiendo a radianes
    cx=ra*cos(angu);
    cy=ra*sin(angu);
    glVertex3f(px,py,-20.0f);
    glVertex3f(cx+px, cy+py,-20.0f);
      }
  glEnd();
  glBegin(GL_POLYGON);
    glVertex3f(-2.0f,0.0f,-20.0f);
    glVertex3f(-2.0f,4.0f,-20.0f);
    glVertex3f( 2.0f,4.0f,-20.0f);
    glVertex3f( 2.0f,0.0f,-20.0f);
  glEnd();
  glLineWidth(10);
  glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(0.0f, 6.0f, -20.0f);
    glVertex3f(-1.0f, 7.0f, -20.0f);
    glVertex3f(0.0f, 6.0f, -20.0f);
    glVertex3f(1.0f, 7.0f, -20.0f);
    glVertex3f(0.0f, 6.0f, -20.0f);
    glVertex3f(1.0f, 8.0f, -20.0f);
    glVertex3f(0.0f, 6.0f, -20.0f);
    glVertex3f(-1.0f, 8.0f, -20.0f);
    glVertex3f(0.0f, 6.0f, -20.0f);
    glVertex3f(0.0f, 8.5f, -20.0f);
  glEnd();
  glLineWidth(1);
  glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-2.0f, 4.0f, -20.0f);
    glVertex3f( 2.0f, 0.0f, -20.0f);
    glVertex3f( 2.0f, 4.0f, -20.0f);
    glVertex3f(-2.0f, 0.0f, -20.0f);
    glVertex3f( 2.0f, 3.0f, -20.0f);
    glVertex3f(-1.0f, 0.0f, -20.0f);
    glVertex3f(-2.0f, 3.0f, -20.0f);
    glVertex3f( 1.0f, 0.0f, -20.0f);
    glVertex3f(-2.0f, 2.0f, -20.0f);
    glVertex3f( 0.0f, 0.0f, -20.0f);
    glVertex3f( 2.0f, 2.0f, -20.0f);
    glVertex3f( 0.0f, 0.0f, -20.0f);
    glVertex3f( 2.0f, 1.0f, -20.0f);
    glVertex3f( 1.0f, 0.0f, -20.0f);
    glVertex3f(-2.0f, 1.0f, -20.0f);
    glVertex3f(-1.0f, 0.0f, -20.0f);
    glVertex3f(-1.8f, 5.0f, -20.0f);
    glVertex3f( 2.0f, 1.0f, -20.0f);
    glVertex3f(-1.4f, 5.5f, -20.0f);
    glVertex3f( 2.0f, 2.0f, -20.0f);
    glVertex3f( 1.8f, 5.0f, -20.0f);
    glVertex3f(-2.0f, 1.0f, -20.0f);
    glVertex3f( 1.4f, 5.5f, -20.0f);
    glVertex3f(-2.0f, 2.0f, -20.0f);
    glVertex3f( 0.7f, 6.0f, -20.0f);
    glVertex3f(-2.0f, 3.0f, -20.0f);
    glVertex3f(-0.7f, 6.0f, -20.0f);
    glVertex3f( 2.0f, 3.0f, -20.0f);
  glEnd();
  glBegin(GL_LINES);
  GLfloat anguP;
  float j, pxP=0.0f, pyP=1.0, raP=1.0, cxP, cyP;
  for(GLfloat j=0; j<=180; j+=0.005)
      {
    glColor3f(0.0, 1.0, 0.0);
    anguP = j*M_PI/180.0f; //convirtiendo a radianes
    cxP=raP*cos(anguP);
    cyP=raP*sin(anguP);
    glVertex3f(pxP,pyP,-20.0f);
    glVertex3f(cxP+pxP, cyP+pyP,-20.0f);
      }
  glEnd();
  glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-1.0f, 0.0f,-20.0f);
    glVertex3f(-1.0f, 1.0f,-20.0f);
    glVertex3f( 1.0f, 1.0f,-20.0f);
    glVertex3f( 1.0f, 0.0f,-20.0f);
  glEnd();
  glBegin(GL_LINES);
  GLfloat anguV;
  float V, pxV=-1.5f, pyV=4.0, raV=0.5, cxV, cyV;
  for(GLfloat V=0; V<=360; V+=0.05)
      {
    glColor3f(0.0, 1.0, 0.0);
    anguV = V*M_PI/180.0f; //convirtiendo a radianes
    cxV=raV*cos(anguV);
    cyV=raV*sin(anguV);
    glVertex3f(pxV,pyV,-20.0f);
    glVertex3f(cxV+pxV, cyV+pyV,-20.0f);
      }
  glEnd();
  glBegin(GL_LINES);
  GLfloat anguCP;
  float C, pxCP=10.0f, pyCP=0.0, raCP=2.0, cxCP, cyCP;
  for(GLfloat C=0; C<=180; C+=0.005)
      {
    glColor3f(0.60, 0.40, 0.12);
    anguCP = C*M_PI/180.0f; //convirtiendo a radianes
    cxCP=raCP*cos(anguCP);
    cyCP=raCP*sin(anguCP);
    glVertex3f(pxCP,pyCP,-30.0f);
    glVertex3f(cxCP+pxCP, cyCP+pyCP,-30.0f);
      }
  glEnd();
  glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(10.0f, 2.0f, -30.0f);
    glVertex3f(10.0f, 3.0f, -30.0f);
    glVertex3f(9.0f, 2.7f, -30.0f);
    glVertex3f(11.0f, 2.7f, -30.0f);
    glVertex3f(9.5f, 3.0f, -30.0f);
    glVertex3f(9.5f, 2.5f, -30.0f);
    glVertex3f(10.5f, 3.0f, -30.0f);
    glVertex3f(10.5f, 2.5f, -30.0f);
  glEnd();
  glColor3f(1.0,1.0,1.0);
  //Arbol#1
  float a=120.0;
  int par=1;
  for (int i=-10; i<200; i++)
  {
    if(a>60)
    {
      glBindTexture(GL_TEXTURE_2D, texture[0]);
      glBegin(GL_TRIANGLES);
        glTexCoord2f(1,1);glVertex3f( 4.0f*par, 1.0f, a );
        glTexCoord2f(0,1);glVertex3f( 6.0f*par, 1.0f, a );
        glTexCoord2f(1,0);glVertex3f( 5.0f*par, 4.0f, a );
      glEnd();

      glBindTexture(GL_TEXTURE_2D, texture[1]);
      glBegin(GL_QUADS);
        glTexCoord2f(1,1);glVertex3f( 4.8f*par, 0.0f, a );
        glTexCoord2f(0,1);glVertex3f( 4.8f*par, 1.0f, a );
        glTexCoord2f(1,0);glVertex3f( 5.2f*par, 1.0f, a );
        glTexCoord2f(0,0);glVertex3f( 5.2f*par, 0.0f, a );
      glEnd();
    }
    if(a>=0)
    //dibujando el arbol
    {
      if(a<60)
    {
    glBindTexture(GL_TEXTURE_2D, texture[0]);
    glBegin(GL_TRIANGLES);
      glTexCoord2f(1,1);glVertex3f( 4.0f*par, 1.0f, a );
      glTexCoord2f(0,1);glVertex3f( 6.0f*par, 1.0f, a );
      glTexCoord2f(1,0);glVertex3f( 5.0f*par, 3.0f, a );
    glEnd();
    glBegin(GL_TRIANGLES);
      glTexCoord2f(1,1);glVertex3f( 4.0f*par, 1.7f, a );
      glTexCoord2f(0,1);glVertex3f( 6.0f*par, 1.7f, a );
      glTexCoord2f(1,0);glVertex3f( 5.0f*par, 4.0f, a );
    glEnd();
    glBindTexture(GL_TEXTURE_2D, texture[1]);
    glBegin(GL_QUADS);
      glTexCoord2f(1,1);glVertex3f( 4.8f*par, 0.0f, a );
      glTexCoord2f(0,1);glVertex3f( 4.8f*par, 1.0f, a );
      glTexCoord2f(1,0);glVertex3f( 5.2f*par, 1.0f, a );
      glTexCoord2f(0,0);glVertex3f( 5.2f*par, 0.0f, a );
    glEnd();
  }
  }
  par*=-1;
  a-=2.0;
  }
glColor3f(1.0, 1.0, 1.0);
 }
