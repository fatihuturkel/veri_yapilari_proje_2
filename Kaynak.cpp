/**
* @file veri_yapilari_proje_2
* @description veri.txt'den okunan veriler istenilen aðaç islemleri doðrulsunda ekrana cýktý verir.
* @course 2. Öðretim B
* @assignment 2
* @date 22.12.2022
* @author Fatih Uyvar Turkel fatihuyvar@gmail.com
*/

#include "File.h"
#include "Organizma.h"
#include "Mutasyon.h"
using namespace std;


int main() {
    File::processFile("Veri.txt", "output.txt");
	char input;
	
    Organ organNesnesi;
    organNesnesi.organMakerNew();
	Sistem sistemNesnesi;
	sistemNesnesi.vectorMakerNew(organNesnesi.organs);
	Organizma organizmaNesnesi(sistemNesnesi.sistems);
	Mutasyon mutasyonNesnesi;
	cin >> input;
	if (input==' ')
	{
		mutasyonNesnesi.mutationCheck(sistemNesnesi.sistems);
	}
	organizmaNesnesi;
    return 0;
}
