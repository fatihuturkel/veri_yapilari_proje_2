#pragma once
#include "Organizma.h"
class Mutasyon
{
public:
	void mutationCheck(Organizma::organizma sistems);
	void dokuCiftCheck(vector<int> doku);
	vector<Organ::organ> mutasyonaUgrayanOrganlar;
};

