#include "cone.h"
#include <math.h>

#define M_PI 3.14159265358979323846
#define ANGLE_STEPSIZE 0.001f



Cone::Cone(float height, float radius, float posX, float posY, float posZ, GLubyte colorR, GLubyte colorG, GLubyte colorB)
{
	rad = radius;
	heig = height;

	positionX = posX;
	positionY = posY;
	positionZ = posZ;

	r = colorR;
	g = colorG;
	b = colorB;
}

Cone::~Cone()
{

}

void Cone::draw()
{
	float x = 0.0;
	float y = 0.0;
	float angle;

	glColor3ub(r, g, b);
	
	glBegin(GL_POLYGON);
	angle = 0.0;
	glVertex3f(positionX, positionY, positionZ + (heig / 2));
	while (angle <= 2 * M_PI + 1)
	{
		x = rad * cos(angle);
		y = rad * sin(angle);
		glVertex3f(x + positionX, y + positionY, positionZ - (heig / 2));
		angle = angle + ANGLE_STEPSIZE;
	}
	glEnd();

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

