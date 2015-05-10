#include "cube.h"



Cube::Cube(float _sideSize, float _positionX, float _positionY, float _positionZ, GLubyte _colorR, GLubyte _colorG, GLubyte _colorB)
{
	dot[0][0] = _positionX - (_sideSize / 2); dot[0][1] = _positionY - (_sideSize / 2); dot[0][2] = _positionZ + (_sideSize / 2);
	dot[1][0] = _positionX - (_sideSize / 2); dot[1][1] = _positionY + (_sideSize / 2); dot[1][2] = _positionZ + (_sideSize / 2);
	dot[2][0] = _positionX + (_sideSize / 2); dot[2][1] = _positionY + (_sideSize / 2); dot[2][2] = _positionZ + (_sideSize / 2);
	dot[3][0] = _positionX + (_sideSize / 2); dot[3][1] = _positionY - (_sideSize / 2); dot[3][2] = _positionZ + (_sideSize / 2);
	dot[4][0] = _positionX - (_sideSize / 2); dot[4][1] = _positionY - (_sideSize / 2); dot[4][2] = _positionZ - (_sideSize / 2);
	dot[5][0] = _positionX - (_sideSize / 2); dot[5][1] = _positionY + (_sideSize / 2); dot[5][2] = _positionZ - (_sideSize / 2);
	dot[6][0] = _positionX + (_sideSize / 2); dot[6][1] = _positionY + (_sideSize / 2); dot[6][2] = _positionZ - (_sideSize / 2);
	dot[7][0] = _positionX + (_sideSize / 2); dot[7][1] = _positionY - (_sideSize / 2); dot[7][2] = _positionZ - (_sideSize / 2);

	colorR = _colorR;
	colorG = _colorG;
	colorB = _colorB;
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

	glColor3ub(colorR, colorG, colorB);

	drawSide(0, 3, 2, 1);
	drawSide(2, 3, 7, 6);
	drawSide(0, 4, 7, 3);
	drawSide(1, 2, 6, 5);
	drawSide(4, 5, 6, 7);
	drawSide(0, 1, 5, 4);

	glPopMatrix();
}


