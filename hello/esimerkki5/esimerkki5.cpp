/********************
*Esimerkki 5
*********************/
#include <iostream> 
using namespace std;
int main()
{
	int luku1 = 5, luku2 = 2;
	int summa, erotus, tulo, jaannos;
	float osamaara;

	/*luku1++;
	++luku1;
	luku1 = luku1 + 1; sama asia
	luku1 += 1;*/

	summa = luku1 + luku2;
	erotus = luku1 - luku2;
	tulo = luku1 * luku2;
	osamaara = (float)luku1 / luku2;
	jaannos = luku1 % luku2;
	cout << "\nLuku1: " << luku1 << " Luku2: " << luku2;
	cout << "\nSumma: " << summa;
	cout << "\nErotus: " << erotus;
	cout << "\nTulo: " << tulo;
	cout << "\nOsamäärä: " << osamaara;
	cout << "\nJakojäännös: " << jaannos;
	return 0;
}