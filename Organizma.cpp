#include "Organizma.h"

Organizma::Organizma()
{
	
	for (int i = 1; i <= 16; i++)
	{
		Sistem sistem(i);
		v.push_back(sistem);
	}
}