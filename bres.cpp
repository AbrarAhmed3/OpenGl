using namespace std;
#include<GL/glut.h>
#include<iostream>
#include<math.h>

float xx,yy,xEnd,yEnd;
void init()
{
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(1.0,1.0,1.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,640,0,480);
}

void setPixel(float x,float y)
{
glBegin(GL_POINTS);
glVertex2f(x,y);
glEnd();
}
void lineBres(float x0,float y0,float xEnd,float yEnd)
{
float dx=fabs(xEnd-x0),dy=fabs(yEnd-y0);
float p =2*dy-dx;
float twoDy=2*dy,twoDyMinusDx=2*(dy-dx);
float x,y;
float slope=dy/dx;
cout<<"slope of the line :"<<slope;

if(x0>xEnd){
x=xEnd;y=yEnd;xEnd=x0;
}
else {
x=x0;y=y0;
}
setPixel(x,y);

while(x<xEnd){
x++;
if(p<0)
p+=twoDy;
else{
y++;p+=twoDyMinusDx;
}
setPixel(x,y);
}
}
void myDisplay()
{
glColor3f(1.0,0.0,0.0);
lineBres(xx,yy,xEnd,yEnd);
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
glutCreateWindow("Bresenham's Line Drawing");
init();
glutDisplayFunc(myDisplay);
glutMainLoop();
}
