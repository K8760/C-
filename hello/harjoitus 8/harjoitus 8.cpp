/*****************************************
*
* Harjoitus 8 (palautus vko 41)
* Tee ohjelma, joka tulostaa annetut kolme lukua suuruus -
* j�rjestyksess�(pienimm�st� suurimpaan) n�yt�lle
* (katso harj. 1 suunnitelma)
* a) k�yt� kokonaislukuja
* b) k�yt� liukulukuja(= reaalilukuja)
*
* Versio: 1.0 Malmi
*Pvm: 30.09.2016
************************************************/
#include <iostream> 
using namespace std;
int main()
{
	int l1, l2, l3;
	cout << "Sy�t� ensimm�inen luku:" << endl;
	cin >> l1;
	cout << "Sy�t� toinen luku:" << endl;
	cin >> l2;
	cout << "Sy�t� kolmas luku:" << endl;
	cin >> l3;
	if (l1 < l2)
	{
		if (l1 < l3)
		{
			if (l2 < l3)
			{
				cout << l1 << l2 << l3 << endl;
			}
			else
			{
				cout << l1 << l3 << l2 << endl;
			}
		}
		else
		{
			cout << l3 << l1 << l2;
		}
	}
	else
	{
		if (l2 < l3)
		{
			if (l1 < l3)
			{
				cout << l2 << l1 << l3;
			}
			else
			{
				cout << l2 << l3 << l1;
			} 
		}
		else
		{
			cout << l3 << l2 << l1;
		}
	}
}