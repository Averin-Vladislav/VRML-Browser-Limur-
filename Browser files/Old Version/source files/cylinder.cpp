#include "cylinder.h"
#include <math.h>

#define M_PI 3.14159265358979323846
#define ANGLE_STEPSIZE 0.1f



Cylinder::Cylinder(float _height, float _radius, float _positionX, float _positionY, float _positionZ, GLubyte _colorR, GLubyte _colorG, GLubyte _colorB)
{
	radius = _radius;
	height = _height;

	positionX = _positionX;
	positionY = _positionY;
	positionZ = _positionZ;

	colorR = _colorR;
	colorG = _colorG;
	colorB = _colorB;
}

Cylinder::~Cylinder()
{

}

void Cylinder::draw()
{
	float x = 0.0;
	float y = 0.0;
	float angle;

	glColor3ub(colorR, colorG, colorB);
	glBegin(GL_QUAD_STRIP);
	angle = 0.0;
	while (angle < 2 * M_PI)
	{
		x = radius * cos(angle);
		y = radius * sin(angle);
		glVertex3f(x + positionX, y + positionY, positionZ + (height / 2));
		glVertex3f(x + positionX, y + positionY, positionZ - (height / 2));
		angle = angle + ANGLE_STEPSIZE;
	}
	glVertex3f(radius + positionX, positionY, positionZ + (height / 2));
	glVertex3f(radius + positionX, positionY, positionZ - (height / 2));
	glEnd();

	glBegin(GL_POLYGON);
	angle = 0.0;
	while (angle < 2 * M_PI)
	{
		x = radius * cos(angle);
		y = radius * sin(angle);
		glVertex3f(x + positionX, y + positionY, positionZ + (height / 2));
		angle = angle + ANGLE_STEPSIZE;
	}
	glVertex3f(radius + positionX, positionY, positionZ + (height / 2));
	glEnd();

	glBegin(GL_POLYGON);
	angle = 0.0;
	while (angle < 2 * M_PI)
	{
		x = radius * cos(angle);
		y = radius * sin(angle);
		glVertex3f(x + positionX, y + positionY, positionZ - (height / 2));
		angle = angle + ANGLE_STEPSIZE;
	}
	glEnd();
}

