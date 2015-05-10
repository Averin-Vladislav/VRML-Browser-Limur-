#pragma once
#include <gl\glut.h>
#include "figure.h"



class Cone : public Figure
{
public:
	Cone(float _height, float _radius,
		 float _positionX, float _positionY, float _positionZ,
		 GLubyte _colorR, GLubyte _colorG, GLubyte _colorB);
	~Cone();

private:
	void draw();
	float height;
	float radius;
};