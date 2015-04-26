#include "pyramid.h"



Pyramid::Pyramid(float sideSize, float hight, float posX, float posY, float posZ, GLubyte colorR, GLubyte colorG, GLubyte colorB)
{
	dot[0][0] = posX - (sideSize / 2); dot[0][1] = posY - (sideSize / 2); dot[0][2] = posZ - (sideSize / 2);
	dot[1][0] = posX - (sideSize / 2); dot[1][1] = posY + (sideSize / 2); dot[1][2] = posZ - (sideSize / 2);
	dot[2][0] = posX + (sideSize / 2); dot[2][1] = posY + (sideSize / 2); dot[2][2] = posZ - (sideSize / 2);
	dot[3][0] = posX + (sideSize / 2); dot[3][1] = posY - (sideSize / 2); dot[3][2] = posZ - (sideSize / 2);
	dot[4][0] = posX;                  dot[4][1] = posY;                  dot[4][2] = posZ + (hight / 2);

	r = colorR;
	g = colorG;
	b = colorB;
}

Pyramid::~Pyramid()
{

}

void Pyramid::drawQuad(int a, int b, int c, int d)
{
	glBegin(GL_QUADS);

	glVertex3fv(dot[a]);
	glVertex3fv(dot[b]);
	glVertex3fv(dot[c]);
	glVertex3fv(dot[d]);

	glEnd();
}

void Pyramid::drawTriangle(int a, int b, int c)
{
	glBegin(GL_TRIANGLES);

	glVertex3fv(dot[a]);
	glVertex3fv(dot[b]);
	glVertex3fv(dot[c]);

	glEnd();
}


void Pyramid::draw()
{
	glColor3ub(r, g, b);

	drawQuad(0, 1, 2, 3);

	drawTriangle(0, 1, 4);
	drawTriangle(1, 2, 4);
	drawTriangle(2, 3, 4);
	drawTriangle(0, 3, 4);
}


