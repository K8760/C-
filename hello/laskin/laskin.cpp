#include <iostream>
using namespace std;
#include <fstream> 
struct tiedot
{
	char etunimi[15];
	int ika;
	char sukupuoli[10];
	float pituus;
	char vari[10];
};
const int MAX = 10;
tiedot tmp;
int Valikko(void);
void LisaaHenkilo(tiedot h[], int *maara);
void TulostaKaikkiHenkilot(tiedot h[], int maara);
void TulostaHenkilo(tiedot h);
void Aakkosjarjestys(tiedot h[], int maara);
void Ika(tiedot h[], int maara);
void Naiset(tiedot h[], int maara);
void Miehet(tiedot h[], int maara);
void Pituus(tiedot h[], int maara);
void VihreaNaiset(tiedot h[], int maara);
void SininenMiehet(tiedot h[], int maara);
void Ruskea(tiedot h[], int maara);
void Poistaa(tiedot h[], int maara);
void KirjoittaaTiedostoon(tiedot h[], int maara);
void NayttaaTiedoston(tiedot h[], int maara);

int main()
{
	tiedot h[MAX] = { 0 };
	int maara = 0;
	int numero = 0;
	int valinta = 1;
	while (valinta)
	{
		valinta = Valikko();
		switch(valinta)
		{
		case 0:	cout << "\nValittu lopetus";
			break;
		case 1:
		{
			LisaaHenkilo(h, &maara);
			TulostaHenkilo(h[maara-1]);
		}
			break;
		case 2:
		{
			cout << "Kaikkien henkilojen tiedot: " << endl;
			TulostaKaikkiHenkilot(h, maara);
		}
			break;
		case 3:
			Aakkosjarjestys(h, maara);
			break;
		case 4:
			Ika(h, maara);
			break;
		case 5:
			Naiset(h, maara);
			break;
		case 6:
			Miehet(h, maara);
			break;
		case 7:
			Pituus(h, maara);
			break;
		case 8:
			VihreaNaiset(h, maara);
			break;
		case 9:
			SininenMiehet(h, maara);
			break;
		case 10:
			Ruskea(h, maara);
			break;
		case 11:
			Poistaa(h, maara);
			break;
		case 12:
			KirjoittaaTiedostoon(h, maara);
			break;
		case 13:
			NayttaaTiedoston(h, maara);
			break;
		case 14:
		default:	cout << "\nVirhe: ei ko. toimintoa!";
			break;
		}
	}
}

int Valikko(void)
{
	int valinta;
	cout << endl << "Valikko: " << endl;
	cout << "0 Lopeta" << endl;
	cout << "1 Lisaa henkilo" << endl;
	cout << "2 Naytaa kaikki henkilot" << endl;
	cout << "3 Naytaa henkilot aakkosjarjestyksessa" << endl;
	cout << "4 Naytaa henkilot ika jarjestyksessa (nuorimmasta vanhimpaan)" << endl;
	cout << "5 Naytaa vain naiset" << endl;
	cout << "6 Naytaa vain miehet" << endl;
	cout << "7 Naytaa henkilot pituus jarjestyksessa (suurimmasta pienempaan)" << endl;
	cout << "8 Naytaa naiset, kenella on vihreat silmat" << endl;
	cout << "9 Naytaa miehet, kenella on siniset silmat" << endl;
	cout << "10 Naytaa henkilot ruskeat silmat" << endl;
	cout << "11 Poistaa" << endl;
	cout << "12 Talenna muutokset tiedostoon" << endl;
	cout << "13 Nayttaa tiedoston sisalto " << endl;
	cout << endl << "Kirjota sun valintasi" << endl; 
	cin >> ws >> valinta;
	cin.get();
	return valinta;
}

void LisaaHenkilo(tiedot h[], int *maara)
{
	/*ofstream kirjoita;
	kirjoita.open("harjoitustyo.csv",ios_base::app);*/
	cout << endl << "Kirjoita henkilon tiedot: " << endl;
	cout << "Kirjoita etunimi: " << endl;
	cin.get(h[*maara].etunimi, 15);
	cin.get();
	cout << "Kirjoita ika : " << endl;
	cin >> h[*maara].ika;
	cin.get();
	cout << "Kirjoita sukupuoli: " << endl;
	cin >> h[*maara].sukupuoli;
	cin.get();
	cout << "Kirjoita pituus: " << endl;
	cin >> h[*maara].pituus;
	cin.get();
	cout << "Kirjoita silmien vari: " << endl;
	cin >> h[*maara].vari;
	cin.get();
	/*kirjoita << h[*maara].etunimi << ";";
	kirjoita << h[*maara].ika << ";";
	kirjoita << h[*maara].sukupuoli << ";";
	kirjoita << h[*maara].pituus << ";";
	kirjoita << h[*maara].vari << ";" << endl;*/
	(*maara)++;
	//kirjoita.close();

}

void TulostaHenkilo(tiedot h)
{
	cout << "Lisantynyt henkilo: " << endl;
	cout << h.etunimi << " " << h.ika << " " << h.sukupuoli << " " << h.pituus << " " << h.vari << endl;
}

void TulostaKaikkiHenkilot(tiedot h[], int maara)
{
	for (int i = 0; i < maara;i++)
		if (h[i].ika != 0)
			cout << "Henkilon " << i + 1 << ": " << h[i].etunimi << " " << h[i].ika << " " << h[i].sukupuoli << " " << h[i].pituus << " " << h[i].vari << endl;
}

