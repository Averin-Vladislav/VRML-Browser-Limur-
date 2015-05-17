#include "parser.h"

using namespace std;



Parser::Parser()
{

}

Parser::~Parser()
{

}

void Parser::run(int *argcp, char **argv)
{
	/*cube = std::shared_ptr<Cube>(new Cube());
	sphere = std::shared_ptr<Sphere>(new Sphere());
	cylinder = std::shared_ptr<Cylinder>(new Cylinder());
	pyramid = std::shared_ptr<Pyramid>(new Pyramid());
	cone = std::shared_ptr<Cone>(new Cone());
	parallelepiped = std::shared_ptr<Parallelepiped>(new Parallelepiped());
	prism = std::shared_ptr<Prism>(new Prism());

	figureQueue.addFigure(cube);
	figureQueue.addFigure(parallelepiped);
	figureQueue.addFigure(sphere);
	figureQueue.addFigure(cylinder);
	figureQueue.addFigure(pyramid);
	figureQueue.addFigure(cone);
	figureQueue.addFigure(prism);*/

	/*cube = std::shared_ptr<Cube>(new Cube());
	cube->setSideSize(0.5f);
	cube->setColorB(150);
	cube->setColorG(200);
	cube->setColorR(30);
	cube->setPositionZ(-0.5f);
	figureQueue.addFigure(cube);

	sphere = std::shared_ptr<Sphere>(new Sphere());
	sphere->setPositionZ(0.5f);
	figureQueue.addFigure(sphere);

	sphere = std::shared_ptr<Sphere>(new Sphere());
	sphere->setPositionY(0.5f);
	figureQueue.addFigure(sphere);

	prism = std::shared_ptr<Prism>(new Prism());
	prism->setColorR(200);
	prism->setPositionY(-0.5f);
	figureQueue.addFigure(prism);*/


	parallelepiped = std::shared_ptr<Parallelepiped>(new Parallelepiped());

	//ifstream file(argv[*argcp - 1]);
	//std::cout << "File path: " << argv[*argcp - 1] << std::endl;

	ifstream file("sample.vrml");

	string line;
	string token1, token2, token3;
	istringstream iss(line);
	getline(file, line);	
	int flag = 1;

	if (line == "#VRML V1.0 ascii")
	{
		while (getline(file, line))
		{
			istringstream iss(line);
			string result;

			if (getline(iss, result, ' '))
			{
				if (result == "height")
				{
					getline(iss, token1);
					cout << "height = " << token1 << endl;
					parallelepiped->setHeight(atof(token1.c_str()));
				}
				if (result == "width")
				{
					getline(iss, token1);
					cout << "width = " << token1 << endl;
					parallelepiped->setWidth(atof(token1.c_str()));
				}
				if (result == "depth")
				{
					getline(iss, token1);
					cout << "depth = " << token1 << endl;
					parallelepiped->setDepth(atof(token1.c_str()));
				}
				if (result == "diffuseColor")
				{
					int flag = 1;
					while (getline(iss, token2, ' '))
					{
						switch(flag)
						{
						case 1:
							cout << "colorR = " << token2 << endl;
							parallelepiped->setColorR(atof(token2.c_str()));
							flag++;
							break;
						case 2:
							cout << "colorG = " << token2 << endl;
							parallelepiped->setColorG(atof(token2.c_str()));
							flag++;
							break;
						case 3:
							cout << "colorB = " << token2 << endl;
							parallelepiped->setColorB(atof(token2.c_str()));
							flag++;
							break;
						default:
							cout << "Warning: Wrong number of parameters in the command 'diffuseColor'" << endl;
						}
					}
				}
				if (result == "translation")
				{
					while (getline(iss, token3, ' '))
					{
						switch (flag)
						{
						case 1:
							cout << "posX = " << token3 << endl;
							parallelepiped->setPositionX(atof(token3.c_str()));
							flag++;
							break;
						case 2:
							cout << "posY = " << token3 << endl;
							parallelepiped->setPositionY(atof(token3.c_str()));
							flag++;
							break;
						case 3:
							cout << "posZ = " << token3 << endl;
							parallelepiped->setPositionZ(atof(token3.c_str()));
							flag++;
							break;
						default:
							cout << "Warning: Wrong number of parameters in the command 'translation'" << endl;
						}
					}
				}
			}
			figureQueue.addFigure(parallelepiped);
		}
	}
	else
	{
		cout << "Error: Missing VRML header" << endl;
		_getch();
		return;
	}

	cout << "Press any key to view..." << endl;
	_getch();

	return;
}

