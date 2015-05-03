#pragma once
#include <gl\glut.h>



class Camera
{
	static GLdouble eyeX, eyeY, eyeZ;
	static GLdouble centerX, centerY, centerZ;
	static GLdouble radius;

public:
	Camera();
	~Camera();

	static void init();
	static void rotate(int x, int y, int z);
	static void scale(double k);
	static void translate(char planeName, GLdouble transpConst);
};