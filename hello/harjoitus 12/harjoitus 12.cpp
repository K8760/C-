/*****************************************
*
* Harjoitus 12 (Palautus vko 43)
* 
* Tee ohjelma, joka kysyy käyttäjältä kokonaisluvun väliltä 1-9 ja
* tulostaa vastauksen perusteella seuraavan kuvion (jos vastaus on 6):
* 
* 1
* 22
* 333
* 4444
* 55555
* 666666
* 
* Jokainen numero tulee tulostaa toistorakenten avulla erikseen lauseella:
* cout << rivinro;
*
* Versio: 1.0 Malmi
*Pvm: 07.10.2016
************************************************/

#include <iostream>;
using namespace std;
int main()
{
	int k, l, m;
	cout << "Kirjota luku 1-9:" << endl;
	cin >> k;
	for (l = 1; l <= k; l++)
	{
		for (m = 0; m < l; m++)
		{
			cout << l;
		}
		cout << endl;
	}
	return 0;
}