#include <gl\glut.h>
#include "browser.h"

Browser::Browser(int *argcp, char **argv)
{
	glutInit(argcp, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(640, 480);
	glutCreateWindow("GLUT");
}

Browser::~Browser()
{

}

void Browser::Run()
{
	figureQueue.addFigure(cube);

	for (auto& figure : figureQueue.getQueue())
		figure.Display();
	//glutDisplayFunc(Display);

	for (auto& figure : figureQueue.getQueue())
		//figure.Rotate();
	//glutSpecialFunc(SpecialKeys(key, x, y));

	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
}