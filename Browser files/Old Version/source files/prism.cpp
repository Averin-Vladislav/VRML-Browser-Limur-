#include "prism.h"

#define threeSQRT 1.732f


Prism::Prism(float _sideSize, float _height, float _positionX, float _positionY, float _positionZ, GLubyte _colorR, GLubyte _colorG, GLubyte _colorB)
{
	dot[0][0] = _positionX - ((threeSQRT / 2.0) * _sideSize * (1.0 / 3.0)); dot[0][1] = _positionY - (_sideSize / 2); dot[0][2] = _positionZ - (_height / 2);
	dot[1][0] = _positionX - ((threeSQRT / 2.0) * _sideSize * (1.0 / 3.0)); dot[1][1] = _positionY + (_sideSize / 2); dot[1][2] = _positionZ - (_height / 2);
	dot[2][0] = _positionX + ((threeSQRT / 2.0) * _sideSize * (2.0 / 3.0)); dot[2][1] = _positionY;                  dot[2][2] = _positionZ - (_height / 2);
	dot[3][0] = _positionX - ((threeSQRT / 2.0) * _sideSize * (1.0 / 3.0)); dot[3][1] = _positionY - (_sideSize / 2); dot[3][2] = _positionZ + (_height / 2);
	dot[4][0] = _positionX - ((threeSQRT / 2.0) * _sideSize * (1.0 / 3.0)); dot[4][1] = _positionY + (_sideSize / 2); dot[4][2] = _positionZ + (_height / 2);
	dot[5][0] = _positionX + ((threeSQRT / 2.0) * _sideSize * (2.0 / 3.0)); dot[5][1] = _positionY;                  dot[5][2] = _positionZ + (_height / 2);

	colorR = _colorR;
	colorG = _colorG;
	colorB = _colorB;
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
	glColor3ub(colorR, colorG, colorB);

	drawQuad(0, 1, 4, 3);
	drawQuad(1, 2, 5, 4);
	drawQuad(0, 2, 5, 3);

	drawTriangle(3, 4, 5);
	drawTriangle(0, 1, 2);
}