//esimerkki 7-13
/*#include <iostream> 
using namespace std;
int main()
{
	int kerrat = 4;
	int lkm = 0;
	do
	{
		cout << "\nTerve";
		lkm++;
	} while (lkm < kerrat);
	return 0;
}*/

//esimerkki 7-14
/*#include <iostream> 
using namespace std;
int main()
{
	int kerrat = 4;
	int lkm;
	for (lkm = 0; lkm < kerrat; lkm++) //for(;;)
		cout << "\nTerve";
	return 0;
}*/

//esimerkki 7-16

#include <iostream> 
using namespace std;
int main()
{
	char merkki;
	int lkm = 0;
	cout << "Kirjoita lause (keskeytys CTRL-C): ";
	while (cin.get(merkki))
	{
		if (merkki == '.')
			break;
		if (merkki == ' ')
			continue;
		lkm++;
	}
	cout << "\nLauseessa oli yhteensä " << lkm << " kirjainta";
	return 0;
}