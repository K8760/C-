//esim 10-10
#include <iostream> 
using namespace std;
#include "pvm.h" 
void Nayta(PVM);
int main()
{
	PVM tietue;
	cout << "\nSyötä päivämäärä muodossa pp kk vv: ";
	cin >> tietue.pp >> tietue.kk >> tietue.vv;
	Nayta(tietue);
	return 0;
}
void Nayta(PVM p_tietue)
{
	cout << "\nPäivämäärä on: ";
	cout << p_tietue.pp << "." << p_tietue.kk << "." << p_tietue.vv;
}