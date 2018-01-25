/*****************************************
*
* Harjoitus 10 (Palautus vko 41)
*
* Tee ohjelma, joka laskee syötetyistä kokonaisluvuista sekä positiivisten
* että negatiivisten kokonaislukujen osuuden. Lukujen syöttä lopetetaan
* syöttämällä luku 0.
* 
* Tulostus:
* Syötit kokonaislukuja seuraavasti:
* ----------------------------------
* Negatiiviset 7 kpl 70.00%
* Positiiviset 3 kpl 30.00%
* Yhteensä 10 kpl 100.00%
*
* Versio: 1.0 Malmi
*Pvm: 30.09.2016
************************************************/
#include <iostream> 
using namespace std;
int main()
{
	int k, positiivi, negatiivi, summa;
	summa = 0;
	positiivi = 0;
	negatiivi = 0;
	k = 1;
	cout << "Kirjoita luvut:" << endl;
	while (k != 0)
	{
		cin >> k;
		if (k !=0) 
			summa = summa + 1;
		if (k > 0)
		{
			positiivi = positiivi + 1;
		}
		else
		{
			if (k < 0)
			{
				negatiivi = negatiivi + 1;
			}
		}
	}
	
	cout << "negatiiviset" << (100*negatiivi/summa) << endl << "positiiviset" << (100*positiivi/summa) << endl;
	return 0;
}