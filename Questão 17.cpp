/*Faça um programa que leia quatro números reais diferentes. Após isso, imprima o maior valor e o
segundo maior valor.*/

#include <iostream>

using namespace std;

int main () {
	float n1, n2, n3, n4;
	
	cout << "Digite o primeiro numero: ";
	cin >> n1;
	
	cout << "Digite o segundo numero: ";
	cin >> n2;
	
	cout << "Digite o terceiro numero: ";
	cin >> n3;
	
	cout << "Digite o quarto numero: ";
	cin >> n4;
	
	float maior;
	
	if (n2 > maior) {
		maior = n2;
	}
	
	if (n3 > maior) {
		maior = n3;
	}
	
	if (n4 > maior) {
		maior = n4;
	} 
	
	float segundoMaior;
	
	if (n1 < maior) {
		segundoMaior = n1;
	} else {
		segundoMaior = n2;
	}
	
	if (n3 > segundoMaior && n3 < maior) {
		segundoMaior = n3;
	}
	
	if (n4 > segundoMaior && n4 < maior) {
		segundoMaior = n4;
	}
	
	
	cout << "O maior valor e: " << maior <<  endl;
	cout << "O segundo maior valor e: " << segundoMaior << endl;
	
	return 0;
}
