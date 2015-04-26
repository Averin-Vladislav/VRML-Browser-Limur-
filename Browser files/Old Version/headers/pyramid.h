#pragma once
#include <gl\glut.h>
#include "figure.h"

//change colors of cubes
class Pyramid : public Figure
{
	float ver[5][3];

public:
	Pyramid(float sideSize, int hight, float posX, float posY, float posZ);
	~Pyramid();

	void drawQuad(int a, int b, int c, int d);
	void drawTriangle(int a, int b, int c);
	void draw();
};