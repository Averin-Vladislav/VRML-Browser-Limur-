#include "cylinder.h"
#include <math.h>

#define M_PI 3.14159265358979323846
#define ANGLE_STEPSIZE 0.1f

Cylinder::Cylinder(float height, float radius, float posX, float posY, float posZ)
{
	rad = radius;
	heig = height;
	positionX = posX;
	positionY = posY;
	positionZ = posZ;
}

Cylinder::~Cylinder()
{

}

void Cylinder::draw()
{
	float x = 0.0;
	float y = 0.0;
	float angle;

	glColor3ub(255, 160, 100);
	glBegin(GL_QUAD_STRIP);
	angle = 0.0;
	while (angle < 2 * M_PI) 
	{
		x = rad * cos(angle);
		y = rad * sin(angle);
		glVertex3f(x + positionX, y + positionY, positionZ + (heig / 2));
		glVertex3f(x + positionX, y + positionY, positionZ - (heig / 2));
		angle = angle + ANGLE_STEPSIZE;
	}
	glVertex3f(rad + positionX, positionY, positionZ + (heig / 2));
	glVertex3f(rad + positionX, positionY, positionZ - (heig / 2));
	glEnd();

	glColor3ub(255, 50, 200);
	glBegin(GL_POLYGON);
	angle = 0.0;
	while (angle < 2 * M_PI)
	{
		x = rad * cos(angle);
		y = rad * sin(angle);
		glVertex3f(x + positionX, y + positionY, positionZ + (heig / 2));
		angle = angle + ANGLE_STEPSIZE;
	}
	glVertex3f(rad + positionX, positionY, positionZ + (heig / 2));
	glEnd();

	glColor3ub(105, 160, 100);
	glBegin(GL_POLYGON);
	angle = 0.0;
	while (angle < 2 * M_PI)
	{
		x = rad * cos(angle);
		y = rad * sin(angle);
		glVertex3f(x + positionX, y + positionY, positionZ - (heig / 2));
		angle = angle + ANGLE_STEPSIZE;
	}
	glEnd();
}

