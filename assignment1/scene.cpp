
#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>
void linesegment(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	//Sky
	glColor3f(0.2, 0.2, 1.0); //blue
	glBegin(GL_POLYGON);
	glVertex2i(0, 150);
	glVertex2i(600, 150);
	glVertex2i(600, 400);
	glVertex2i(0, 400);
	glEnd();
	glFlush();

	//Grass
	glColor3f(0.0, 1.0, 0.2); //blue
	glBegin(GL_POLYGON);
	glVertex2i(0, 150);
	glVertex2i(600, 150);
	glVertex2i(600, 0);
	glVertex2i(0, 0);
	glEnd();
	glFlush();

	//Mountain 1
	glColor3f(0.647, 0.1647, 0.1647); //BROWN
	glBegin(GL_POLYGON);
	glVertex2i(0, 150);
	glVertex2i(150, 250);
	//  glVertex2i(260,175);
	//  glVertex2i(240,150);
	glVertex2i(300, 150);
	glEnd();
	glFlush();

	//Mountain 2
	glColor3f(0.647, 0.1647, 0.1647); //BROWN
	glBegin(GL_POLYGON);
	glVertex2i(600, 150);
	glVertex2i(450, 280);
	//  glVertex2i(380,175);
	//  glVertex2i(440,170);
	//  glVertex2i(460,150);
	glVertex2i(340, 150);
	glEnd();
	glFlush();

	//Tree
	//Trunk
	glColor3f(0.647, 0.1647, 0.1647); //BROWN
	glBegin(GL_POLYGON);
	glVertex2i(60, 30);
	glVertex2i(100, 30);
	glVertex2i(100, 100);
	glVertex2i(60, 100);
	glEnd();
	glFlush();
	//Leaves
	glColor3f(0.0, 0.5, 0.0); //Green
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2i(135, 100);
	glVertex2i(25, 100);
	glVertex2i(80, 140);
	glEnd();
	glFlush();
	glColor3f(0.0, 0.5, 0.0); //Green
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2i(120, 120);
	glVertex2i(40, 120);
	glVertex2i(80, 160);
	glEnd();
	glFlush();
	glColor3f(0.0, 0.5, 0.0); //Green
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2i(110, 140);
	glVertex2i(50, 140);
	glVertex2i(80, 180);
	glEnd();
	glFlush();

	//House
	//Body
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(220, 50);
	glVertex2i(300, 50);
	glVertex2i(300, 140);
	glVertex2i(220, 140);
	glEnd();
	glFlush();
	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(300, 140);
	glVertex2i(300, 50);
	glVertex2i(480, 50);
	glVertex2i(480, 140);
	glEnd();
	glFlush();
	//Roof
	glColor3f(0.1, 0.6, 1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2i(220, 140);
	glVertex2i(300, 140);
	glVertex2i(260, 200);
	glEnd();
	glFlush();
	glColor3f(0.1, 1.0, 0.4);
	glBegin(GL_POLYGON);
	glVertex2i(260, 200);
	glVertex2i(300, 140);
	glVertex2i(480, 140);
	glVertex2i(450, 200);
	glEnd();
	glFlush();

	//Door

	glColor3f(1.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(240, 50);
	glVertex2i(270, 50);
	glVertex2i(270, 100);
	glVertex2i(240, 100);
	glEnd();
	glFlush();

	//Handle
	glColor3f(0.67, 0.34, 0.16);
	glBegin(GL_QUADS);
	glVertex2i(247, 65);
	glVertex2i(250, 65);
	glVertex2i(250, 70);
	glVertex2i(247, 70);
	glEnd();
	glFlush();

	//Windows
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(320, 90);
	glVertex2i(320, 115);
	glVertex2i(360, 115);
	glVertex2i(360, 90);
	glEnd();
	glFlush();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(320, 102.5);
	glVertex2i(360, 102.5);
	glEnd();
	glFlush();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(340, 90);
	glVertex2i(340, 115);
	glEnd();
	glFlush();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(400, 90);
	glVertex2i(400, 115);
	glVertex2i(440, 115);
	glVertex2i(440, 90);
	glEnd();
	glFlush();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(400, 102.5);
	glVertex2i(440, 102.5);
	glEnd();
	glFlush();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(420, 90);
	glVertex2i(420, 115);
	glEnd();
	glFlush();

	//Pavment

	glColor3f(0.3, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(240, 50);
	glVertex2i(270, 50);
	glVertex2i(260, 0);
	glVertex2i(210, 0);
	glEnd();
	glFlush();

	//Sun
	float theta;
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(60 + 20 * cos(theta), 250 + 20 * sin(theta));
	}
	glEnd();
	glFlush();

	//cloud 1
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(540 + 15 * cos(theta), 260 + 8 * sin(theta));
	}
	glEnd();
	glFlush();
	//--
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(530 + 15 * cos(theta), 260 + 13 * sin(theta));
	}
	glEnd();
	glFlush();
	//--
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(520 + 14 * cos(theta), 260 + 8 * sin(theta));
	}
	glEnd();
	glFlush();

	// cloud 2
	//cloud 1
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(305 + 21 * cos(theta), 260 + 14 * sin(theta));
	}
	glEnd();
	glFlush();
	//--
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(290 + 25 * cos(theta), 260 + 18 * sin(theta));
	}
	glEnd();
	glFlush();
	//--
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(275 + 22 * cos(theta), 260 + 14 * sin(theta));
	}
	glEnd();
	glFlush();
}

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);		//specifies clear 	values for the color buffers (R,G,B,Alpha)
	glMatrixMode(GL_PROJECTION);				// sets the 	current matrix mode
	gluOrtho2D(0.0, 600.0, 0.0, 400.0); //2D orthographic 	projection matrix (left,right,bottom,top)
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //sets 	the initial display mode
	glutInitWindowPosition(50, 100);						 //sets the initial window 	position
	glutInitWindowSize(1200, 600);							 //sets the initial window size
	glutCreateWindow("Line");										 // creates the window with name line
	init();
	// for(int i = 0;i < 1000000000;i++){}
	glutDisplayFunc(linesegment); //sets the display callback for 	the current window.
	glutMainLoop();								// enters the GLUT event processing loop
	return 0;
}

// Run using: opengl.sh <file name.cpp> THEN ./<file name>