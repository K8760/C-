#include "oma.h"
void TulostaKaikkiHenkilot(tiedot h[], int maara)
{
	for (int i = 0; i < maara;i++)
		cout << "Henkilon " << i + 1 << ": " << h[i].etunimi << " " << h[i].koulumatka << " " << h[i].koko << endl;
}