/*****************************************
*
* Harjoitus 21 (Palautus vko 48)
* Muunna harjoitus 11 niin, etta k‰yt‰t seuraavia aliohjelmia :
*
* int KysyValinta(void);
*
* ->KysyValinta paluttaa k‰ytt‰j‰n antaman valintanumeron(0 - 6)
*
* double Summa(float luku1, int luku2);
*
* ->Summa laskee yhteen annetut tiedot ja palauttaa summan p‰‰ohjelmaan
*
* Versio: 1.0 Malmi
* Pvm: 18.11.2016
************************************************/

#include <iostream> 
using namespace std;
int main()
{
	int Kysyvalinta(void);
	double Summa(float luku1, int luku2);
	int valinta = 1, k1, k2;
	cout << "Kirjoita 2 lukua:" << endl;
	cin >> k1 >> k2;
	while (valinta)
	{
		valinta = Kysyvalinta();
		switch (valinta)
		{
		case 0:	cout << "\nValittu lopetus";
			break;
		case 1: cout << "\nSumma " << Summa(k1,k2);
			break;
		case 2:	cout << "\nErotus " << k1 - k2;
			break;
		case 3:	cout << "\nTulo " << k1*k2;
			break;
		case 4:	cout << "\nOsamaara " << float(k1) / k2;
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

int Kysyvalinta(void)
{
	int valinta;
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
	return valinta;
}

double Summa(float luku1, int luku2)
{
	float summa = luku1 + luku2;
	return summa;
}