#include <gl\glut.h>
#include <vector>
#include "figure.h"

class Sphere : public Figure
{

	std::vector<float> vertices;
	std::vector<float> normals;
	std::vector<float> texcoords;
	std::vector<short> indices;

public:
	Sphere(float radius, float posX, float posY, float posZ);
	~Sphere();

	void draw();
};