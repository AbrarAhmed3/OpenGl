#include <GL/glut.h>
class screenPt{
 private:
 GLint x, y;
 public:
 screenPt(){
 x = y = 0;
 }
 void setCoords(GLint xCoordValue, GLint yCoordValue){
 x = xCoordValue;
 y = yCoordValue;
 }
 GLint getx(){
 return x;
 }
 GLint gety(){
 return y;
 }
 void incrementx(){
 x++;
 }
 void decrementy(){
 y--;
 }
};
void setPixel(GLint xCoord, GLint yCoord){
 glBegin (GL_POINTS);
 glVertex2i (xCoord, yCoord);
 glEnd ( );
}
void circleMidpoint (GLint xc, GLint yc, GLint radius){
 screenPt circPt;
 GLint p = 1 - radius; // Initial value for midpoint parameter.
 circPt.setCoords (0, radius); // Set coordinates for top point of circle.
 void circlePlotPoints (GLint, GLint, screenPt); /* Plot the initial point in each circle quadrant. */
 circlePlotPoints (xc, yc, circPt); /* Calculate next point and plot in each octant. */
 while (circPt.getx ( ) < circPt.gety ( )) {
 circPt.incrementx ( );
 if (p < 0) p += 2 * circPt.getx ( ) + 1;
 else {
 circPt.decrementy ( );
 p += 2 * (circPt.getx ( ) - circPt.gety ( )) + 1;
 }
 circlePlotPoints (xc, yc, circPt);
 }
} 
void circlePlotPoints (GLint xc, GLint yc, screenPt circPt){
setPixel (xc + circPt.getx ( ), yc + circPt.gety ( ));
 setPixel (xc - circPt.getx ( ), yc + circPt.gety ( ));
 setPixel (xc + circPt.getx ( ), yc - circPt.gety ( ));
 setPixel (xc - circPt.getx ( ), yc - circPt.gety ( ));
setPixel (xc + circPt.gety ( ), yc + circPt.getx ( ));
 setPixel (xc - circPt.gety ( ), yc + circPt.getx ( ));
 setPixel (xc + circPt.gety ( ), yc - circPt.getx ( ));
 setPixel (xc - circPt.gety ( ), yc - circPt.getx ( ));
}
void init(void){
 glClearColor(1.0,1.0,1.0,0.0);
 glMatrixMode(GL_PROJECTION);
 gluOrtho2D(0.0,400.0,0.0,300.0);
}
void myProc(void){
 glColor3f(0.5,0.0,0.5);
void circleMidpoint(GLint , GLint , GLint);
 circleMidpoint(200,200,50);
 glFlush();
}
int main(int argc, char** argv){
 glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowPosition(50,100);
 glutInitWindowSize(640,480);
glutCreateWindow("Circle Drawing using Mid Point Algorithm");
 init();
 glutDisplayFunc(myProc);
 glutMainLoop();
 return 0;
}
