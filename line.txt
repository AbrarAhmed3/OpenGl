#include<GL/glut.h>
void init(void)
{
	glClearColor(1.0f,1.0f,1.0f,0.0f);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,200.0,0.0,150.0);
}

void Line(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(8);
	glBegin(GL_LINES);
	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(50.0,50.0);
	glVertex2f(140.0,140.0);
	glEnd();
	glFlush();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("LINE");
	glutInitWindowSize(400,500);
	glutInitWindowPosition(50,50);
	init();
	glutDisplayFunc(Line);
	glutMainLoop();
}
