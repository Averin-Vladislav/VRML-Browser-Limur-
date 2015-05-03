#include "prism.h"

#define threeSQRT 1.732f


Prism::Prism(float sideSize, float hight, float posX, float posY, float posZ, GLubyte colorR, GLubyte colorG, GLubyte colorB)
{
	dot[0][0] = posX - ((threeSQRT / 2.0) * sideSize * (1.0 / 3.0)); dot[0][1] = posY - (sideSize / 2); dot[0][2] = posZ - (hight / 2);
	dot[1][0] = posX - ((threeSQRT / 2.0) * sideSize * (1.0 / 3.0)); dot[1][1] = posY + (sideSize / 2); dot[1][2] = posZ - (hight / 2);
	dot[2][0] = posX + ((threeSQRT / 2.0) * sideSize * (2.0 / 3.0)); dot[2][1] = posY;                  dot[2][2] = posZ - (hight / 2);
	dot[3][0] = posX - ((threeSQRT / 2.0) * sideSize * (1.0 / 3.0)); dot[3][1] = posY - (sideSize / 2); dot[3][2] = posZ + (hight / 2);
	dot[4][0] = posX - ((threeSQRT / 2.0) * sideSize * (1.0 / 3.0)); dot[4][1] = posY + (sideSize / 2); dot[4][2] = posZ + (hight / 2);
	dot[5][0] = posX + ((threeSQRT / 2.0) * sideSize * (2.0 / 3.0)); dot[5][1] = posY;                  dot[5][2] = posZ + (hight / 2);

	r = colorR;
	g = colorG;
	b = colorB;
}

Prism::~Prism()
{

}

void Prism::drawQuad(int a, int b, int c, int d)
{
	glBegin(GL_QUADS);

	glVertex3fv(dot[a]);
	glVertex3fv(dot[b]);
	glVertex3fv(dot[c]);
	glVertex3fv(dot[d]);

	glEnd();
}

void Prism::drawTriangle(int a, int b, int c)
{
	glBegin(GL_TRIANGLES);
	glVertex3fv(dot[a]);
	glVertex3fv(dot[b]);
	glVertex3fv(dot[c]);

	glEnd();
}

void Prism::draw()
{
	glColor3ub(r, g, b);

	drawQuad(0, 1, 4, 3);
	drawQuad(1, 2, 5, 4);
	drawQuad(0, 2, 5, 3);

	drawTriangle(3, 4, 5);
	drawTriangle(0, 1, 2);
}