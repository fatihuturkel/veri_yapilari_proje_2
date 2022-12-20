/**
* @file veri_yapilari_proje_2
* @description Programýnýzýn açýklamasý ne yaptýðýna dair.
* @course Dersi aldýðýnýz eðitim türü ve grup
* @assignment Kaçýncý ödev olduðu
* @date Kodu oluþturduðunuz Tarih
* @author Gruptakilerin yazar adlarý ve mail adresleri
*/

#include "File.h"
#include "Organizma.h"
using namespace std;


int main() {
    File::processFile("Veri.txt", "output.txt");
 
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
    cout<<" cikarma islemi sonrasi:"<<sistem.q.front()->key;
    system("cls");
    
    cout << "hey";
    Organizma organizma;
    cout << "hey2";
    
    for (int i = 0; i < organizma.v.size(); i++)
    {
        for (int j = 0; j < organizma.v[i].q.size(); j++)
        {            
            if (IkiliAramaAgaci::isAVL(organizma.v[i].q.front())) {
                cout << " ";
            }
            else {
                cout << "#";
            }
            organizma.v[i].q.dequeue();
        }
        cout << endl;
    }
    
    return 0;
}
