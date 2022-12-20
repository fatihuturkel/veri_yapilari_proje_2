/**
* @file veri_yapilari_proje_2
* @description Programýnýzýn açýklamasý ne yaptýðýna dair.
* @course Dersi aldýðýnýz eðitim türü ve grup
* @assignment Kaçýncý ödev olduðu
* @date Kodu oluþturduðunuz Tarih
* @author Gruptakilerin yazar adlarý ve mail adresleri
*/

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstddef>
#include <sstream>

#include <iomanip>
#include "radix.h"
#include "sistem.h"
#include "ikiliAramaAgaci.h"
using namespace std;

Radix radix;

int main() {
    // Open the input and output files
    ifstream infile("Veri.txt");
    ofstream outfile("output.txt");

    // Read each line from the input file
    string line;
    while (getline(infile, line)) {
        // Split the line into separate data elements
        vector<int> data;
        string element;
        for (char c : line) {
            if (c == ' ') {
                data.push_back(stoi(element));
                element.clear();
            }
            else {
                element += c;
            }
        }
        if (!element.empty()) {
            data.push_back(stoi(element));
        }

        // Sort the data using radix sort
        radix.radix_sort(data);

        // Write the sorted data to the output file
        for (int x : data) {
            outfile << x << ' ';
        }
        outfile << '\n';
    }

    // Close the input and output files
    infile.close();
    outfile.close();
    cout << "File is complete.";

    Organ organ;
	organ.organMaker(1);
    
    IkiliAramaAgaci ikiliAramaAgaciNesnesi;
    ikiliAramaAgaciNesnesi.inOrder(organ.root);
	//IkiliAramaAgaci::postOrder(organ.root);
    
    
    return 0;
}

/*

vector<vector<node*>> allVectors;
int i = 0;
while (i < originalVector.size()) {
  vector<node*> newVector;
  for (int j = 0; j < 100 && i < originalVector.size(); j++, i++) {
    newVector.push_back(originalVector[i]);
  }
  allVectors.push_back(newVector);
}


*/

