/*****************************************
*
* Harjoitus 9 (Palautus vko 41)
* Tee ohjelma, joka toimii laskimena.
* K�ytt�j�lt� kysyt��n kaksi kokonaislukua,
* jonka j�lkeen ohjelma antaa valikon
* laskutoimituksista. Valikko nayttaa
* seuraavalta:
*
* VALIKKO
* 1. Summa
* 2. Erotus
* 3. Tulo
* 4. Osamaara
* 5. Jakojaannos
*
* Lopuksi ohjelma tulostaa valitun tuloksen nayt�lle.
*
* Versio: 1.0 Malmi
*Pvm: 30.09.2016
************************************************/
#include <iostream> 
using namespace std;
int main()
{
	int l1, l2;
	cout << "Sy�t� ensimm�inen luku:" << endl;
	cin >> l1;
	cout << "Sy�t� toinen luku:" << endl;
	cin >> l2;
	cout << "1. Summa: " << l1 + l2 << endl;
	cout << "2. Erotus: " << l1 - l2 << endl;
	cout << "3. Tulo: " << l1 * l2 << endl;
	cout << "4. Osamaara: " << (float)l1 / l2 << endl;
	cout << "5. Jakojaannos: " << l1 % l2 << endl;
}