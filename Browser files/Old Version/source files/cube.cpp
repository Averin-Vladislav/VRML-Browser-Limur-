#include "cube.h"

Cube::Cube(float sideSize, float posX, float posY, float posZ)
{
	ver[0][0] = posX - (sideSize / 2); ver[0][1] = posY - (sideSize / 2); ver[0][2] = posZ + (sideSize / 2);
	ver[1][0] = posX - (sideSize / 2); ver[1][1] = posY + (sideSize / 2); ver[1][2] = posZ + (sideSize / 2);
	ver[2][0] = posX + (sideSize / 2); ver[2][1] = posY + (sideSize / 2); ver[2][2] = posZ + (sideSize / 2);
	ver[3][0] = posX + (sideSize / 2); ver[3][1] = posY - (sideSize / 2); ver[3][2] = posZ + (sideSize / 2);
	ver[4][0] = posX - (sideSize / 2); ver[4][1] = posY - (sideSize / 2); ver[4][2] = posZ - (sideSize / 2);
	ver[5][0] = posX - (sideSize / 2); ver[5][1] = posY + (sideSize / 2); ver[5][2] = posZ - (sideSize / 2);
	ver[6][0] = posX + (sideSize / 2); ver[6][1] = posY + (sideSize / 2); ver[6][2] = posZ - (sideSize / 2);
	ver[7][0] = posX + (sideSize / 2); ver[7][1] = posY - (sideSize / 2); ver[7][2] = posZ - (sideSize / 2);

	/*color[0][0] = 0.0; color[0][1] = 0.0; color[0][2] = 0.0;
	color[1][0] = 1.0; color[1][1] = 0.0; color[1][2] = 0.0;
	color[2][0] = 1.0; color[2][1] = 1.0; color[2][2] = 0.0;
	color[3][0] = 0.0; color[3][1] = 1.0; color[3][2] = 0.0;
	color[4][0] = 0.0; color[4][1] = 0.0; color[4][2] = 1.0;
	color[5][0] = 1.0; color[5][1] = 0.0; color[5][2] = 1.0;
	color[6][0] = 1.0; color[6][1] = 1.0; color[6][2] = 1.0;
	color[7][0] = 0.0; color[7][1] = 1.0; color[7][2] = 1.0;*/
}

Cube::~Cube()
{

}

void Cube::drawSide(int a, int b, int c, int d)
{
	glBegin(GL_QUADS);
	//glColor3fv(color[a]);
	glVertex3fv(ver[a]);

	//glColor3fv(color[b]);
	glVertex3fv(ver[b]);

	//glColor3fv(color[c]);
	glVertex3fv(ver[c]);

	//glColor3fv(color[d]);
	glVertex3fv(ver[d]);
	glEnd();
}

void Cube::draw()
{
	glColor3ub(155, 160, 100);
	drawSide(0, 3, 2, 1);

	glColor3ub(255, 60, 100);
	drawSide(2, 3, 7, 6);

	glColor3ub(255, 230, 100);
	drawSide(0, 4, 7, 3);

	glColor3ub(200, 160, 150);
	drawSide(1, 2, 6, 5);

	glColor3ub(65, 110, 50);
	drawSide(4, 5, 6, 7);

	glColor3ub(75, 230, 200);
	drawSide(0, 1, 5, 4);
}


