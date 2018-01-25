#include "oma.h"
void Aliohjelma(void)
{
	int luku = 5; //paikallinen muuttuja
	cout << "\nAliohjelman luku on: " << luku;
	cout << "\nGlobaali luku on: " << ::luku;
}