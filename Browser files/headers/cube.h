#pragma once
#include <gl\glut.h>
#include "figure.h"

//change colors of cubes
class Cube : public Figure 
{
	float ver[8][3];
	//float color[8][3];

public:
	Cube(float sideSize, float posX, float posY, float posZ);
	~Cube();

	void drawSide(int a, int b, int c, int d);
	void draw();
};