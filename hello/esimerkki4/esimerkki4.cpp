/********************
*Esimerkki 4
*********************/
#include <iostream> 
using namespace std;
int main()
{
	int ika;
	char kokonimi[30];
	char osoite[30];
	cout << "\nIkä? ";
	cin >> ika;
	cin.get();
	cout << "Nimi? ";
	cin.getline(kokonimi, 30);
	//cin.get();
	cout << "Osoite? ";
	cin.get(osoite, 30);
	cin.get();
	cout << "\nIkä : " << ika;
	cout << "\nNimi: " << kokonimi;
	cout << "\nOsoite: " << osoite;
	return 0;
}
