#pragma once
#include <gl\glut.h>
#include "figure.h"



class Prism : public Figure
{
	float dot[5][3];

public:
	Prism(float sideSize, float hight, float posX, float posY, float posZ, GLubyte colorR, GLubyte colorG, GLubyte colorB);
	~Prism();

	void drawQuad(int a, int b, int c, int d);
	void drawTriangle(int a, int b, int c);
	void draw();
};