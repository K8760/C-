//esim 10-15
#include <iostream> 
using namespace std;
void Kysy(int[], int lkm);
int main()
{
	int ind;
	int taulu[5];
	//Kysy(taulu, 5);
	Kysy(&taulu[0],5);
	for (ind = 0; ind < 5; ind++)
		cout << "\n" << taulu[ind];
	return 0;
}
//void Kysy(int *p_taulu, int lkm)
void Kysy(int p_taulu[], int lkm)
{
	for (int ind = 0; ind < lkm; ind++)
	{
		cout << "Syötä luku: ";
		cin >> p_taulu[ind];
	}
}