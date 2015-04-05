#include "figure.h"

Figure::Figure()
{

}

Figure::~Figure()
{

}

void Figure::Display()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	int w = glutGet(GLUT_WINDOW_WIDTH);
	int h = glutGet(GLUT_WINDOW_HEIGHT);
	gluPerspective(60, w / h, 0.1, 100);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt
		(
		3, 3, 3,
		0, 0, 0,
		0, 0, 1
		);
	glRotatef(rotateX, 1.0, 0.0, 0.0);
	glRotatef(rotateY, 0.0, 1.0, 0.0);
	glutSwapBuffers();
}

void Figure::Rotate(int key, int x, int y)
{
	if (key == GLUT_KEY_RIGHT)
		rotateY += 5;
	else if (key == GLUT_KEY_LEFT)
		rotateY -= 5;
	else if (key == GLUT_KEY_UP)
		rotateX += 5;
	else if (key == GLUT_KEY_DOWN)
		rotateX -= 5;
	glutPostRedisplay();
}

double Figure::GetRotateX()
{
	return rotateX;
}

double Figure::GetRotateY()
{
	return rotateY;
}
