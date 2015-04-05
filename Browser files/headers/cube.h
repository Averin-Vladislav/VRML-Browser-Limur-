#include <gl\glut.h>
#include "figure.h"

class Cube : public Figure 
{
	float ver[8][3];
	GLfloat color[8][3];

public:
	Cube();
	~Cube();

	void DrawSide(int a, int b, int c,int d);
	void Draw();
	void Rotate(int key, int x, int y);
	void Scale();
};