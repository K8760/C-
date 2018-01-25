/*****************************************
*
* Harjoitus 22 (Palautus vko 49)
* Tee ohjelma, joka toimii henkilörekisterinä (max 10).
* Ohjelma antaa käyttäjälle seuraavan valikon:
*
* VALIKKO
* 0 Lopeta
* 1 Lisaa henkilo
* 2 Nayta kaikki henkilot

* Tallenna henkilöiden tiedot tietuetaulukkoon.
* Tallennettavia tietoja ovat
* etunimi (merkkijono)
* koulumatka (liukuluku)
* hatun koko (kokonaisluku)
*
* Toteuta ensin koko ohjelma pääohjelmana. 
*
* Tämän jälkeen lisää seuraavat aliohjelmat:
* a) int Valikko(void);
*
* b) void TulostaHenkilo(TIEDOT );
* c) void TulostaKaikkiHenkilot(TIEDOT [], int lkm);
* d) void LisaaHenkilo(TIEDOT [], int *lkm);
*
* Versio: 1.0 Malmi
* Pvm: 18.11.2016
************************************************/

#include <iostream>
using namespace std;
const int MAX = 10;
struct tiedot
{
	char etunimi[15];
	float koulumatka;
	int koko;
};
int Valikko(void);
void TulostaKaikkiHenkilot(tiedot h[], int maara);
void LisaaHenkilo(tiedot h[], int *maara);
void TulostaHenkilo(tiedot h);
int main()
{
	tiedot h[MAX] = { 0 };
	int maara = 0;
	int valinta = 1;
	while (valinta)
	{
		valinta = Valikko();
		switch (valinta)
		{
		case 0:	cout << "\nValittu lopetus";
			break;
		case 1:
		{
			LisaaHenkilo(h, &maara);
			TulostaHenkilo(h[maara-1]);
		}
		break;
		case 2:
		{
			cout << "Kaikkien henkilojen tiedot: " << endl;
			TulostaKaikkiHenkilot(h, maara);
		}
		break;
		default:	cout << "\nVirhe: ei ko. toimintoa!";
			break;
		}
	}
}

int Valikko(void)
{
	int valinta;
	cout << "Valikko: " << endl;
	cout << "0 Lopeta" << endl;
	cout << "1 Lisaa henkilo" << endl;
	cout << "2 Nayta kaikki henkilot" << endl;
	cout << "Kirjota sun valintasi" << endl;
	cin >> ws >> valinta;
	return valinta;
}

void TulostaHenkilo(tiedot h)
{
	cout << "Lisantynyt henkilo: " << endl;
	cout << h.etunimi << " " << h.koulumatka << " " << h.koko << endl;
}

void TulostaKaikkiHenkilot(tiedot h[], int maara)
{
	for (int i = 0; i < maara;i++)
		cout << "Henkilon " << i+1 << ": " << h[i].etunimi << " " << h[i].koulumatka << " " << h[i].koko << endl;
}

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