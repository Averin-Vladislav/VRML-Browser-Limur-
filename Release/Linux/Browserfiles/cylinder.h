#pragma once
#include <GL/glut.h>
#include "figure.h"



class Cylinder : public Figure
{
public:
	Cylinder() : Figure() {};
	~Cylinder();

	void draw();
};
