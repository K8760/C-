/*****************************************
*
* Harjoitus 20 (Palautus vko 47)
*
*
*
* Kuten harjoitus 19, mutta toteuta kayttaen taulukkoa ja osoitinta
* tiedon käsittelyyn
*
* Versio: 1.0 Malmi
* Pvm: 11.11.2016
************************************************/
#include <iostream>
using namespace std;
int main()
{
	int k[5] = { 0,0,0,0,0 };
	int *osoitin;
	osoitin = &k[0];
	int l = 1;
	while (l >= 0)
	{
		int summ = 0;
		cout << "Kirjoita nopeus:" << endl;
		cin >> l;
		if (l >= 0)
		{
			for (int i = 0;i < 4;i++)
				osoitin[i] = osoitin[i + 1];
			osoitin[4] = l;
			for (int i = 0;i < 5;i++)
				summ = summ + osoitin[i];
			for (int i = 0;i < 5;i++)
				cout << osoitin[i] << " ";
			cout << endl << (float)summ << endl;
		}
	}
	return 0;
}