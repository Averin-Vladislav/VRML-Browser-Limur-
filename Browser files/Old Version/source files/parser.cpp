#include "parser.h"

using namespace std;



float Parser::height = 0;
float Parser::width = 0;
float Parser::depth = 0;
GLubyte Parser::colorR = 0;
GLubyte Parser::colorG = 0;
GLubyte Parser::colorB = 0;
float Parser::posX = 0;
float Parser::posY = 0;
float Parser::posZ = 0;

//int a = 2;

/*Parser::Parser() : queue(a)
{
FigureQueue& que = queue; FigureQueue::getQueue()
map.insert({ std::string("width"), [&que]() -> void { } });
map.insert({ std::string("height"), [&]() -> void {HANDLE hDTH} });
}*/

Parser::Parser()
{

}

Parser::~Parser()
{

}

void Parser::run()
{
	ifstream file("sample.txt");

	string line;
	string token1, token2, token3;
	istringstream iss(line);
	getline(file, line);	
	int flag = 1;

	if (line == "#VRML V1.0 ascii")
	{
		/*while (1codition) {
		getline(file, line);
		std::function<void()> function = map.at(line);
		if (!function) {
		continue;
		}
		function();
		}*/
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
					height = atof(token1.c_str());
				}
				if (result == "width")
				{
					getline(iss, token1);
					cout << "width = " << token1 << endl;
					width = atof(token1.c_str());
				}
				if (result == "depth")
				{
					getline(iss, token1);
					cout << "depth = " << token1 << endl;
					depth = atof(token1.c_str());
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
							colorR = atof(token2.c_str());
							flag++;
							break;
						case 2:
							cout << "colorG = " << token2 << endl;
							colorG = atof(token2.c_str());
							flag++;
							break;
						case 3:
							cout << "colorB = " << token2 << endl;
							colorB = atof(token2.c_str());
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
							posX = atof(token3.c_str());
							flag++;
							break;
						case 2:
							cout << "posY = " << token3 << endl;
							posY = atof(token3.c_str());
							flag++;
							break;
						case 3:
							cout << "posZ = " << token3 << endl;
							posZ = atof(token3.c_str());
							flag++;
							break;
						default:
							cout << "Warning: Wrong number of parameters in the command 'translation'" << endl;
						}
					}
				}
			}
		}
	}
	else
	{
		cout << "Error: Missing VRML header" << endl;
		getch();
		return;
	}

	cout << "Press any key to view..." << endl;
	getch();
	return;
}

float Parser::getHeight()
{
	return height;
}

float Parser::getWidth()
{
	return width;
}

float Parser::getDepth()
{
	return depth;
}

GLubyte Parser::getColorR()
{
	return colorR;
}

GLubyte Parser::getColorG()
{
	return colorG;
}

GLubyte Parser::getColorB()
{
	return colorB;
}

float Parser::getPosX()
{
	return posX;
}

float Parser::getPosY()
{
	return posY;
}

float Parser::getPosZ()
{
	return posZ;
}