#pragma once
#include <gl\glut.h>

class Figure
{
protected:
	float positionX;
	float positionY;
	float positionZ;

	GLubyte r;
	GLubyte g;
	GLubyte b;

public:
	Figure();
	~Figure();

	virtual void draw() = 0;
	void rotate(int x, int y, int z);
	void scale(float x, float y, float z);
	void translate(float x, float y, float z);
};