#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class IkiliAramaAgaci
{
public:
	struct Node
	{
		int key;
		vector<int> doku;
		Node* left;
		Node* right;
	};
	
    int getHeight(Node* node);
    bool isAVL(Node* node);
	
	Node* newNode(int key, vector<int> Doku);
	Node* insert(Node* node, int key, vector<int> Doku);

	void insertHelper(Node* nood, int key, vector<int> Doku);
	void insert(int val);
	
	
	void postOrder(Node* node);
	void inOrder(Node* node);
};

