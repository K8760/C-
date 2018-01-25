//esimerkki 9-14
#include <iostream> 
using namespace std;
int main()
{
	int luku[4] = { 2,5,7,9 };
	int *osoitin; //osoittimen esittely
	osoitin = &luku[0]; //alustetaan osoitin
	cout << "\nLuku[0]-muuttujan osoite on: " << osoitin;
	cout << "\nLuku[0]-muuttujan osoite on: " << &luku[0];
	cout << "\nLuku[0]-muuttujan sisältö on: " << *osoitin;
	cout << "\nLuku[0]-muuttujan sisältö on: " << luku[0];
	osoitin = &luku[1]; //alustetaan osoitin
	cout << "\nLuku[1]-muuttujan osoite on: " << osoitin;
	cout << "\nLuku[1]-muuttujan osoite on: " << &luku[1];
	cout << "\nLuku[1]-muuttujan sisältö on: " << *osoitin;
	cout << "\nLuku[1]-muuttujan sisältö on: " << luku[1];
	osoitin++;
	cout << "\nLuku[2]-muuttujan osoite on: " << osoitin;
	cout << "\nLuku[2]-muuttujan osoite on: " << &luku[2];
	cout << "\nLuku[2]-muuttujan sisältö on: " << *osoitin;
	cout << "\nLuku[2]-muuttujan sisältö on: " << luku[2];
	
	cout << "\nLuku[3]-muuttujan osoite on: " << osoitin+1;
	cout << "\nLuku[3]-muuttujan osoite on: " << &luku[3];
	cout << "\nLuku[3]-muuttujan sisältö on: " << *(osoitin+1);
	cout << "\nLuku[3]-muuttujan sisältö on: " << osoitin[1];
	cout << "\nLuku[3]-muuttujan sisältö on: " << luku[3];

	cout << "\nLuku[0]-muuttujan sisältö on: " << osoitin[-2];
	return 0;
}