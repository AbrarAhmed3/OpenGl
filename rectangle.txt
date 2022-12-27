#include <GL/glut.h>
void init(void)
{
  glClearColor(1.0f, 1.0f, 1.0f, 0.0f);

  glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,200.0,0.0,150.0);
}  
void lineSegment(void) 
{
   
   glClear(GL_COLOR_BUFFER_BIT); 
   glLineWidth(10);
   glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(20.0,40.0);
        glVertex2f(20.0,10.0);
        glVertex2f(20.0,10.0);
        glVertex2f(50.0,10.0);
        glVertex2f(50.0,10.0);
        glVertex2f(50.0,40.0);
        glVertex2f(50.0,40.0);
        glVertex2f(20.0,40.0);
        
        glBegin(GL_LINES);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(60.0,80.0);
        glVertex2f(60.0,20.0);
        glVertex2f(60.0,20.0);
        glVertex2f(80.0,20.0);
        glVertex2f(80.0,20.0);
        glVertex2f(80.0,80.0);
        glVertex2f(80.0,80.0);
        glVertex2f(60.0,80.0);
        
        glBegin(GL_LINES);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(80.0,110.0);
        glVertex2f(80.0,90.0);
        glVertex2f(80.0,90.0);
        glVertex2f(110.0,90.0);
        glVertex2f(110.0,90.0);
        glVertex2f(110.0,110.0);
        glVertex2f(110.0,110.0);
        glVertex2f(80.0,110.0);
       
   glEnd();
   glFlush();  
}
 

int main(int argc, char** argv) 
{
   glutInit(&argc, argv);  
   glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);               
   glutCreateWindow("Assignment 2:Drawing Rectangles           with three different colors"); 
   glutInitWindowSize(320, 320);   
   glutInitWindowPosition(50, 50);
   
   init();
   glutDisplayFunc(lineSegment); 
   glutMainLoop();           
   
}
