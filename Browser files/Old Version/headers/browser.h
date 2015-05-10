#pragma once
#include <gl\glut.h>
#include "camera.h"
#include "figureQueue.h"
#include "cube.h"
#include "sphere.h"
#include "cylinder.h"
#include "pyramid.h";
#include "cone.h"
#include "parallelepiped.h"
#include "prism.h"
#include "parser.h"

class Browser
{
public:
	Browser(int*, char**);
	~Browser();

	void run();
	void initializeSreen();

private:
	std::shared_ptr<Cube> cube1;
	std::shared_ptr<Sphere> sphere1;
	std::shared_ptr<Cylinder> cylinder1;
	std::shared_ptr<Pyramid> pyramid1;
	std::shared_ptr<Cone> cone1;
	std::shared_ptr<Parallelepiped> parallelepiped1;
	std::shared_ptr<Prism> prism1;

	FigureQueue figureQueue;
};



