/**
* @file veri_yapilari_proje_2
* @description Programýnýzýn açýklamasý ne yaptýðýna dair.
* @course Dersi aldýðýnýz eðitim türü ve grup
* @assignment Kaçýncý ödev olduðu
* @date Kodu oluþturduðunuz Tarih
* @author Gruptakilerin yazar adlarý ve mail adresleri
*/

#include "radix.h"
#include "sistem.h"
#include "ikiliAramaAgaci.h"
#include "Queue.h"
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
    cout << "File is complete."<<endl;

	Organ organ = Organ(1);
    Organ organ2 = Organ(2);
    Queue q;

    q.enqueue(organ.root);
    q.enqueue(organ2.root);

    cout << "Front element is: " << q.front()->key << endl;
    cout << "Queue size is: " << q.size() << endl;

    q.dequeue();

    cout << "Front element is: " << q.front()->key << endl;
    cout << "Queue size is: " << q.size() << endl;
    
    IkiliAramaAgaci::inOrder(organ2.root);
    cout << endl;
    cout << organ.root->key<<endl;

    Sistem sistem = Sistem(1);
    cout << "cikarma islemi oncesi data:" << sistem.q.front()->key << endl;
    sistem.q.dequeue();
    cout<<" cikarma islemi sonrasý:"<<sistem.q.front()->key;

    return 0;
}
