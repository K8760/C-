#include <iostream> 
using namespace std;
int main()
{
	long double luku = 32767000000;
	luku = luku + 1;
	cout << luku << endl;
	char merkki = 'A';
	cout << "Merkki on:" << merkki << endl;
	cout << "Merkkin arvo on:" << (int)merkki << endl;
	merkki = merkki + 1;
	cout << "Merkki on:" << merkki << endl;
	cout << "Merkkin arvo on:" << (int)merkki << endl;
	char nimi[10] = "Mikko";
	cout << "Anna nimesi:";
	cin.get(nimi, 10);
	cout << "Nimesi on: " << nimi << endl;
	return 0;
}