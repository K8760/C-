/********************
*Esimerkki 3
*********************/
#include <iostream> 
using namespace std;
#include <cstring> 
int main()
{
	char jono1[10] = "C-kieli";
	char jono2[10] = { 'C', '+', '+', '\0' };
	cout << "Alkuarvo jono1:ssä on: " << jono1;
	strcpy_s(jono1, jono2);//kopioidaan merkkijonon taulosta toiseen
	cout << "\nJa lopputulos on: " << jono1;
	return 0;
}