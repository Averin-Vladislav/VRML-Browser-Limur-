#pragma once
#include <gl\glut.h>
#include "figure.h"



class Cube : public Figure
{
public:
	Cube(float _sideSize,
		 float _positionX, float _positionY, float _positionZ,
		 GLubyte _colorR, GLubyte _colorG, GLubyte _colorB);
	~Cube();

	void drawSide(int a, int b, int c, int d);
	void draw();

private:
	float dot[8][3];
};