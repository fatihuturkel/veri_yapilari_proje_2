#include "Sistem.h"

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
