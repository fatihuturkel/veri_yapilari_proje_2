#include "Organizma.h"

Organizma::Organizma(organizma sistems)
{
	for (int i = 0; i < sistems.size(); i++)
	{
		for (int j = 0; j < sistems[i].size(); j++)
		{
			if (IkiliAramaAgaci::isAVL(sistems[i][j])){
				cout << " ";
			}
			else {
				cout << "#";
			}
		}
		cout << endl;
	}
}