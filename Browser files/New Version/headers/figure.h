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
};