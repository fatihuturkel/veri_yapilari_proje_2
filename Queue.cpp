/**
* @file veri_yapilari_proje_2
* @description veri.txt'den okunan veriler istenilen a�a� islemleri do�rulsunda ekrana c�kt� verir.
* @course 2. ��retim B
* @assignment 2
* @date 22.12.2022
* @author Fatih Uyvar Turkel fatihuyvar@gmail.com
*/
#include "Queue.h"

void Queue::enqueue(Organ::organ organ)
{
	q.push(organ);
}

void Queue::dequeue()
{
    if (!q.empty())
    {
        q.pop();
    }
}

Organ::organ Queue::front()
{
	if (!q.empty())
	{
		return q.front();
	}
	return nullptr;
}

int Queue::size()
{
	return q.size();
}

bool Queue::empty()
{
	return q.empty();
}
