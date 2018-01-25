//esim 10-27
#include <iostream> 
using namespace std;
int luku = 3; //julkinen muuttuja
void Aliohjelma(void);
int main()
{
	Aliohjelma();
	cout << "\nLuku on pääohjelmassa: " << luku;
	return 0;
}
void Aliohjelma(void)
{
	int luku = 5; //paikallinen muuttuja
	{
		int luku = 123; //ne 4itaetsa potomy 4to v {}
	}
	cout << "\nAliohjelman luku on: " << luku;
	cout << "\nGlobaali luku on: " << ::luku;
}
