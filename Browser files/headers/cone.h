#include <gl\glut.h>
#include "figure.h"

class Cone : public Figure
{

	float heig;
	float rad;

public:
	Cone(float height, float radius, float x, float y, float z);
	~Cone();

	void draw();
};