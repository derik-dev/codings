/*Fa�a um programa que receba um n�mero inteiro e verifique se ele � par ou �mpar.*/

#include <iostream>

using namespace std;

int main () {
	int numero;
	
	cout << "Digite um numero inteiro: ";
	cin >> numero;
	
	if (numero % 2 == 0) {
		cout << numero << " e par." << endl;
	} else {
		cout << numero << " e impar." << endl;
	}
	
	return 0;
}
