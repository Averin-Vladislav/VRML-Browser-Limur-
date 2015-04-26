#pragma once
#include <gl\glut.h>
#include "figure.h"



class Pyramid : public Figure
{
	float dot[5][3];

public:
	Pyramid(float sideSize, float hight, float posX, float posY, float posZ, GLubyte colorR, GLubyte colorG, GLubyte colorB);
	~Pyramid();

	void drawQuad(int a, int b, int c, int d);
	void drawTriangle(int a, int b, int c);
	void draw();
};