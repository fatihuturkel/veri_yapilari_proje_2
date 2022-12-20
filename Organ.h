#pragma once
#include <fstream>
#include <sstream>
#include <cstddef>
#include "Doku.h"
#include "IkiliAramaAgaci.h"

class Organ
{
public:
	typedef IkiliAramaAgaci::Node* organ;
	organ root;
	void organMaker(int lineNumber);
	Organ(int lineNumber);
};

