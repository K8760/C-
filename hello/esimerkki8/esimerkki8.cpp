//esimerkki 7-11
#include <iostream> 
using namespace std;
#include <cstring> 
int main()
{
	char jono1[10] = "alku";
	char jono2[15] = "loppu";
	if (strcmp(jono1, jono2) < 0)
		cout << jono1 << " oli enimm�inen";
	else
		cout << jono2 << " oli ensimm�inen";
	return 0;
}