#include <gl\glut.h>
#include "camera.h"
#include "browser.h"

#define ROTATE_CONST 1
#define SCALE_UP_CONST 1.02
#define SCAEL_DOWN_CONST 0.9803921568627451
#define TRASNPARATE_CONST 0.03



void display() 
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	GLfloat light_diffuse[] = { 0.4, 0.7, 0.2 };
	GLfloat light_position[] = { 0.0, 0.0, 1.0, 1.0 };
	glEnable(GL_LIGHT1);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT1, GL_POSITION, light_position);

	for (auto& figure : FigureQueue::getQueue())
		figure->draw();

	glDisable(GL_LIGHT1);
	glutSwapBuffers();
}

//change glut keys constants
void eventsHandler(int key, int x, int y) 
{
	switch (key)
	{
	case GLUT_KEY_F1:
			Camera::rotate(0, ROTATE_CONST, 0);
		break;
	case GLUT_KEY_F2:
			Camera::rotate(0, -ROTATE_CONST, 0);
		break;
	case GLUT_KEY_F3:
			Camera::rotate(ROTATE_CONST, 0, 0);
		break;
	case GLUT_KEY_F4:
			Camera::rotate(-ROTATE_CONST, 0, 0);
		break;
	case GLUT_KEY_F5:
			Camera::rotate(0, 0, ROTATE_CONST);
		break;
	case GLUT_KEY_F6:
			Camera::rotate(0, 0, -ROTATE_CONST);
		break;

	case GLUT_KEY_F9:
			Camera::scale(SCALE_UP_CONST);
		break;
	case GLUT_KEY_F10:
			Camera::scale(SCAEL_DOWN_CONST);
		break;

	case GLUT_KEY_UP:
			Camera::translate('z', TRASNPARATE_CONST);
		break;
	case GLUT_KEY_DOWN:
			Camera::translate('z', -TRASNPARATE_CONST);
		break;
	case GLUT_KEY_RIGHT:
			Camera::translate('y', TRASNPARATE_CONST);
		break;
	case GLUT_KEY_LEFT:
			Camera::translate('y', -TRASNPARATE_CONST);
		break;

	case GLUT_KEY_END:
		exit(0);
		break;
	}

	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
}

void reshape(int width, int height)
{
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	int w = glutGet(GLUT_WINDOW_WIDTH);
	int h = glutGet(GLUT_WINDOW_HEIGHT);
	gluPerspective(60, w / h, 0.1, 100);
	Camera::init();
}

Browser::Browser(int *argcp, char **argv)
{
	glutInit(argcp, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
	glutInitWindowSize(640, 480);

	glutCreateWindow("Limur");
	//glutFullScreen();
	
}

Browser::~Browser()
{

}

void Browser::run()
{
	cube1 = std::shared_ptr<Cube>(new Cube(0.5f, 0.0f, 0.5f, 0.8f, 100, 150, 130));
	sphere1 = std::shared_ptr<Sphere>(new Sphere(0.25f, 0.0f, 0.f, 0.2f, 0, 0, 250));
	cylinder1 = std::shared_ptr<Cylinder>(new Cylinder(0.5f, 0.3f, 0.0f, -0.5f, -0.2f, 250, 230, 10));
	pyramid1 = std::shared_ptr<Pyramid>(new Pyramid(0.5, 0.5, 0.0f, 0.5f, -0.2f, 10, 240 ,70));
	cone1 = std::shared_ptr<Cone>(new Cone(0.5f, 0.25f, 0.0f, -0.5f, 0.8f, 230, 30, 70));
	parallelogramm1 = std::shared_ptr<Parallelogramm>(new Parallelogramm(0.3f, 1.0f, 0.5f, 0, 0.5, -0.9f, 40, 130, 200));
	prism1 = std::shared_ptr<Prism>(new Prism(0.5f, 0.5f, 0, -0.5, -0.9, 130, 20, 10));

	figureQueue.addFigure(cylinder1);
	figureQueue.addFigure(pyramid1);
	figureQueue.addFigure(cone1);
	figureQueue.addFigure(parallelogramm1);
	figureQueue.addFigure(prism1);
	figureQueue.addFigure(sphere1);
	figureQueue.addFigure(cube1);

	initializeSreen();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutSpecialFunc(eventsHandler);
	glutMainLoop();
}

void Browser::initializeSreen()
{
	glClearColor(0.3, 0.3, 0.3, 0.0);
	glOrtho(-1, 1, 1, -1, -1, 1);
	glEnable(GL_LIGHTING);
	glLightModelf(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
	glEnable(GL_NORMALIZE);
}
