/*****************************************
*
* T�SS� TEHT�V�SS� ON K�YTETT�V� C-kielen merkkitaulukoita! Taulukon m��rittely on siis muotoa 
* 
* char mjono[xx];
*
* Tee ohjelma, joka kysyy k�ytt�j�lt� 17 merkki�
* pitk�n merkkijonon (ei v�lily�ntej�).
* a) Ohjelma tulostaa merkkijonon k��nteisess� j�rjestyksess� n�yt�lle
* (tulostus tyyppi� "cout << mjono1[4];" jne)
* b) Ohjelma k��nt�� annetun merkkijonon toiseen
* merkkijonoon ja tulostaa sen n�yt�lle
* (tulostus tyyppi� "cout << mjono2;")
* c) merkkijono voi olla kuinka pitk�
* tahansa (max 100 kirjainta).
* Sy�tetyn merkkijonon pituutta ei saa
* laskea mill��n kirjastofunktiolla
* (esim. lenght tms.) Ohjelma
* tutkii onko annettu merkkijono
* palindromi ja ilmoittaa sen k�ytt�j�lle.
* V�lily�nnit jonossa ovat sallittuja.
* 
* K�ytt�j� sy�tt�� jonon: ABC_Kissa_kavelee
* ohjelma tulostaa: eelevak_assiK_CBA
*
* Versio: 1.0 Malmi
* Pvm: 14.10.2016
************************************************/

#include <iostream>
using namespace std;
#include <cstring> 
int main()
{
	char jono1[18], jono2[18];
	int l;
	/*cout << "Anna 17 merkkia pitka jono:" << endl;
	cin.get(jono1, 18);
	// a) kohta
	cout << "a) kohta kaannettyna: ";
	for (int i = 16; i >= 0;i--)
		cout << jono1[i];
	// b) kohta
	for (int j=0, i=16;i>=0;j++,i--)
		jono2[j] = jono1[i];
	jono2[17] = '\0';
	cout << "\nb) kohta jono2: " << jono2 << endl;*/

	// c) kohta
	cout << "\nc) kohta Anna jono:" << endl;
	cin.get(jono1, 100);
	l = 0;
	while (jono1[l] != 0)
		l++;
	for (int i = l-1; i >= 0;i--)
		cout << jono1[i];
	for (int j = 0, i = l-1;i >= 0;j++, i--)
		jono2[j] = jono1[i];
	jono2[l] = '\0';
	cout << "\njono2: " << jono2 << endl;
	if (strcmp(jono1, jono2) == 0) //_strcmi - doesnt matter big or small
		cout << "\nse on palindromi " << endl;
	else
		cout << "\nei ole palindromi " << endl;
}