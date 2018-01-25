#include "oma.h"
void LisaaHenkilo(tiedot h[], int *maara)
{

	cout << "Kirjoita henkilon tiedot: " << endl;
	cout << "Kirjoita etunimi: " << endl;
	cin.get();
	cin.get(h[*maara].etunimi, 15);
	cin.get();
	cout << "Kirjoita koulumatka : " << endl;
	cin >> h[*maara].koulumatka;
	cin.get();
	cout << "Kirjoita hatun koko: " << endl;
	cin >> h[*maara].koko;
	cin.get();
	(*maara)++;
}