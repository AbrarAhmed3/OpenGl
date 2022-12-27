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
        glLineWidth(3);
        glBegin(GL_LINES);
        glColor3f(0.0,1.0,0.0);
        glVertex2i(70,80);
        glVertex2i(100,100);
        glVertex2i(100,100);
        glVertex2i(120,150);
        glVertex2i(120,150);
        glVertex2i(70,80);
        glEnd();
        
        glBegin(GL_LINES);
        glColor3f(0.5,0.5,0.0);
        glVertex2i(110,160);
        glVertex2i(140,150);
        glVertex2i(140,150);
        glVertex2i(170,170);
        glVertex2i(170,170);
        glVertex2i(110,160);
       glEnd();
   glFlush();  
}
 

int main(int argc, char** argv) 
{
   glutInit(&argc, argv);  
   glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);               
   glutCreateWindow("Assignment 7:Drawing two unflied triangles"); 
   glutInitWindowSize(320, 320);   
   glutInitWindowPosition(50, 100);
   
   init();
   glutDisplayFunc(display); 
   glutMainLoop();           
   
}
