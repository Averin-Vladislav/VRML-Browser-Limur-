#include "pyramid.h"



Pyramid::Pyramid(float _sideSize, float _height, float _positionX, float _positionY, float _positionZ, GLubyte _colorR, GLubyte _colorG, GLubyte _colorB)
{
	dot[0][0] = _positionX - (_sideSize / 2); dot[0][1] = _positionY - (_sideSize / 2); dot[0][2] = _positionZ - (_sideSize / 2);
	dot[1][0] = _positionX - (_sideSize / 2); dot[1][1] = _positionY + (_sideSize / 2); dot[1][2] = _positionZ - (_sideSize / 2);
	dot[2][0] = _positionX + (_sideSize / 2); dot[2][1] = _positionY + (_sideSize / 2); dot[2][2] = _positionZ - (_sideSize / 2);
	dot[3][0] = _positionX + (_sideSize / 2); dot[3][1] = _positionY - (_sideSize / 2); dot[3][2] = _positionZ - (_sideSize / 2);
	dot[4][0] = _positionX;                   dot[4][1] = _positionY;                   dot[4][2] = _positionZ + (_height / 2);

	colorR = _colorR;
	colorG = _colorG;
	colorB = _colorB;
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
	glColor3ub(colorR, colorG, colorB);

	drawQuad(0, 1, 2, 3);

	drawTriangle(0, 1, 4);
	drawTriangle(1, 2, 4);
	drawTriangle(2, 3, 4);
	drawTriangle(0, 3, 4);
}


