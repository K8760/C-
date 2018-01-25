//esimerkki 9-3 
#include <iostream> 
using namespace std;
// tietuekuvaus
struct PVM
{
	int pp; //1-31
	int	kk; //1-12
	int	vv;
	char vp[20]; // viikon päivät maantaista - sunnuntaihin
};

int main()
{
	PVM pvm1 = { 1, 1, 2016, "jokupaiva" };
	PVM pvm2;
	cout << "\nMonesko päivä tänään on "
		"(syötä muodossa 99 99 99 viikonpaiva)?\n";
	cin >> ws >> pvm2.pp >> ws >> pvm2.kk >> ws >> pvm2.vv >> ws >> pvm2.vp;
	cout << "\nVuoden ensimmäinen päivä on: ";
	cout << pvm1.pp << '.' << pvm1.kk << '.' << pvm1.vv << pvm1.vp;
	cout << "\nTänään on: " << pvm2.pp << '.' << pvm2.kk << '.' << pvm2.vv << "   " << pvm2.vp;
	return 0;
}