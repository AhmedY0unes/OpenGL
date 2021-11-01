
#include<GL/glut.h>
#include<GL/gl.h>

void linesegment (void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.8,0.0);
	glBegin(GL_TRIANGLE_STRIP);
	 glVertex2i(200,250);
	 glVertex2i(100,200);
     glVertex2i(300,200);
	//  glVertex2i(10,145);
   	 glEnd();
	glBegin(GL_POLYGON);
		glColor3f(1.0,0.0,0.0);
	 glVertex2i(100,50);
	 glVertex2i(300,50);
     glVertex2i(300,200);
	 glVertex2i(100,200);
	 
   	 glEnd();
	glFlush();
		glBegin(GL_POLYGON);
		glColor3f(1.0,0.0,1.0);
	 glVertex2i(175,50);
	 glVertex2i(225,50);
     glVertex2i(225,125);
	 glVertex2i(175,125);
	 
   	 glEnd();
	glFlush();
	

}



void init (void)
{
	glClearColor(0.0,0.0,0.0,0.0); //specifies clear 	values for the color buffers (R,G,B,Alpha)
	glMatrixMode(GL_PROJECTION); // sets the 	current matrix mode
	gluOrtho2D(0.0,400.0,0.0,300.0); //2D orthographic 	projection matrix (left,right,bottom,top)
}
int main (int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //sets 	the initial display mode
	glutInitWindowPosition(50,100); //sets the initial window 	position
    	glutInitWindowSize(400,300); //sets the initial window size
    	glutCreateWindow("Line"); // creates the window with name line
	init();
    // for(int i = 0;i < 1000000000;i++){}
	glutDisplayFunc(linesegment); //sets the display callback for 	the current window.
	glutMainLoop(); // enters the GLUT event processing loop
return 0;
}


// Run using: opengl.sh <file name.cpp> THEN ./<file name>