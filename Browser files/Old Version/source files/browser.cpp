#include <gl\glut.h>
#include "browser.h"

#define ROTATE_CONST 1
#define SCALE_UP_CONST 1.02f
#define SCALE_DOWN_CONST 0.9803921568627451f
#define TRASNPARATE_CONST 0.05f



void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	for (auto& figure : FigureQueue::getQueue())
		figure->draw();

	glutSwapBuffers();
}

void keyboardEeventsHandler(unsigned char key, int x, int y)
{
	switch (key)
	{
	case '1':
		for (auto& figure : FigureQueue::getQueue())
			figure->rotate(0, ROTATE_CONST, 0);
		break;
	case '3':
		for (auto& figure : FigureQueue::getQueue())
			figure->rotate(0, -ROTATE_CONST, 0);
		break;
	case '4':
		for (auto& figure : FigureQueue::getQueue())
			figure->rotate(ROTATE_CONST, 0, 0);
		break;
	case '6':
		for (auto& figure : FigureQueue::getQueue())
			figure->rotate(-ROTATE_CONST, 0, 0);
		break;
	case '7':
		for (auto& figure : FigureQueue::getQueue())
			figure->rotate(0, 0, ROTATE_CONST);
		break;
	case '9':
		for (auto& figure : FigureQueue::getQueue())
			figure->rotate(0, 0, -ROTATE_CONST);
		break;

	case '+':
		for (auto& figure : FigureQueue::getQueue())
			figure->scale(SCALE_UP_CONST, SCALE_UP_CONST, SCALE_UP_CONST);
		break;
	case '-':
		for (auto& figure : FigureQueue::getQueue())
			figure->scale(SCALE_DOWN_CONST, SCALE_DOWN_CONST, SCALE_DOWN_CONST);
		break;

	case 27:
		exit(0);
		break;
	}
}

void specialEventsHandler(int key, int x, int y)
{
	switch (key)
	{
		//incorrect trasparate
	case GLUT_KEY_UP:
		for (auto& figure : FigureQueue::getQueue())
			figure->translate(0.0f, 0.0f, -TRASNPARATE_CONST);
		break;
	case GLUT_KEY_DOWN:
		for (auto& figure : FigureQueue::getQueue())
			figure->translate(0.0f, 0.0f, TRASNPARATE_CONST);
		break;
	case GLUT_KEY_LEFT:
		for (auto& figure : FigureQueue::getQueue())
			figure->translate(0.0f, TRASNPARATE_CONST, 0.0f);
		break;
	case GLUT_KEY_RIGHT:
		for (auto& figure : FigureQueue::getQueue())
			figure->translate(0.0f, -TRASNPARATE_CONST, 0.0f);
		break;
	}

	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
}

Browser::Browser(int *argcp, char **argv)
{
	glutInit(argcp, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Limur");
	Parser parser;
	parser.run(argcp, argv);
	//glutFullScreen();
}

Browser::~Browser()
{

}

void Browser::run()
{
	/*cube1 = std::shared_ptr<Cube>(new Cube(0.5f, 0.0f, 0.5f, 0.8f, 100, 150, 130));
	sphere1 = std::shared_ptr<Sphere>(new Sphere(0.25f, 0.0f, 0.f, 0.2f, 0, 0, 250));
	cylinder1 = std::shared_ptr<Cylinder>(new Cylinder(0.5f, 0.3f, 0.0f, -0.5f, -0.2f, 250, 230, 10));
	pyramid1 = std::shared_ptr<Pyramid>(new Pyramid(0.5, 0.5, 0.0f, 0.5f, -0.2f, 10, 240, 70));
	cone1 = std::shared_ptr<Cone>(new Cone(0.5f, 0.25f, 0.0f, -0.5f, 0.8f, 230, 30, 70));
	parallelepiped1 = std::shared_ptr<Parallelepiped>(new Parallelepiped(0.3f, 1.0f, 0.5f, 0, 0.5, -0.9f, 40, 130, 200));
	prism1 = std::shared_ptr<Prism>(new Prism(0.5f, 0.5f, 0, -0.5, -0.9, 130, 20, 10));

	figureQueue.addFigure(cylinder1);
	figureQueue.addFigure(pyramid1);
	figureQueue.addFigure(cone1);
	figureQueue.addFigure(parallelepiped1);
	figureQueue.addFigure(prism1);
	figureQueue.addFigure(sphere1);
	figureQueue.addFigure(cube1);*/

	parallelepiped1 = std::shared_ptr<Parallelepiped>(new Parallelepiped(Parser::getHeight(),
																		 Parser::getWidth(), 
																		 Parser::getDepth(), 
																		 Parser::getPosX(), 
																		 Parser::getPosY(),
																		 Parser::getPosZ(),
																		 Parser::getColorR(), 
																		 Parser::getColorG(), 
																		 Parser::getColorB()));
	figureQueue.addFigure(parallelepiped1);

	initializeSreen();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboardEeventsHandler);
	glutSpecialFunc(specialEventsHandler);
	glutMainLoop();
}

void Browser::initializeSreen()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	int w = glutGet(GLUT_WINDOW_WIDTH);
	int h = glutGet(GLUT_WINDOW_HEIGHT);
	gluPerspective(60, w / h, 0.1, 100);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	gluLookAt
		(
		3, 0, 0,
		0, 0, 0,
		0, 0, 1
		);
	glutSwapBuffers();
}
