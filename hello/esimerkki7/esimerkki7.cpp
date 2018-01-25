//esimerki 7-6
#include <iostream> 
using namespace std;
int main()
{
	int valinta;
	cout << "VALIKKO";
	cout << "\n\n1 Uusi tiedosto ";
	cout << "\n2 Avaa tiedosto";
	cout << "\n3 Talleta tiedosto";
	cout << "\n0 Lopeta \nValintasi: ";
	cin >> ws >> valinta;
	switch (valinta)
	{
	case 0:	cout << "\nValittu lopetus";
		break;
	case 1: cout << "\nValittu uusi tiedosto";
		break;
	case 2:	cout << "\nValittu tiedoston avaus";
		break;
	case 3:	cout << "\nValittu tiedoston talletus";
		break;
	default:	cout << "\nVirhe: ei ko. toimintoa!";
		break;
	}
	return 0;
}