#pragma once
#include <gl\glut.h>
#include <vector>
#include "figure.h"



class Sphere : public Figure
{
public:
	Sphere(float _radius,
		   float _positionX, float _positionY, float _positionZ,
		   GLubyte _colorR, GLubyte _colorG, GLubyte _colorB);
	~Sphere();

	void draw();

private:
	std::vector<float> vertices;
	std::vector<float> normals;
	std::vector<float> texcoords;
	std::vector<short> indices;

	float radius;
};