void Aakkosjarjestys(tiedot h[], int maara)
{
	for (int i = 0; i <= maara - 2; i++)
	{
		for (int j = i + 1; j <= maara - 1; j++)
		{
			if (strcmp(h[j].etunimi, h[i].etunimi) < 0)
			{
				tmp = h[i];
				h[i] = h[j];
				h[j] = tmp;
			}
		}
	}
	for (int i = 0; i < maara;i++)
		cout << "Henkilon " << i + 1 << ": " << h[i].etunimi << " " << h[i].ika << " " << h[i].sukupuoli << " " << h[i].pituus << " " << h[i].vari << endl;
}

void Ika(tiedot h[], int maara)
{
	for (int i = 0; i <= maara - 2; i++)
	{
		for (int j = i + 1; j <= maara - 1; j++)
		{
			if (h[j].ika < h[i].ika)
			{
				tmp = h[i];
				h[i] = h[j];
				h[j] = tmp;
			}
		}
	}
	for (int i = 0; i < maara;i++)
		cout << "Henkilon " << i + 1 << ": " << h[i].etunimi << " " << h[i].ika << " " << h[i].sukupuoli << " " << h[i].pituus << " " << h[i].vari << endl;
}

void Naiset(tiedot h[], int maara)
{
	for (int i = 0; i < maara;i++)
	{
		if (strcmp(h[i].sukupuoli , "nainen") == 0)
			cout << "Henkilon " << i + 1 << ": " << h[i].etunimi << " " << h[i].ika << " " << h[i].sukupuoli << " " << h[i].pituus << " " << h[i].vari << endl;
	}
}

void Miehet(tiedot h[], int maara)
{
	for (int i = 0; i < maara;i++)
	{
		if (strcmp(h[i].sukupuoli, "mies") == 0)
			cout << "Henkilon " << i + 1 << ": " << h[i].etunimi << " " << h[i].ika << " " << h[i].sukupuoli << " " << h[i].pituus << " " << h[i].vari << endl;
	}
}

void Pituus(tiedot h[], int maara)
{
	for (int i = 0; i <= maara - 2; i++)
	{
		for (int j = i + 1; j <= maara - 1; j++)
		{
			if (h[j].pituus > h[i].pituus)
			{
				tmp = h[i];
				h[i] = h[j];
				h[j] = tmp;
			}
		}
	}
	for (int i = 0; i < maara;i++)
		cout << "Henkilon " << i + 1 << ": " << h[i].etunimi << " " << h[i].ika << " " << h[i].sukupuoli << " " << h[i].pituus << " " << h[i].vari << endl;
}

void VihreaNaiset(tiedot h[], int maara)
{
	for (int i = 0; i < maara;i++)
	{
		if (strcmp(h[i].vari, "vihrea") == 0 && strcmp(h[i].sukupuoli, "nainen") == 0)
			cout << "Henkilon " << i + 1 << ": " << h[i].etunimi << " " << h[i].ika << " " << h[i].sukupuoli << " " << h[i].pituus << " " << h[i].vari << endl;
	}
}

void SininenMiehet(tiedot h[], int maara)
{
	for (int i = 0; i < maara;i++)
	{
		if (strcmp(h[i].vari, "sininen") == 0 && strcmp(h[i].sukupuoli, "mies") == 0)
			cout << "Henkilon " << i + 1 << ": " << h[i].etunimi << " " << h[i].ika << " " << h[i].sukupuoli << " " << h[i].pituus << " " << h[i].vari << endl;
	}
}

void Ruskea(tiedot h[], int maara)
{
	for (int i = 0; i < maara;i++)
	{
		if (strcmp(h[i].vari, "ruskea") == 0)
			cout << "Henkilon " << i + 1 << ": " << h[i].etunimi << " " << h[i].ika << " " << h[i].sukupuoli << " " << h[i].pituus << " " << h[i].vari << endl;
	}
}

void Poistaa(tiedot h[], int maara)
{
	char nimi[15];
	cout << "Kirjoita nimi, kenet haluat poistaa:" << endl;
	cin.get(nimi, 15);
	for (int i = 0; i < maara;i++)
	{
		if (strcmp(h[i].etunimi, nimi) == 0)
		{
			for (int j = i; j <= maara;j++)
				h[j] = h[j + 1];
		}
	}
}

void KirjoittaaTiedostoon(tiedot h[], int maara)
{
	ofstream kirjoita;
	kirjoita.open("harjoitustyo.csv");
	for (int i = 0; i < maara; i++)
		if (h[i].ika != 0)
		{
			kirjoita << h[i].etunimi << ";";
			kirjoita << h[i].ika << ";";
			kirjoita << h[i].sukupuoli << ";";
			kirjoita << h[i].pituus << ";";
			kirjoita << h[i].vari << ";" << endl;
		}
	kirjoita.close();
}

void NayttaaTiedoston(tiedot h[], int maara)
{
	ifstream lue;
	lue.open("harjoitustyo.csv");
	int kpl = 0;
	for (int i = 0; lue.peek()!=EOF; i++)
	{
		lue.getline(h[i].etunimi, 100, ';');
		lue >> h[i].ika;
		lue.ignore();
		lue.getline(h[i].sukupuoli, 100, ';');
		lue >> h[i].pituus;
		lue.ignore();
		lue.getline(h[i].vari, 100, ';');
		lue.ignore();
		kpl++;
	}
	lue.close();
	for (int i = 0; i < kpl;i++)
			cout << "Henkilon " << i + 1 << ": " << h[i].etunimi << " " << h[i].ika << " " << h[i].sukupuoli << " " << h[i].pituus << " " << h[i].vari << endl;
}