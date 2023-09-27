/*Faça um programa que receba dois números inteiros, um em cada linha, e exiba na tela o maior
deles.*/

#include <iostream>

using namespace std;

int main () {
	int n1, n2;
	
	cout << "Digite o primeiro numero inteiro: ";
	cin >> n1;
	
	cout << "Digite o segundo numero inteiro: ";
	cin >> n2;
	
	if (n1 > n2) {
		cout << n1 << " > " << n2;
	} else {
		cout << n2 << " < " << n1;
	}
	return 0;
}
