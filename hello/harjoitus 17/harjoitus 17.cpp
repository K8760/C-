/*****************************************
*
* Harjoitus 17 (Palautus vko 46)
*
* Muokkaa edellist‰ ohjelmaa siten, ett‰ edell‰ m‰‰ritelty‰ tietuetyyppi‰
* k‰ytet‰‰n my‰s kahden muun "koululaisen" tietojen tallentamiseen.
* N‰iden kahden muun koululaisen tiedot alustetaan ao. muuttujien
* m‰‰rittelyn yhteydess‰. Ainoastaan yhden koululaisen tiedot kysyt‰‰n
* k‰ytt‰j‰lt‰ edellisen teht‰v‰n tapaan.
*
* Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa
* suuruusj‰rjestyksess‰ (pienimm‰st‰ suurimpaan) n‰yt‰lle
*
* Versio: 1.0 Malmi
* Pvm: 28.10.2016
************************************************/

#include <iostream>
using namespace std;
int main()
{
	struct henk
	{
		char sukunimi[10];
		char etunimi[15];
		char osoite[25];
		int postinumero;
		int kengannumero;
		float koulumatka;
	};
	henk h[3], tmp;
	for (int i=0; i<=2; i++)
	{ 
		cout << "Anna " << i + 1 << "kouluaisen tiedot:" << endl;
		cout << "Anna etunimet: " << endl;
		cin.get(h[i].etunimi, 15);
		cin.get();
		cout << "Anna sukunimi: " << endl;
		cin.get(h[i].sukunimi, 10);
		cin.get();
		cout << "Anna koulumatka: " << endl;
		cin >> h[i].koulumatka;
		cin.get();
		cout << "Anna osoite: " << endl;
		cin.get(h[i].osoite, 25);
		cin.get();
		cout << "Anna postinumero: " << endl;
		cin >> h[i].postinumero;
		cin.get();
		cout << "Anna kengannumero: " << endl;
		cin >> h[i].kengannumero;
		cin.get();
	}
	cout << endl;
	for (int i = 0; i <= 1; i++)
	{
		for (int j = i + 1; j <= 2; j++)
		{
			if (h[j].koulumatka < h[i].koulumatka)
			{
				tmp = h[i];
				h[i] = h[j];
				h[j] = tmp;
			}
		}
	}
	for (int i = 0; i <= 2; i++)
	{
		cout << h[i].etunimi << ' ' << h[i].sukunimi << endl << h[i].koulumatka << endl << h[i].osoite << endl << h[i].postinumero << endl << h[i].kengannumero << endl;
	}
}