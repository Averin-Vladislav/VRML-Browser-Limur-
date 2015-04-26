#pragma once
#include <fstream>
#include "figureQueue.h"


class Parser {
public:
	Parser(std::ifstream& _stream);
	
private:
	FigureQueue& fQueue;
	std::ifstream& stream;
};