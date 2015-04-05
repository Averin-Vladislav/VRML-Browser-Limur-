#include <gl\glut.h>

class Figure
{

protected:
	double rotateX;
	double rotateY;

public:
	Figure();
	~Figure();

	double GetRotateX();
	double GetRotateY();
	void Rotate(int key, int x, int y);
	void Display();
};