//esimerkki 9-3 
#include <iostream> 
using namespace std;
// tietuekuvaus
struct PVM
{
	int pp; //1-31
	int	kk; //1-12
	int	vv;
	char vp[20]; // viikon p�iv�t maantaista - sunnuntaihin
};

int main()
{
	PVM pvm1 = { 1, 1, 2016, "jokupaiva" };
	PVM pvm2;
	cout << "\nMonesko p�iv� t�n��n on "
		"(sy�t� muodossa 99 99 99 viikonpaiva)?\n";
	cin >> ws >> pvm2.pp >> ws >> pvm2.kk >> ws >> pvm2.vv >> ws >> pvm2.vp;
	cout << "\nVuoden ensimm�inen p�iv� on: ";
	cout << pvm1.pp << '.' << pvm1.kk << '.' << pvm1.vv << pvm1.vp;
	cout << "\nT�n��n on: " << pvm2.pp << '.' << pvm2.kk << '.' << pvm2.vv << "   " << pvm2.vp;
	return 0;
}