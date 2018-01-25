/********************
*Esimerkki 2
*********************/
#include <iostream> 
using namespace std;
int main(void)
{
	int luku = 5;
	int lukux;
	char merkki = 'a';
	float reaali = 5.999f;
	float reaalix;
	lukux = merkki;
	cout << "\nchar -> int " << lukux;
	lukux = (int)reaali;
	cout << "\nfloat -> int " << lukux;
	reaalix = (float)luku;
	cout << "\nint -> float " << reaalix;
	reaalix = merkki;
	cout << "\nchar -> float " << reaalix;
	return 0;
}