#pragma once
#include "organ.h"
class Sistem
{
public:
	vector<vector<IkiliAramaAgaci::Node*>> allVectors;
	vector<vector<IkiliAramaAgaci::Node*>> splitIntoVectors(vector<IkiliAramaAgaci::Node*> originalVector);
};

