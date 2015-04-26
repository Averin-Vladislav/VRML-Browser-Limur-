#include "figure.h"
#include <memory>

Figure::Figure()
{

}

Figure::~Figure()
{

}

void Figure::rotate(int x, int y, int z)
{
	glRotatef(x, 1.0, 0.0, 0.0);
	glRotatef(y, 0.0, 1.0, 0.0);
	glRotatef(z, 0.0, 0.0, 1.0);
	glutPostRedisplay();
}

void Figure::scale(float x, float y, float z)
{
	glScalef(x, y, z);
	glutPostRedisplay();
}

//incorretc transparate
void Figure::translate(float x, float y, float z)
{
	glTranslatef(x, y, z);
	glutPostRedisplay();
}

