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
