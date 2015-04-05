#include "figure.h"
#include <vector>

class FigureQueue
{
	std::vector<Figure> figureVector;

public:
	FigureQueue();
	~FigureQueue();

	void addFigure(Figure figure);
	Figure getFigure();
	std::vector<Figure> getQueue();
};