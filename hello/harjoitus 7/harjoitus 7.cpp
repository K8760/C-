/***********************************************
* Tehtävä: Harjoitus 5 (palautus vko 40)
* Tekija: Ekaterina Piispanen
* Kuvaus:
*		Tee ohjelma, joka kysyy käyttäjältä nimen, pituuden sentteinä ja painon kiloina.
*		Ohjelma laskee ja tulostaa käyttäjän ihannepainon (pituus-100). Lisäksi
*		ohjelma kertoo käyttäjän nykyisen painon eron kiloina verrattuna ihanne-
*		painoon. Ohjelman käyttöliittymä toimii seuraavasti:
*
*		Ihannepaino
*
*		Ohjelma laskee ihannepainosi
*		pituutesi perusteella.
*
*		Anna nimesi > Mooses
*		Anna pituutesi sentteinä > 175
*		Anna osoitteesi > Peikkovuori 5 as 4
*		Anna painosi kiloina > 89
*
*
*		Arvoisa Mooses
*		Osoitteesi on Peikkovuori 5 as 4
*		Nykyinen painosi 89.0 kg
*		Ihannepainosi 75.0 kg
*		Erotus 14.0 kg
*
* Versio: 1.0 Malmi
*Pvm: 23.09.2016
************************************************/
#include <iostream> 
using namespace std;
int main()
{
	char nimi[10];
	int pituus, paino;
	cout << "Kirjoita nimesi" << endl;
	cin.get(nimi, 10);
	cout << "Kirjoita sun pituus sentteinä" << endl;
	cin >> pituus;
	cout << "Kirjoita sun paino kilossa" << endl;
	cin >> paino;
	cout << "Nimisi on " << nimi << endl
		<< "Nykyinen painosi on " << paino << " kg" << endl
		<< "Ihannepainosi on " << pituus - 100 << " kg" << endl
		<< "Erotus on " << paino - pituus + 100 << " kg" << endl;
}
