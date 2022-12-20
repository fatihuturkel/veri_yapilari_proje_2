#pragma once
#include <fstream>
#include <sstream>
#include "Doku.h"
#include "IkiliAramaAgaci.h"

class Organ
{
public:
	IkiliAramaAgaci::Node* root;
	void organMaker(int lineNumber);
    //void organList(const string& fileName, vector<IkiliAramaAgaci::Node*>& trees);
    //vector<IkiliAramaAgaci::Node*> parse_file(string file_name);
    //void print_tree_data(IkiliAramaAgaci::Node* root);
};

