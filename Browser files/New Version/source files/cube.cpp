#include "cube.h"



Cube::Cube(float sideSize, float posX, float posY, float posZ, GLubyte colorR, GLubyte colorG, GLubyte colorB)
{
	dot[0][0] = posX - (sideSize / 2); dot[0][1] = posY - (sideSize / 2); dot[0][2] = posZ + (sideSize / 2);
	dot[1][0] = posX - (sideSize / 2); dot[1][1] = posY + (sideSize / 2); dot[1][2] = posZ + (sideSize / 2);
	dot[2][0] = posX + (sideSize / 2); dot[2][1] = posY + (sideSize / 2); dot[2][2] = posZ + (sideSize / 2);
	dot[3][0] = posX + (sideSize / 2); dot[3][1] = posY - (sideSize / 2); dot[3][2] = posZ + (sideSize / 2);
	dot[4][0] = posX - (sideSize / 2); dot[4][1] = posY - (sideSize / 2); dot[4][2] = posZ - (sideSize / 2);
	dot[5][0] = posX - (sideSize / 2); dot[5][1] = posY + (sideSize / 2); dot[5][2] = posZ - (sideSize / 2);
	dot[6][0] = posX + (sideSize / 2); dot[6][1] = posY + (sideSize / 2); dot[6][2] = posZ - (sideSize / 2);
	dot[7][0] = posX + (sideSize / 2); dot[7][1] = posY - (sideSize / 2); dot[7][2] = posZ - (sideSize / 2);

	r = colorR;
	g = colorG;
	b = colorB;
}

Cube::~Cube()
{

}

void Cube::drawSide(int a, int b, int c, int d)
{
	glBegin(GL_QUADS);

	glVertex3fv(dot[a]);
	glVertex3fv(dot[b]);
	glVertex3fv(dot[c]);
	glVertex3fv(dot[d]);

	glEnd();
}

void Cube::draw()
{
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();

	glColor3ub(r, g, b);

	drawSide(0, 3, 2, 1);
	drawSide(2, 3, 7, 6);
	drawSide(0, 4, 7, 3);
	drawSide(1, 2, 6, 5);
	drawSide(4, 5, 6, 7);
	drawSide(0, 1, 5, 4);

	glPopMatrix();
}


