#include "cube.h"

Cube::Cube()
{
	ver[0][0] = -1.0; ver[0][1] = -1.0; ver[0][2] = 1.0;
	ver[1][0] = -1.0; ver[1][1] = 1.0; ver[1][2] = 1.0;
	ver[2][0] = 1.0; ver[2][1] = 1.0; ver[2][2] = 1.0;
	ver[3][0] = 1.0; ver[3][1] = -1.0; ver[3][2] = 1.0;
	ver[4][0] = -1.0; ver[4][1] = -1.0; ver[4][2] = -1.0;
	ver[5][0] = -1.0; ver[5][1] = 1.0; ver[5][2] = -1.0;
	ver[6][0] = 1.0; ver[6][1] = 1.0; ver[6][2] = -1.0;
	ver[7][0] = 1.0; ver[7][1] = -1.0; ver[7][2] = -1.0;

	color[0][0] = 0.0; color[0][1] = 0.0; color[0][2] = 0.0;
	color[1][0] = 1.0; color[1][1] = 0.0; color[1][2] = 0.0;
	color[2][0] = 1.0; color[2][1] = 1.0; color[2][2] = 0.0;
	color[3][0] = 0.0; color[3][1] = 1.0; color[3][2] = 0.0;
	color[4][0] = 0.0; color[4][1] = 0.0; color[4][2] = 1.0;
	color[5][0] = 1.0; color[5][1] = 0.0; color[5][2] = 1.0;
	color[6][0] = 1.0; color[6][1] = 1.0; color[6][2] = 1.0;
	color[7][0] = 0.0; color[7][1] = 1.0; color[7][2] = 1.0;

	Figure::rotateX = 0;
	Figure::rotateY = 0;
}

Cube::~Cube()
{

}

void Cube::DrawSide(int a, int b, int c, int d)
{
	glBegin(GL_QUADS);
	glColor3fv(color[a]);
	glVertex3fv(ver[a]);

	glColor3fv(color[b]);
	glVertex3fv(ver[b]);

	glColor3fv(color[c]);
	glVertex3fv(ver[c]);

	glColor3fv(color[d]);
	glVertex3fv(ver[d]);
	glEnd();
}

void Cube::Draw()
{
	DrawSide(0, 3, 2, 1);
	DrawSide(2, 3, 7, 6);
	DrawSide(0, 4, 7, 3);
	DrawSide(1, 2, 6, 5);
	DrawSide(4, 5, 6, 7);
	DrawSide(0, 1, 5, 4);
}


