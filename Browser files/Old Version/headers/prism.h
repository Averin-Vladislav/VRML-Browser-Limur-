#pragma once
#include <gl\glut.h>
#include "figure.h"



class Prism : public Figure
{
public:
	Prism(float _sideSize, float _height,
		  float _positionX, float _positionY, float _positionZ,
		  GLubyte _colorR, GLubyte _colorG, GLubyte _colorB);
	~Prism();

	void drawQuad(int a, int b, int c, int d);
	void drawTriangle(int a, int b, int c);
	void draw();

private:
	float dot[5][3];
};