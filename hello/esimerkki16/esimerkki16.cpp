//esim 10-7
#include <iostream> 
using namespace std;
void Korota(int *);	//esittely 
int main()
{
	int luku;
	cout << "\nSyötä jokin kokonaisluku: ";
	cin >> luku;
	Korota(&luku);
	cout << "\nLuku *luku: " << luku;
	return 0;
}
void Korota(int *p_luku)
{
	*p_luku = (*p_luku) * (*p_luku);
}