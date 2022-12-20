#include "Organ.h"
#include <cstddef>

/*
void Organ::organList(const string& fileName, vector<IkiliAramaAgaci::Node*>& trees) {
    ifstream file(fileName);
    string line;
    int lineCount = 0;
    IkiliAramaAgaci::Node* root = NULL;
    IkiliAramaAgaci ikiliAramaAgaciNesnesi;
    while (getline(file, line))
    {
        stringstream lineStream(line);
        string data;
        vector<string> tokens;
		vector<int> dataVector;
        while (getline(lineStream, data, ' ')) 
        {
            tokens.push_back(data);
			dataVector.push_back(stoi(data));
        }

        // Take the middle data and insert it into the tree
        int middleIndex = tokens.size() / 2;
        int key = stoi(tokens[middleIndex]);
		root = ikiliAramaAgaciNesnesi.insert(root, key, dataVector);

        lineCount++;
        if (lineCount == 20)
        {
            trees.push_back(root);
            // We've reached 20 lines, so create a new tree
            lineCount = 0;
            root = NULL;
        }
    }
}

void Organ::organMakerxx(int lineNumber) {
    ifstream file("Veri.txt");
    string line;
    IkiliAramaAgaci::Node* root = nullptr;
    int startLine = (lineNumber - 1) * 20 + 1;
    int endLine = lineNumber * 20;
    for (int i = 1; i <= endLine; ++i) {
        std::getline(file, line);
        if (i >= startLine && i <= endLine && i % 20 == 0) {
            std::istringstream iss(line);
            int a, b, c;
            iss >> a >> b >> c;
            root = insert(root, b);
        }
    }
}

*/

void Organ::organMaker(int lineNumber) {
	ifstream file("output.txt");
	string line;
	Organ::root = nullptr;
	IkiliAramaAgaci ikiliAramaAgaciNesnesi;
	int startLine = (lineNumber - 1) * 20 + 1;
	int endLine = lineNumber * 20;
    for (int i = 0; i < startLine; i++)
    {
		getline(file, line);
    }
    
    for (int i = startLine; i <= endLine; i++)
    {
        stringstream lineStream(line);
        string data;
        vector<string> tokens;
        vector<int> doku;
        while (getline(lineStream, data, ' ')) 
        {
            tokens.push_back(data);
            doku.push_back(stoi(data));
        }
        
        // Take the middle data and insert it into the tree
        int middleIndex = tokens.size() / 2;
        int key = stoi(tokens[middleIndex]);
        root = ikiliAramaAgaciNesnesi.insert(root, key, doku);
        cout << "line:" << line<<"middle:" << key << endl;
        getline(file, line);
    }
	this->root = root;
}