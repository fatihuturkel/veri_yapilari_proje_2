#include "Mutasyon.h"

void Mutasyon::mutationCheck(Organizma::organizma sistems)
{
	for (int i = 0; i < sistems.size(); i++)
	{
		for (int j = 0; j < sistems[i].size(); j++)
		{
			if (sistems[i][j]->key % 50 == 0 ) 
			{
				dokuCiftCheck(sistems[i][j]->doku);
				IkiliAramaAgaci::postOrderReader(sistems[i][j]);
			}
		}
		cout << endl;
	}
}

void Mutasyon::dokuCiftCheck(vector<int> doku)
{
	for (int i = 0; i < doku.size(); i++)
	{
		if (doku[i] % 2 == 0)
		{
			doku[i] = doku[i] / 2;
		}
	}
}

