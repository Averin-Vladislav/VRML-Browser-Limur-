#include "camera.h"
#include <iostream>
#define M_PI 3.14159265358979323846
#define RADIAN_CONST 0.05



GLdouble Camera::eyeX = 3;
GLdouble Camera::eyeY = 0;
GLdouble Camera::eyeZ = 0;

GLdouble Camera::centerX = 0;
GLdouble Camera::centerY = 0;
GLdouble Camera::centerZ = 0;

GLdouble Camera::radius = 3;

Camera::Camera()
{
	
}

Camera::~Camera()
{

}

void Camera::init() 
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt
		(
		eyeX, eyeY, eyeZ,
		centerX, centerY, centerZ,
		0, 0, 1
		);
}

void Camera::rotate(int x, int y, int z)
{
	if (x)
	{
		eyeY = ((eyeZ - centerZ) * cos(RADIAN_CONST * x) - (eyeY - centerY) * sin(RADIAN_CONST * x));
		eyeZ = ((eyeZ - centerZ) * sin(RADIAN_CONST * x) + (eyeY - centerY) * cos(RADIAN_CONST * x));
	}
	if (y)
	{
		eyeX = ((eyeX - centerX) * cos(RADIAN_CONST * z) - (eyeY - centerY) * sin(RADIAN_CONST * z));
		eyeZ = ((eyeX - centerX) * sin(RADIAN_CONST * z) + (eyeY - centerY) * cos(RADIAN_CONST * z));
	}
	if (z)
	{
		eyeX = ((eyeX - centerX) * cos(RADIAN_CONST * z) - (eyeY - centerY) * sin(RADIAN_CONST * z));
		eyeY = ((eyeX - centerX) * sin(RADIAN_CONST * z) + (eyeY - centerY) * cos(RADIAN_CONST * z));
	}

	init();
	glutPostRedisplay();
}

void Camera::scale(double k)
{
	eyeX *= k;
	eyeY *= k;
	eyeZ *= k;

	init();
	glutPostRedisplay();
}

void Camera::translate(char planeName, GLdouble transpConst)
{
	switch (planeName)
	{
	case 'y':
		eyeY += transpConst;
		centerY += transpConst;
		break;
	case 'z':
		eyeZ += transpConst;
		centerZ += transpConst;
		break;
	default:
		std::cout << "Plane name error!" << std::endl;
		break;
	}

	init();
	glutPostRedisplay();
}

