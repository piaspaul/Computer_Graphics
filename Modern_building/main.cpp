#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <GL/gl.h>
//static GLfloat spin = 0.0;
//static float tx = 0;
//static float ty = 0;
float tx = 0;
float ty = 0;
void init(void)
{
    glClearColor(0.1, 1.0, 1.0, 0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
     glOrtho(0.0, 100, 0.0, 100, -100, 100);
  //  gluOrtho2D(0.0, 500.0, 0.0, 500.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}
float p=0;
void circle(float rx, float ry, float cx, float cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 100; i++)
    {
        float angle = 2 * 3.1416 * (i * 1.0 / 100);
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}
void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
//Road
   glBegin(GL_POLYGON);
   glColor3f( 0.1f ,0.1f,0.1f );
   glVertex2f(0.0,0.0);
   glVertex2f(100.0,0.0);
   glVertex2f(100.0,25.0);
   glVertex2f(0.0,25.0);
    glEnd();
//yellow House
    glBegin(GL_POLYGON);
    glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(5.0,25.0);
   glVertex2f(15.0,25.0);
   glVertex2f(15.0,65.0);
   glVertex2f(11.0,75.0);
   glVertex2f(9.0,75.0);
   glVertex2f(5.0,65.0);
    glEnd();
     glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(7.0,25.0);
   glVertex2f(13.0,25.0);
   glVertex2f(13.0,69.0);
   glVertex2f(7.0,69.0);
   glEnd();
    glBegin(GL_LINES);
    glColor3f( 0.0f ,1.0f,0.0f );
    glVertex2f(10.0,25.0);
    glVertex2f(10.0,85.0);
    glVertex2f(5.0,35.0);
    glVertex2f(15.0,35.0);
     glVertex2f(5.0,45.0);
    glVertex2f(15.0,45.0);
     glVertex2f(5.0,55.0);
    glVertex2f(15.0,55.0);
     glVertex2f(5.0,65.0);
    glVertex2f(15.0,65.0);
 glEnd();

//Hill
  glBegin(GL_POLYGON);
   glColor3f( 0.0f ,1.0f,0.0f );
   glVertex2f(15.0,25.0);
   glVertex2f(100.0,25.0);
   glVertex2f(70.0,80.0);
   glVertex2f(60.0,69.0);
   glVertex2f(50.0,30.0);
   glVertex2f(40.0,75.0);
   glVertex2f(35.0,45.0);
   glVertex2f(15.0,25.0);
 glEnd();

 //White_House-1
  glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(18.0,25.0);
   glVertex2f(23.0,25.0);
   glVertex2f(23.0,80.0);
   glVertex2f(17.0,70.0);
   glEnd();

glBegin(GL_LINES);
    glColor3f( 0.0f ,0.0f,0.0f );
    glVertex2f(18.0,35.0);
    glVertex2f(23.0,35.0);
     glVertex2f(17.5,45.0);
    glVertex2f(23.0,45.0);
    glVertex2f(17.5,55.0);
    glVertex2f(23.0,55.0);
     glVertex2f(17.2,65.0);
    glVertex2f(23.0,65.0);
     glVertex2f(17,70.0);
    glVertex2f(23.0,70.0);
      glVertex2f(19,25.0);
    glVertex2f(19.0,70.0);
      glVertex2f(22,25.0);
    glVertex2f(22.0,70.0);
    glEnd();

 //White_House-2
    glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(24.0,25.0);
   glVertex2f(28.0,25.0);
   glVertex2f(29.0,70.0);
   glVertex2f(24.0,75.0);
   glEnd();
    glBegin(GL_LINES);
    glColor3f( 0.0f ,0.0f,0.0f );
    glVertex2f(24.0,35.0);
    glVertex2f(28.0,35.0);
    glVertex2f(24.0,45.0);
    glVertex2f(28.3,45.0);
    glVertex2f(24.0,55.0);
    glVertex2f(28.4,55.0);
     glVertex2f(24.0,65.0);
    glVertex2f(28.6,65.0);
     glVertex2f(24.0,70.0);
    glVertex2f(29.0,70.0);
    glVertex2f(25.0,25.0);
    glVertex2f(25.0,70.0);
      glVertex2f(26.0,25.0);
    glVertex2f(26.0,70.0);
      glVertex2f(27.0,25.0);
    glVertex2f(27.0,70.0);
     glEnd();

//tower
       glBegin(GL_POLYGON);
   glColor3f( 0.0f ,0.0f,1.0f );
   glVertex2f(90.0,25.0);
   glVertex2f(93.0,25.0);
   glVertex2f(93.0,40.0);
   glVertex2f(90.0,40.0);
   glEnd();
     glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(87.0,40.0);
   glVertex2f(96.0,40.0);
   glVertex2f(96.0,42.0);
   glVertex2f(87.0,42.0);
   glEnd();
     glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(87.0,42.0);
   glVertex2f(96.0,42.0);
   glVertex2f(99.0,50.0);
   glVertex2f(84.0,50.0);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f( 1.0f ,0.0f,1.0f );
   glVertex2f(84.0,50.0);
   glVertex2f(99.0,50.0);
   glVertex2f(99.0,52.0);
   glVertex2f(84.0,52.0);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f( 0.0f ,0.0f,1.0f );
   glVertex2f(84.0,52.0);
   glVertex2f(99.0,52.0);
   glVertex2f(94.0,56.0);
   glVertex2f(89.0,56.0);
   glEnd();
      glBegin(GL_POLYGON);
   glColor3f( 0.0f ,0.0f,0.0f );
   glVertex2f(89.0,56.0);
   glVertex2f(94.0,56.0);
   glVertex2f(96.0,59.0);
   glVertex2f(87.0,59.0);
   glEnd();
      glBegin(GL_POLYGON);
   glColor3f( 0.0f ,0.0f,0.0f );
   glVertex2f(89.0,56.0);
   glVertex2f(94.0,56.0);
   glVertex2f(96.0,59.0);
   glVertex2f(87.0,59.0);
   glEnd();
      glBegin(GL_POLYGON);
   glColor3f( 1.0f ,0.0f,0.0f );
   glVertex2f(87.0,59.0);
   glVertex2f(96.0,59.0);
   glVertex2f(96.0,61.0);
   glVertex2f(87.0,61.0);
   glEnd();

    glColor3f(1.0f, 0.0f, 1.0f);
    circle(2, 2 ,91.5, 70);
       glBegin(GL_LINES);
    glColor3f( 0.0f ,0.0f,0.0f );
    glVertex2f(91.5,68.0);
    glVertex2f(91.5,61.0);
       glEnd();


//Purple House
   glBegin(GL_POLYGON);
   glColor3f( 1.0f ,0.0f,1.0f );
   glVertex2f(35.0,25.0);
   glVertex2f(37.0,25.0);
   glVertex2f(37.0,60.0);
   glVertex2f(35.0,60.0);
   glEnd();

          glBegin(GL_POLYGON);
   glColor3f( 1.0f ,0.0f,1.0f );
   glVertex2f(37.0,25.0);
   glVertex2f(39.0,25.0);
   glVertex2f(39.0,70.0);
   glVertex2f(37.0,70.0);
   glEnd();
           glBegin(GL_POLYGON);
   glColor3f( 1.0f ,0.0f,1.0f );
   glVertex2f(39.0,25.0);
   glVertex2f(41.0,25.0);
   glVertex2f(41.0,80.0);
   glVertex2f(39.0,80.0);
   glEnd();

            glBegin(GL_POLYGON);
   glColor3f( 1.0f ,0.0f,1.0f );
   glVertex2f(41.0,25.0);
   glVertex2f(43.0,25.0);
   glVertex2f(43.0,68.0);
   glVertex2f(41.0,68.0);
   glEnd();
           glBegin(GL_POLYGON);
   glColor3f( 1.0f ,0.0f,1.0f );
   glVertex2f(43.0,25.0);
   glVertex2f(45.0,25.0);
   glVertex2f(45.0,58.0);
   glVertex2f(43.0,58.0);
   glEnd();
          glBegin(GL_POLYGON);
   glColor3f( 1.0f ,0.0f,1.0f );
   glVertex2f(45.0,25.0);
   glVertex2f(47.0,25.0);
   glVertex2f(47.0,48.0);
   glVertex2f(45.0,48.0);
   glEnd();

         glBegin(GL_POLYGON);
   glColor3f( 1.0f ,0.0f,1.0f );
   glVertex2f(39.5,25.0);
   glVertex2f(40.5,25.0);
   glVertex2f(40.5,85.0);
   glVertex2f(39.5,85.0);
   glEnd();
          glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(37.0,30.0);
   glVertex2f(37.5,30.0);
   glVertex2f(37.5,35.0);
   glVertex2f(37.0,35.0);
   glEnd();

           glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(37.0,38.0);
   glVertex2f(37.5,38.0);
   glVertex2f(37.5,43.0);
   glVertex2f(37.0,43.0);
   glEnd();

             glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(37.0,46.0);
   glVertex2f(37.5,46.0);
   glVertex2f(37.5,51.0);
   glVertex2f(37.0,51.0);
   glEnd();
           glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(37.0,54.0);
   glVertex2f(37.5,54.0);
   glVertex2f(37.5,59.0);
   glVertex2f(37.0,59.0);
   glEnd();
            glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(40.0,30.0);
   glVertex2f(40.5,30.0);
   glVertex2f(40.5,35.0);
   glVertex2f(40.0,35.0);
   glEnd();
           glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(40.0,38.0);
   glVertex2f(40.5,38.0);
   glVertex2f(40.5,43.0);
   glVertex2f(40.0,43.0);
   glEnd();
            glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(40.0,46.0);
   glVertex2f(40.5,46.0);
   glVertex2f(40.5,51.0);
   glVertex2f(40.0,51.0);
   glEnd();

           glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(40.0,54.0);
   glVertex2f(40.5,54.0);
   glVertex2f(40.5,59.0);
   glVertex2f(40.0,59.0);
   glEnd();
          glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(40.0,62.0);
   glVertex2f(40.5,62.0);
   glVertex2f(40.5,67.0);
   glVertex2f(40.0,67.0);
   glEnd();
             glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(43.0,30.0);
   glVertex2f(43.5,30.0);
   glVertex2f(43.5,35.0);
   glVertex2f(43.0,35.0);
   glEnd();
           glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(43.0,38.0);
   glVertex2f(43.5,38.0);
   glVertex2f(43.5,43.0);
   glVertex2f(43.0,43.0);
   glEnd();
            glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(43.0,46.0);
   glVertex2f(43.5,46.0);
   glVertex2f(43.5,51.0);
   glVertex2f(43.0,51.0);
   glEnd();
            glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,0.0f );
   glVertex2f(43.0,54.0);
   glVertex2f(43.5,54.0);
   glVertex2f(43.5,59.0);
   glVertex2f(43.0,59.0);
   glEnd();



//Sun
   if(p<=100)
   p = p+0.00000005;
   else
   p=1;

    glColor3f(1.0f, 1.0f, 0.0f);
    circle(7, 7 ,47, p+97);


//Cloud
  /* if(p<=100)
    p = p-0.0005;
   else
   p=1;*/
   glColor3f(1.0f, 1.0f, 1.0f);
    circle(5, 5 ,p+85,90);
     glColor3f(1.0f, 1.0f, 1.0f);
    circle(4, 4 ,p+58, 85);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(4, 4 ,p+64, 85);

      glColor3f(1.0f, 1.0f, 1.0f);
    circle(4, 5 ,p+62, 89);
     glColor3f(1.0f, 1.0f, 1.0f);
    circle(4, 5 ,p+30, 90);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(4, 5 ,p+34, 90);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(3, 5 ,p+33, 95);


 //White ROAD Line
    glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(3.0,5.0);
   glVertex2f(10.0,5.0);
   glVertex2f(10.0,5.9);
   glVertex2f(3.0,5.9);
   glEnd();

       glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(15.0,5.0);
   glVertex2f(21.0,5.0);
   glVertex2f(21.0,5.9);
   glVertex2f(15.0,5.9);
   glEnd();
       glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(26.0,5.0);
   glVertex2f(33.0,5.0);
   glVertex2f(33.0,5.9);
   glVertex2f(26.0,5.9);
   glEnd();
       glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(38.0,5.0);
   glVertex2f(44.0,5.0);
   glVertex2f(44.0,5.9);
   glVertex2f(38.0,5.9);
   glEnd();

     glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(49.0,5.0);
   glVertex2f(56.0,5.0);
   glVertex2f(56.0,5.9);
   glVertex2f(49.0,5.9);
   glEnd();
        glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(49.0,5.0);
   glVertex2f(56.0,5.0);
   glVertex2f(56.0,5.9);
   glVertex2f(49.0,5.9);
   glEnd();
     glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(61.0,5.0);
   glVertex2f(68.0,5.0);
   glVertex2f(68.0,5.9);
   glVertex2f(61.0,5.9);
   glEnd();
    glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(73.0,5.0);
   glVertex2f(80.0,5.0);
   glVertex2f(80.0,5.9);
   glVertex2f(73.0,5.9);
   glEnd();
    glBegin(GL_POLYGON);
   glColor3f( 1.0f ,1.0f,1.0f );
   glVertex2f(85.0,5.0);
   glVertex2f(92.0,5.0);
   glVertex2f(92.0,5.9);
   glVertex2f(85.0,5.9);
   glEnd();


//Car Moving codition
  if(p<=100)
p=p+0.005;
else
p=-1;


 //Red Car
    glutPostRedisplay();
    glBegin(GL_POLYGON);
    glColor3f( 1.0f ,0.0f,0.0f );
    glVertex2f(p+5.0,8.0);
    glVertex2f(p+25.0,8.0);
    glVertex2f(p+25.0,26.9);
    glVertex2f(p+5.0,26.9);
    glEnd();
      glBegin(GL_POLYGON);
   glColor3f( 1.0f ,0.0f,0.0f );
   glVertex2f(p+25.0,8.0);
   glVertex2f(p+30.0,8.0);
   glVertex2f(p+30.0,20.0);
   glVertex2f(p+25.0,26.9);
   glEnd();
    glBegin(GL_POLYGON);
   glColor3f( 0.0f ,0.0f,1.0f );
   glVertex2f(p+8.0,14.0);
   glVertex2f(p+12.0,14.0);
   glVertex2f(p+12.0,20.9);
   glVertex2f(p+8.0,20.9);
   glEnd();
    glBegin(GL_POLYGON);
   glColor3f( 0.0f ,0.0f,1.0f );
   glVertex2f(p+14.0,14.0);
   glVertex2f(p+18.0,14.0);
   glVertex2f(p+18.0,20.9);
   glVertex2f(p+14.0,20.9);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f( 0.0f ,0.0f,1.0f );
   glVertex2f(p+20.0,12.0);
   glVertex2f(p+24.0,12.0);
   glVertex2f(p+24.0,20.9);
   glVertex2f(p+20.0,20.9);
   glEnd();

      glColor3f(0.0f, 0.0f, 0.0f);
    circle(3, 3 ,p+10, 8);
       glColor3f(1.0f, 1.0f, 1.0f);
    circle(1, 1,p+10, 8);
     glColor3f(0.0f, 0.0f, 0.0f);
    circle(3, 3 ,p+20, 8);
       glColor3f(1.0f, 1.0f, 1.0f);
    circle(1, 1,p+20, 8);

    glPopMatrix();

    glFlush();
    glutSwapBuffers();
}




int main(int argc, char** argv)
{
    //PlaySound("bip.wav", NULL, SND_ASYNC);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1200, 600);
    glutCreateWindow("Project_191-15-12579");
    init();
    glutDisplayFunc(Draw);
    //glutKeyboardFunc(my_keyboard);
    //glutMouseFunc(my_mouse);
    //glutSpecialFunc(spe_key);
    glutMainLoop();
    return 0;
}
