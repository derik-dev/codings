/* Crie um programa para ler 3 valores (A, B e C) representando as medidas dos lados de um
triângulo e escrever se formam ou não um triângulo. OBS: para formar um triângulo, o valor de cada
lado deve ser menor que a soma dos outros 2 lados.*/

#include <iostream>

using namespace std;

int main () {
	double A, B , C;
	
	cout << "Digite o primeiro lado: ";
	cin >> A;
	
	cout << "Digite o segundo lado: ";
	cin >> B;
	
	cout << "Digite o terceiro lado: ";
	cin >> C;
	
	if (A < B + C && B < A + C && C < A + B) {
		cout << "Forma um triangulo" << endl;
	} else {
		cout << "Nao forma um trinagulo" << endl;
	}
	
	return 0;	
}
