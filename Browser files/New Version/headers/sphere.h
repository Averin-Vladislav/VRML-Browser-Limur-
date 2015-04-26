#pragma once
#include <gl\glut.h>
#include <vector>
#include "figure.h"



class Sphere : public Figure
{

	std::vector<float> vertices;
	std::vector<float> normals;
	std::vector<float> texcoords;
	std::vector<short> indices;

	float rad;

public:
	Sphere(float radius, float posX, float posY, float posZ, GLubyte colorR, GLubyte colorG, GLubyte colorB);
	~Sphere();

	void draw();
};