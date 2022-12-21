#include "Sistem.h"

void Sistem::vectorMakerNew(vector<Organ::organ> organs){
	for (int i = 0; i < organs.size();) {
		vector<Organ::organ> temp;
		for (int j = 0; j < 100 && i < organs.size(); j++, i++) {
			temp.push_back(organs[i]);
		}
		this->sistems.push_back(temp);
	}
}
