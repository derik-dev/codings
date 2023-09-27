/*Escreva um programa que leia dois números e retorne a diferença do maior pelo menor*/

#include <iostream>

using namespace std;

int main () {
	float n1, n2;
	
	cout << "Digite o primeiro numero: ";
	cin >> n1;
	
	cout << "Digite o segundo numero: ";
	cin >> n2;
	
	float maior, menor;
	
	if (n1 > n2) {
		maior = n1;
		menor = n2;
	} else {
		maior = n2;
		menor = n1;
	}
	
	double diferenca = maior - menor;
	
	cout << "A diferenca entre o maior e o menor numero e" << diferenca << endl;
	
	return 0;
}
