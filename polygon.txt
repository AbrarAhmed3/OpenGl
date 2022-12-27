#include <GL/glut.h>
void init(void)
{
glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,400.0,0.0,300.0);
}  
void display(void) 
{
   int point1[]={200,250},point2[]={125,80},point3[]={50,150},point4[]={175,275},point5[]={10,75},point6[]={100,100};
   glClear(GL_COLOR_BUFFER_BIT); 
        glColor3f(0.5,0.5,0.0);
        glPointSize(4.0);
        glBegin(GL_POLYGON);
        glVertex2iv(point1);glVertex2iv(point2);
        glVertex2iv(point3);glVertex2iv(point4);
        glVertex2iv(point5);glVertex2iv(point6);
       glEnd();
   glFlush();  
}
 

int main(int argc, char** argv) 
{
   glutInit(&argc, argv);  
   glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);               
   glutCreateWindow("Assignment 6:Drawing Polygon"); 
   glutInitWindowSize(640, 480);   
   glutInitWindowPosition(50, 100);
   
   init();
   glutDisplayFunc(display); 
   glutMainLoop();           
   
}
