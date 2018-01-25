/*****************************************
*
* Harjoitus 13 (Palautus vko 43)
* Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
* yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
* lopuksi naytölle.
* 
*
* a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
* tehdäksesi merkkijonojen yhdistämisen
* b) Kayta string-kirjastoa (C++:n merkkijonot)
* tehdäksesi merkkijonojen yhdistämisen  TEE, JOS ON AIKAA
* 
* Esimerkki
* Anna etunimi: Aku
* Anna sukunimi: Ankka
* Nimesi oli: Aku Ankka
*
* Versio: 1.0 Malmi
* Pvm: 14.10.2016
************************************************/

#include <iostream>
using namespace std;
struct NS
{
	char nimi[15], sukunimi[15];
};

int main()
{
	NS n;
	cout << "Kirjoita sun nimi ja sukunimi: " << endl;
	cin >> ws >> n.nimi >> ws >> n.sukunimi;
	cout << "Sinun nimi ja sukunimi on: " << endl;
	cout << n.nimi << "  " << n.sukunimi << endl;
}