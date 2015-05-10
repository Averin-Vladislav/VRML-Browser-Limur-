#pragma once
#include <gl\glut.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <conio.h>
#include <map>
#include <functional>



class Parser
{
public:
	Parser();
	~Parser();

	void run(int*, char**);
	static float getHeight();
	static float getWidth();
	static float getDepth();
	static GLubyte getColorR();
	static GLubyte getColorG();
	static GLubyte getColorB();
	static float getPosX();
	static float getPosY();
	static float getPosZ();

private:
	static float height;
	static float width;
	static float depth;
	static GLubyte colorR;
	static GLubyte colorG;
	static GLubyte colorB;
	static float posX;
	static float posY;
	static float posZ;
};