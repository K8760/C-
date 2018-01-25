#include "oma.h"
int Valikko(void);
void TulostaKaikkiHenkilot(tiedot h[], int maara);
void LisaaHenkilo(tiedot h[], int *maara);
void TulostaHenkilo(tiedot h);
int main()
{
	tiedot h[MAX] = { 0 };
	int maara = 0;
	int valinta = 1;
	while (valinta)
	{
		valinta = Valikko();
		switch (valinta)
		{
		case 0:	cout << "\nValittu lopetus";
			break;
		case 1:
		{
			LisaaHenkilo(h, &maara);
			TulostaHenkilo(h[maara - 1]);
		}
		break;
		case 2:
		{
			cout << "Kaikkien henkilojen tiedot: " << endl;
			TulostaKaikkiHenkilot(h, maara);
		}
		break;
		default:	cout << "\nVirhe: ei ko. toimintoa!";
			break;
		}
	}
}