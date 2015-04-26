#pragma once
#include <gl\glut.h>
#include "figure.h"



class Cube : public Figure 
{
	float dot[8][3];

public:
	Cube(float sideSize, float posX, float posY, float posZ, GLubyte colorR, GLubyte colorG, GLubyte colorB);
	~Cube();

	void drawSide(int a, int b, int c, int d);
	void draw();
};