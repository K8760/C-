#include "oma.h"
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
