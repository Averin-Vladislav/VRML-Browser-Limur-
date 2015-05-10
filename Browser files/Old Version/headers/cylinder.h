#pragma once
#include <gl\glut.h>
#include "figure.h"



class Cylinder : public Figure
{
public:
	Cylinder(float _height, float _radius,
			 float _positionX, float _positionY, float _positionZ,
			 GLubyte _colorR, GLubyte _colorG, GLubyte _colorB);

	~Cylinder();

	void draw();

private:
	float height;
	float radius;
};