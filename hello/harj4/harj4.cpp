/********************************
* Ohjelma: Harjoitus 4 (palautus vko 39)
* Tekij„: Ekaterina Piispanen
* Ryhm„: TTV16S3
* Kuvaus:
*	Ks.  Oppikirjan (+omat) esimerkit, harj4
*
*	a) Kirjoita, tallenna ja suorita ym. ohjelma.
*	b) Kommentoi ylla olevan esimerkin kaikki rivit (mit„ rivill„ tapahtuu).
*	c) Muuta vakioden nimet niin, ett„
*	MAX => MINIMI
*	max => MAKSIMI
*
*	Muuta ohjelmaa niin, ett„ voit tulostaa ohjelmalla jonkun seuraavat ilmoitukset riippuen sy”tetyst„ luvusta:
*	Summa on pienempi kuin MINIMI 
*	Summa on suurempi kuin MAKSIMI
*	Summa on MINIMIN ja MAKSIMIN v„liss„

*	Versio
* PVM: 16.09.2016
*********************************/

#include <iostream> //n„pp„mist” ja n„yt”n k„ytt„minen
using namespace std; // std nimiavaruus k„ytt””n
//m„„ritell„„n vakiot,	VAKIOT KIRJOITETTAAN ISOLLA	
#define MINIMI 10 //vanha, ei suositeltava tapa
const int MAKSIMI = 20; //uusi, suositeltava tapa

//m„„ritell„„n jukiset muuttujat, alkavat pienella 
int summa;

//esitell„„n aliohjelmat
void Laske(int, int);
void main() //p„„ohjelma alkaa t„st„
{
	// paikallisten muuttujien esittely
	int luku1 = 2;
	int luku2;
	cout << "Sy”t„ luku:"; //tulosta teksia n„yt”lle
	cin >> luku2; //luetaan n„pp„imist”„
	// luku1+ luku2
	Laske(luku1, luku2);
	if (summa < MINIMI) //valintarakenne
		cout << "Summa on pienempi kuin" << MINIMI <<endl;
	if (summa > MAKSIMI)
		cout << "Summa on suurempi kuin" << MAKSIMI <<endl;
	if (summa > MINIMI && summa < MAKSIMI)
		cout << MINIMI << "<Summa<" << MAKSIMI <<endl;
}
void Laske(int eka, int toka) //aliohjelman m„„ri
{
	summa = eka + toka;
}