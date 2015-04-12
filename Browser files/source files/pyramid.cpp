#include "pyramid.h"

Pyramid::Pyramid(float sideSize, int hight, float posX, float posY, float posZ)
{
	ver[0][0] = posX - (sideSize / 2); ver[0][1] = posY - (sideSize / 2); ver[0][2] = posZ - (sideSize / 2);
	ver[1][0] = posX - (sideSize / 2); ver[1][1] = posY + (sideSize / 2); ver[1][2] = posZ - (sideSize / 2);
	ver[2][0] = posX + (sideSize / 2); ver[2][1] = posY + (sideSize / 2); ver[2][2] = posZ - (sideSize / 2);
	ver[3][0] = posX + (sideSize / 2); ver[3][1] = posY - (sideSize / 2); ver[3][2] = posZ - (sideSize / 2);
	ver[4][0] = posX; ver[4][1] = posY; ver[4][2] = posZ + (hight / 2);
}

Pyramid::~Pyramid()
{

}

void Pyramid::drawQuad(int a, int b, int c, int d)
{
	glBegin(GL_QUADS);
	glVertex3fv(ver[a]);

	glVertex3fv(ver[b]);

	glVertex3fv(ver[c]);

	glVertex3fv(ver[d]);
	glEnd();
}

void Pyramid::drawTriangle(int a, int b, int c)
{
	glBegin(GL_TRIANGLES);
	glVertex3fv(ver[a]);

	glVertex3fv(ver[b]);

	glVertex3fv(ver[c]);
	glEnd();
}


void Pyramid::draw()
{
	glColor3ub(155, 160, 100);
	drawQuad(0, 1, 2, 3);

	glColor3ub(255, 60, 100);
	drawTriangle(0, 1, 4);

	glColor3ub(255, 230, 100);
	drawTriangle(1, 2, 4);

	glColor3ub(200, 160, 150);
	drawTriangle(2, 3, 4);

	glColor3ub(65, 110, 50);
	drawTriangle(0, 3, 4);
}


