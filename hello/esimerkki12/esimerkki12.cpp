//esimerkki 9-10
#include <iostream> 
using namespace std;
int main()
{
	const int max = 5;
	int luvut[max] = { 7, 2, 4, 3, 1 };
	int ind;
	cout << "luvut ennen jarjestamiseta:";
	for (ind = 0; ind < max; ind++)
	{
		cout << luvut[ind];
	}
	cout << endl;
	for (int i=0; i<=(max-2); i++)
	{
		for (int j=i+1; j<=(max-1);j++)
		{
			if (luvut[i] > luvut[j])
			{
				int tmp = luvut[i];
				luvut[i] = luvut[j];
				luvut[j] = tmp;
			}
		}
	}
	cout << "luvut jarjestamisen jalkeen:";
	for (ind = 0; ind < max; ind++)
	{
		cout << luvut[ind];
	}
	cout << endl;
	return 0;
}