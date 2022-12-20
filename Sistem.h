#pragma once
#include "organ.h"
class Sistem
{
public:
	Sistem();
	vector<vector<IkiliAramaAgaci::Node*>> allVectors;
	vector<vector<IkiliAramaAgaci::Node*>> splitIntoVectors(vector<IkiliAramaAgaci::Node*> originalVector);
};

