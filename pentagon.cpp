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
   glLineWidth(5);
   glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.4);
        glVertex3f(80.0,100.5,0.0);
        glVertex3f(80.0,80.5,0.0);
        glVertex3f(80.0,80.5,0.0);
        glVertex3f(100.0,80.5,0.0);
        glVertex3f(100.0,80.5,0.0);
        glVertex3f(100.0,100.5,0.0);
        glVertex3f(100.0,100.5,0.0);
        glVertex3f(90.0,110.5,0.0);
        glVertex3f(90.0,110.5,0.0);
        glVertex3f(80.0,100.5,0.0);
       
   glEnd();
   glFlush();  
}
 

int main(int argc, char** argv) 
{
   glutInit(&argc, argv);  
   glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);               
   glutCreateWindow("Assignment 3:Drawing Pentagon"); 
   glutInitWindowSize(320, 320);   
   glutInitWindowPosition(50, 50);
   
   init();
   glutDisplayFunc(display); 
   glutMainLoop();           
   
}
