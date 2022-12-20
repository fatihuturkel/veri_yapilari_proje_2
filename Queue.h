#pragma once
#include <queue>
#include "Organ.h"
class Queue
{
public:
	queue <Organ::organ> q;
	
	void enqueue(Organ::organ q);
	void dequeue();
	Organ::organ front();
	int size();
	bool empty();

	/*
	Queue();
	~Queue();
	void push(Organ* organ);
	Organ* pop();
	bool isEmpty();*/
};

