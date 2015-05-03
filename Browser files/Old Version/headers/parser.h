#pragma once
#include <gl\glut.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <conio.h>
#include <map>
#include <functional>

//typedef int FigureQueue;

class Parser
{
	static float height;
	static float width;
	static float depth;
	static GLubyte colorR;
	static GLubyte colorG;
	static GLubyte colorB;
	static float posX;
	static float posY;
	static float posZ;

	//std::map<std::string, std::function<void()>> map;
	//FigureQueue queue;
public:
	Parser();
	~Parser();

	void run();
	static float getHeight();
	static float getWidth();
	static float getDepth();
	static GLubyte getColorR();
	static GLubyte getColorG();
	static GLubyte getColorB();
	static float getPosX();
	static float getPosY();
	static float getPosZ();
};