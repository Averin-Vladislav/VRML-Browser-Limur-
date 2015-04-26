#pragma once
#include <gl\glut.h>
#include "figure.h"



class Parallelogramm : public Figure
{
	float dot[8][3];

public:
	Parallelogramm(float height, float width, float depth, float posX, float posY, float posZ, GLubyte colorR, GLubyte colorG, GLubyte colorB);
	~Parallelogramm();

	void drawSide(int a, int b, int c, int d);
	void draw();
};