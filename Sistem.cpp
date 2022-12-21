#include "Sistem.h"
/*
Sistem::Sistem(int sistemIndex)
{
	int startOrgan = (sistemIndex - 1) * 100 + 1;
	int endOrgan = sistemIndex * 100;
	for (int i = startOrgan; i <= endOrgan; i++)
	{
			Organ organ(i);
			q.enqueue(organ.root);
	}
} 


void Sistem::vectorMaker(int sistemIndex)
{
	int startOrgan = (sistemIndex - 1) * 100 + 1;
	int endOrgan = sistemIndex * 100;
	for (int i = startOrgan; i <= endOrgan; i++)
	{
		Organ organ(i);
		sistem.push_back(organ.root);
	}
}
*/

void Sistem::vectorMakerNew(vector<Organ::organ> organs){
	for (int i = 0; i < organs.size();) {
		vector<Organ::organ> temp;
		for (int j = 0; j < 100 && i < organs.size(); j++, i++) {
			temp.push_back(organs[i]);
		}
		this->sistems.push_back(temp);
	}
}
