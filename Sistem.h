#pragma once
#include "Organ.h"
#include "Queue.h"
class Sistem
{
public:
	typedef vector<Organ::organ> sistem;
	vector<sistem> sistems;  //new
	void vectorMaker(int sistemIndex);
	void vectorMakerNew(vector<Organ::organ> organs);  //new
};

