#pragma once
#include <GL/glut.h>
#include "figure.h"



class Cone : public Figure
{
public:
	Cone() : Figure() {};
	~Cone();
	void draw();
};
