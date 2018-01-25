/*****************************************
*
* Harjoitus 15 (Palautus vko 45)
*
* Tee ohjelma, joka kysyy henkilötietosi seuraavasti:
* Anna (kaikki) etunimesi (merkkijono):
* Anna kengannumero (kokonaisluku):
* Anna sukunimi (merkkijono):
* Anna koulumatka (reaaliluku):
* Anna osoitteesi:
* Anna postinumero:
*
* Ohjelma tulostaa tiedot seuraavasti:
* sukunimi etunimet
* osoite
* postinumero
* kengannumero ja koulumatka
*
* Käytä C++:n cin- ja cout-olioita ohjelman toteuttamiseen.
*
* Versio: 1.0 Malmi
* Pvm: 14.10.2016
************************************************/

#include <iostream>
using namespace std;
int main()
{
		char sukunimi[10];
		char etunimi[15];
		char osoite[25];
		int postinumero;
		int kengannumero;
		float koulumatka;
	cout << "Anna etunimesi: " << endl;
	cin.get(etunimi, 15);
	cout << "Anna kengannumero: " << endl;
	cin >> kengannumero;
	cin.get();
	cout << "Anna sukunimi: " << endl;
	cin.get(sukunimi, 10);
	cout << "Anna koulumatka: " << endl;
	cin >> koulumatka;
	cin.get();
	cout << "Anna osoitteesi: " << endl;
	cin.get(osoite, 25);
	cin.get();
	cout << "Anna postinumero: " << endl;
	cin >> postinumero;
	cout << sukunimi << ' ' << etunimi << endl << osoite << endl << postinumero << endl << kengannumero << endl << koulumatka << endl;
}