/*****************************************
*
* Harjoitus 11 (Palautus vko 41)
*
* Harjoitus 11 (Palautus vko 43)
* Muuta tehtävän 9 laskin-ohjelmaa niin, etta valikko nayttaa
* seuraavalta:
*
* VALIKKO
* 0. Lopetus
* 1. Summa
* 2. Erotus
* 3. Tulo
* 4. Osamaara
* 5. Jakojaannos
* 6. Syota uudet luvut laskemista varten

Laskimella on siis mahdollista käsitellä
useita lukupareja käyttäjän toiveiden
mukaisesti. Mita tapahtuu, jos luku2 on 0?
HUOM! goto -lauseen käyttä on KIELLETTY!!!!
*
* Versio: 1.0 Malmi
*Pvm: 07.10.2016
************************************************/
#include <iostream> 
using namespace std;
int main()
{
	int valinta=1, k1, k2;
	cout << "Kirjoita 2 lukua:" << endl;
	cin >> k1 >> k2;
	while (valinta)
	{
	cout << "VALIKKO";
	cout << "\n\n0 Lopetus ";
	cout << "\n\n1 Summa ";
	cout << "\n2 Erotus";
	cout << "\n3 Tulo";
	cout << "\n4 Osamaara";
	cout << "\n5 Jakojaannos";
	cout << "\n6 Syota uudet luvut laskemista varten" << endl;
	
	cout << "Kirjota sun valintasi" << endl;
	cin >> ws >> valinta;
	
		switch (valinta)
		{
		case 0:	cout << "\nValittu lopetus";
			break;
		case 1: cout << "\nSumma " << k1+k2;
			break;
		case 2:	cout << "\nErotus " << k1-k2;
			break;
		case 3:	cout << "\nTulo " << k1*k2;
			break;
		case 4:	cout << "\nOsamaara " << float(k1)/k2;
			break;
		case 5:	cout << "\nJakojaannos " << k1%k2;
			break;
		case 6:	
		{
			cout << "\nSyota uudet luvut laskemista varten" << endl;
			cout << "Kirjoita 2 lukua:" << endl;
			cin >> k1 >> k2;
		break;
		}
		default:	cout << "\nVirhe: ei ko. toimintoa!";
			break;
		}
	}
	return 0;
}