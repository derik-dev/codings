/*Faça um programa que receba um número inteiro e verifique se ele é par ou ímpar.*/

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
