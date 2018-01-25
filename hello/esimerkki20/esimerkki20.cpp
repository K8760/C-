//esim 11-4
#include <iostream> 
using namespace std;
int main()
{
	int *luku_osoitin1 = NULL;
	int vastaus, laskuri = 0;
	cout << "\nMontako lukua varataan ? ";
	cin >> vastaus;
	luku_osoitin1 = new int[vastaus];
	if (luku_osoitin1) //sama kuin !=NULL
	{
		for (laskuri = 0; laskuri < vastaus; laskuri++)
		{
			cout << "\nLuku ?";
			cin >> luku_osoitin1[laskuri];
		}
		for (laskuri = 0; laskuri < vastaus; laskuri++)
		{
			cout << "\nLuku: " << luku_osoitin1[laskuri];
			cout << " osoitteessa: " << &luku_osoitin1[laskuri];
		}
	}
	else
		cout << "\nTilanvaraus epäonnistui";
	delete[] luku_osoitin1;
	return 0;
}