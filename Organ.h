#pragma once
#include <fstream>
#include <sstream>
#include "Doku.h"
#include "IkiliAramaAgaci.h"

class Organ
{
public:
	IkiliAramaAgaci::Node* root;
	void organMaker(int lineNumber);
	Organ(int lineNumber);
};

