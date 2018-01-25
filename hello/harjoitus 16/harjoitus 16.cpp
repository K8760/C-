/*****************************************
*
* Harjoitus 16 (Palautus vko 45)
* Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
* Tietueeseen talletetaan seuraavat tiedot:
* etunimi (merkkijono; C:n merkkitaulukko)
* sukunimi (merkkijono; C:n merkkitaulukko)
* koulumatka (reaaliluku)
* osoite (merkkijono; C:n merkkitaulukko)
* postinumero (merkkijono; C:n merkkitaulukko)
* kengannumero (kokonaisluku)
* 
* Ohjelma tulostaa lopuksi tietueen tiedot naytölle.
*
* Versio: 1.0 Malmi
* Pvm: 28.10.2016
************************************************/

#include <iostream>
using namespace std;
int main()
{
	struct henk
	{
		char sukunimi[10];
		char etunimi[15];
		char osoite[25];
		int postinumero;
		int kengannumero;
		float koulumatka;
	};
	henk h;
	cout << "Anna etunimesi: " << endl;
	cin.get(h.etunimi, 15);
	cin.get();
	cout << "Anna sukunimi: " << endl;
	cin.get(h.sukunimi, 10);
	cin.get();
	cout << "Anna koulumatka: " << endl;
	cin >> h.koulumatka;
	cin.get();
	cout << "Anna osoitteesi: " << endl;
	cin.get(h.osoite, 25);
	cout << "Anna postinumero: " << endl;
	cin >> h.postinumero;
	cout << "Anna kengannumero: " << endl;
	cin >> h.kengannumero;
	cout << h.etunimi << ' ' << h.sukunimi << endl << h.koulumatka << endl << h.osoite << endl << h.postinumero << endl << h.kengannumero << endl;
}