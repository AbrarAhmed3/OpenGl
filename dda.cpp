using namespace std;
#include<iostream>
#include<math.h>
#include<GL/glut.h>

float xx,yy,xEnd,yEnd;
void init()
{
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(0.0,0.0,0.0,1.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,640,0,480);
}

void setPixel(float x,float y)
{
glBegin(GL_POINTS);
glVertex2f(x,y);
glEnd();
}
void lineDDA(float x0,float y0,float xEnd,float yEnd)
{
float dx=xEnd-x0,dy=yEnd-y0,steps,k;
float xlncr,ylncr,x=xx,y=yy;

if(fabs(dx)>fabs(dy))
steps=fabs(dx);
else 
steps=fabs(dy);

xlncr=dx/steps;
ylncr=dy/steps;
setPixel(x,y);

for(k=0;k<steps;k++)
{
x+=xlncr;y+=ylncr;
setPixel(x,y);
}
}
void myDisplay()
{
glColor3f(0.0,1.0,0.0);
lineDDA(xx,yy,xEnd,yEnd);
glFlush();
}
int main(int argc,char **argv)
{
cout<<"Enter start coordinates: ",cin>>xx>>yy;
cout<<"Enter end coordinates :",cin>>xEnd>>yEnd;

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(640,480);
glutInitWindowPosition(50,50);
glutCreateWindow("Assignment 9:DDA Line Drawing");
init();
glutDisplayFunc(myDisplay);
glutMainLoop();
}
