#include <GL/glut.h>
void init(void)
{
glClearColor(1.0f, 1.0f, 1.0f, 0.0f);

glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,400.0,0.0,300.0);
}  
void display(void) 
{
   
   glClear(GL_COLOR_BUFFER_BIT); 
        glColor3f(1.0,0.0,0.4);
        glPointSize(15.0);
        glBegin(GL_POINTS);
        glVertex2i(323,280);
       
        
         glColor3f(0.0,0.0,1.0);
        glPointSize(15.0);
        glBegin(GL_POINTS);
        glVertex2i(250,150);
        
        
         glColor3f(0.0,1.0,0.0);
        glPointSize(15.0);
        glBegin(GL_POINTS);
        glVertex2i(200,100);
      
        
         glColor3f(1.0,0.0,0.0);
        glPointSize(15.0);
        glBegin(GL_POINTS);
        glVertex2i(140,50);
       
   glEnd();
   glFlush();  
}
 

int main(int argc, char** argv) 
{
   glutInit(&argc, argv);  
   glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);               
   glutCreateWindow("Assignment 4:Drawing four points with four different colors"); 
   glutInitWindowSize(640, 480);   
   glutInitWindowPosition(50, 100);
   
   init();
   glutDisplayFunc(display); 
   glutMainLoop();           
   
}
