#pragma once
#include <gl\glut.h>
#include "figure.h"



class Cone : public Figure
{

	float heig;
	float rad;

public:
	Cone(float height, float radius, float x, float y, float z, GLubyte colorR, GLubyte colorG, GLubyte colorB);
	~Cone();

	void draw();
};