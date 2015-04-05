#include <gl\glut.h>
#include "figureQueue.h"
#include "cube.h"

class Browser
{
	Cube cube;
	FigureQueue figureQueue;

public:
	Browser(int*, char**);
	~Browser();

	void Run();
};



