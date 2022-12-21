/**
* @file veri_yapilari_proje_2
* @description veri.txt'den okunan veriler istenilen a�a� islemleri do�rulsunda ekrana c�kt� verir.
* @course 2. ��retim B
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
