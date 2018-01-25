/*****************************************
*
* Harjoitus 18 (Palautus vko 46)
* Tee ohjelma, joka kysyy viiden koiran nimet ja i�t.
* Tiedot tallennetaan tietuetaulukkoon.
* a) j�rjest� tiedot ik� -kent�n mukaan suuruusj�rjestykseen
* (pienimm�st� suurimpaan). Ohjelma tulostaa lopuksi
* jarjestetyn taulukon n�yt�lle.
* b) j�rjest� tiedot nimi -kent�n mukaan aakkosj�rjestyksess�
* Ohjelma tulostaa lopuksi jarjestetyn taulukon n�ytolle.
*
* Lajittelu tulee toteuttaa siten, ett� se toimisi samoin
* my�s 50 tai 5000 koiran tapauksssa.
*
* Versio: 1.0 Malmi
* Pvm: 28.10.2016
************************************************/

#include <iostream>
using namespace std;
int main()
{
	struct koira
	{
		char nimi[10];
		int ika;
	};
	const int max = 5;
	char tmp1[10];
	koira k[max], tmp;
	for (int i = 0; i <= max - 1; i++)
	{
		cout << "Anna " << i + 1 << " koiran tiedot:" << endl;
		cout << "Anna nimi:" << endl;
		cin.get(k[i].nimi, 10);
		cin.get();
		cout << "Anna ika:" << endl;
		cin >> k[i].ika;
		cin.get();
	}

	//kohta a
	for (int i = 0; i <= max-2; i++)
	{
		for (int j = i + 1; j <= max-1; j++)
		{
			if (k[j].ika < k[i].ika)
			{
				tmp = k[i];
				k[i] = k[j];
				k[j] = tmp;
			}
		}
	}
	cout << "Kohta a:" << endl;
	for (int i = 0; i <= max-1; i++)
	{
		cout << k[i].nimi << ' ' << k[i].ika << endl;
	}
	
	//kohta b
	for (int i = 0; i <= max - 2; i++)
	{
		for (int j = i + 1; j <= max - 1; j++)
		{
			if (strcmp(k[j].nimi, k[i].nimi) < 0)
			{
				tmp = k[i];
				k[i] = k[j];
				k[j] = tmp;
			}
		}
	}
	cout << "Kohta b:" << endl;
	for (int i = 0; i <= max - 1; i++)
	{
		cout << k[i].nimi << ' ' << k[i].ika << endl;
	}
}
