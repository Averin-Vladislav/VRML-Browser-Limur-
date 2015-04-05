#include "figureQueue.h"

FigureQueue::FigureQueue()
{

}

FigureQueue::~FigureQueue()
{

}

void FigureQueue::addFigure(Figure figure)
{
	figureVector.push_back(figure);
}

Figure FigureQueue::getFigure()
{
	return figureVector[figureVector.size];
}

std::vector<Figure> FigureQueue::getQueue()
{
	return figureVector;
}