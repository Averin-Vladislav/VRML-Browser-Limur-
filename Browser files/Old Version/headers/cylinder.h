#include <gl\glut.h>
#include "figure.h"

class Cylinder : public Figure
{

	float heig;
	float rad;

public:
	Cylinder(float height, float radius, float x, float y, float z);
	~Cylinder();

	void draw();
};