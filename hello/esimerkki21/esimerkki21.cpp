// ESIMERKKI 14-12 pohjalta tiedoton käsittelyä 
#include <iostream> 
using namespace std;
#include <fstream> 
struct TIEDOT {
	char nimi[20];
	char os[50];
	int knumero;
};
int main()
{
	TIEDOT taulu[3];
	// kirjoita tiedot 
	ofstream kirjoita;
	kirjoita.open("tiedot.csv");
	cout << "Ohjelma tallettaa tiedot .csv -tiedostoon\n";
	kirjoita << "NIMI;OSOITE;KENGÄNNUMERO" << endl;
	kirjoita << "Mikko Mallikas;Koulukatu 10;37" << endl;
	kirjoita << "Mooses Pessi;Peikkovuori 1 as 3;47" << endl;
	kirjoita << "Aku Ankka;Sorsakuja 1;50" << endl;
	kirjoita.close();
	// lue tiedot 
	ifstream lue;
	lue.open("tiedot.csv");
	char jono[100];
	lue.ignore(100, '\n');
	// lue otsikko roskiin 
	for (int i = 0; i < 3; i++)
	{
		lue.getline(taulu[i].nimi, 100, ';'); //will read till ;
		lue.getline(taulu[i].os, 100, ';');
		lue >> taulu[i].knumero;
		lue.ignore(); //luetaan rivinvaihtomerkki roskiin 
	}
	lue.close();
	for (int i = 0; i < 3; i++)
		cout << taulu[i].nimi << endl;
	return 0;
}