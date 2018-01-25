/***********************************************
* Teht‰v‰: Harjoitus 5 (palautus vko 40)
* Tekija: Ekaterina Piispanen
* Kuvaus:
*		Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa olevan raham‰‰r‰n
*		ja lihapiirakan hinnan.
*
*		Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka.
*		Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa.
*		Muuten ohjelma kehottaa k‰ytt‰j‰‰ paastoamaan.
*
*		K‰yt‰ vain kahta muuttujaa. ‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi
*		ostaa lihapiirakkaa.
* Versio: 1.0 Malmi
*Pvm: 23.09.2016
************************************************/
#include <iostream> 
using namespace std;
int main()
{
	int raha, hinta;
	cout << "Kuinka paljon rahaa lomppakossa?" << endl;
	cin >> raha;
	cout << "Kuinka paljoin lihapiirakka maksaa?" << endl;
	cin >> hinta;
	if (raha >= hinta) cout << raha - hinta << endl;
		
	else cout << "Ei ole tarpeeksi rahaa" << endl;
}