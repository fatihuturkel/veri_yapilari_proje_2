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
	vector<organ> organs;  //new
	void organMakerNew();  //new
	//Organ(int lineNumber);
};

