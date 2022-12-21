#include "Organ.h"

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
        getline(file, line);
    }
	this->root = root;
}

/*Organ::Organ(int lineNumber) {
	organMaker(lineNumber);
}*/

void Organ::organMakerNew() {
    ifstream file("output.txt");
    string line;
    int lineCount = 0;
    organ root = NULL;
    while (getline(file, line))
    {
        stringstream lineStream(line);
        string data;
        vector<string> tokens;
        vector<int> doku;
        while (getline(lineStream, data, ' ')) {
			tokens.push_back(data);
			doku.push_back(stoi(data));
        }

        // Take the middle data and insert it into the tree
        int middleIndex = tokens.size() / 2;
        int dataInt = stoi(tokens[middleIndex]);
        
		root = IkiliAramaAgaci::insert(root, dataInt, doku);

        lineCount++;
        
        if (lineCount == 20)
        {
            // We've reached 20 lines, so push the root and create a new tree
			this->organs.push_back(root);
            lineCount = 0;
            root = NULL;
        }
    }
}