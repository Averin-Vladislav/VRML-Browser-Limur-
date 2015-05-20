#pragma once
#include <GL/glut.h>
#include "figure.h"



class Prism : public Figure
{
public:
	Prism() : Figure() {};
	~Prism();

	void matrixInit();
	void drawQuad(int a, int b, int c, int d);
	void drawTriangle(int a, int b, int c);
	void draw();

private:
	float dots_[6][3];
};
