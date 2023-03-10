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
	
    static int getHeight(Node* node);
    static bool isAVL(Node* node);
	
	static Node* newNode(int key, vector<int> Doku);
	static Node* insert(Node* node, int key, vector<int> Doku);

	static void postOrder(Node* node);
	static void inOrder(Node* node);
	static vector<int> postOrderReader(Node* node);
};

