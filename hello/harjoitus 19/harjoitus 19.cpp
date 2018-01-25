/*****************************************
*
* Harjoitus 19 (Palautus vko 47)
* Tee ohjelma, joka toimii auton nopeusmittarina.
* Periaate on seuraava: Näppäimistä toimii
* nopeusanturina ja näyttä mittarin näyttänä.
* Nopeusmittari laskee viiden viimeisen nopeuden
* keskiarvon ja tulostaa sen nykyisenä nopeutena
* näytälle. Negatiivinen nopeus lopettaa ohjelman.
* Toiminta on siis seuraava:
* Ohjelman kaynnistyksessa mittari näyttää nolla
* 0
* 0
* 0
* 0
* 0 (alkutila) nopeus = 0 km/h
* Anna nopeus: 10 
* => 2 km/h
* Anna nopeus: 20
* => 6 km/h
* Anna nopeus: 30
* => 12 km/h
* Anna nopeus: 40
* => 20 km/h
* Anna nopeus: 50
* => 30 km/h
* Anna nopeus: 50
* => 38 km/h
* Anna nopeus: 50
* => 44 km/h
* Anna nopeus: 50
* => 48 km/h
* Anna nopeus: 50
* => 50 km/h
* Anna nopeus: 50
* => 50 km/h
* Anna nopeus: -5
* => loppu
*
*                                                      Käyttäjän syöte ohjelmalle lihavoitu ja kallistettu.
*
* Toteuta kayttaen taulukkoa.
*
* Versio: 1.0 Malmi
* Pvm: 11.11.2016
************************************************/

#include <iostream>
using namespace std;
int main()
{
	int k[5] = { 0,0,0,0,0 };
	int l = 1;
	while (l >= 0)
	{
		int summ = 0;
		cout << "Kirjoita nopeus:" << endl;
		cin >> l;
		if (l>=0)
		{ 
			for (int i = 0;i < 4;i++)
			{
				k[i] = k[i + 1];
			}
			k[4] = l;
			for (int i = 0;i < 5;i++)
				summ = summ + k[i];
			for (int i = 0;i < 5;i++)
				cout << k[i] << " ";
			cout << endl << (float)summ/5 << endl;
		}
	}
	return 0;
}