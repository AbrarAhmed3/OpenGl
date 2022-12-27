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
        
        glBegin(GL_POLYGON);
        glColor3f(0.5,0.0,0.5);
        glVertex2i(70,80);
        glVertex2i(100,100);
        glVertex2i(120,150);
        glEnd();
        
        glBegin(GL_POLYGON);
        glColor3f(0.5,0.0,0.5);
        glVertex2i(110,160);
        glVertex2i(140,150);
        glVertex2i(170,170);
       glEnd();
   glFlush();  
}
 

int main(int argc, char** argv) 
{
   glutInit(&argc, argv);  
   glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);               
   glutCreateWindow("Assignment 8:Drawing two filled triangles"); 
   glutInitWindowSize(320, 320);   
   glutInitWindowPosition(50, 100);
   
   init();
   glutDisplayFunc(display); 
   glutMainLoop();           
   
}
