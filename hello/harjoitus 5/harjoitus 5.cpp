/***********************************************
* Teht‰v‰: Harjoitus 5 (palautus vko 40)
* Tekija: Ekaterina Piispanen
* Kuvaus:
*		Kirjoita ohjelma, joka pyyt‰‰ k‰ytt‰j‰lt‰ kaksi kokonaislukua.
*
*		Ohjelma tulostaa tekstin BINGO, mik‰li luvut ovat samoja.
*
*		Muussa tapauksessa ohjelma tulostaa tekstin BONGO.
* Versio: 1.0 Malmi
*Pvm: 23.09.2016
************************************************/
#include <iostream> 
using namespace std;
int main()
{
	int luku1, luku2;
	cout << "Anna kokonaisluku" << endl;
	cin >> luku1;
	cout << "Anna toinen kokonaisluku" << endl;
	cin >> luku2;
	if (luku1 == luku2)
		cout << "BINGO" << endl;
	else
		cout << "BONGO" << endl;
}