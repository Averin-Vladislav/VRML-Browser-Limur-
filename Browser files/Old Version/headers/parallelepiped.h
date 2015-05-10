#pragma once
#include <gl\glut.h>
#include "figure.h"



class Parallelepiped : public Figure
{
public:
	Parallelepiped(float _height, float _width, float _depth,
				   float _posX, float _posY, float _posZ,
				   GLubyte _colorR, GLubyte _colorG, GLubyte _colorB);
	~Parallelepiped();

	void drawSide(int a, int b, int c, int d);
	void draw();

private:
	float dot[8][3];
};