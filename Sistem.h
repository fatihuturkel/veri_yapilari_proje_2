#pragma once
#include "Organ.h"
#include "Queue.h"
class Sistem
{
public:
	//Queue q;
	//Sistem(int sistemIndex);
	vector<vector<Organ::organ>> sistems;  //new
	vector <Organ::organ> sistem;
	void vectorMaker(int sistemIndex);
	void vectorMakerNew(vector<Organ::organ> organs);  //new
	//Sistem(vector<Organ::organ> organs);
};

