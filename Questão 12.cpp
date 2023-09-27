/*) Faça um programa para ler: quantidade atual em estoque, quantidade máxima em estoque e
quantidade mínima em estoque de um produto. Calcular e escrever a quantidade média
((quantidade média = quantidade máxima + quantidade mínima)/2). Se a quantidade em estoque
for maior ou igual a quantidade média, escrever a mensagem 'Não efetuar compra', senão escrever
a mensagem 'Efetuar compra'.*/

#include <iostream>

using namespace std;

int main () {
	int qtdEstoque, qtdMaxima, qtdMinima;
	
	cout << "Digite a quantidade atual em estoque: ";
	cin >> qtdEstoque;
	
	cout << "Digite a quantidade maxima: ";
	cin >> qtdMaxima;
	
	cout << "Digite a quantiade minima: ";
	cin >> qtdMinima;
	
	int qtdMedia = (qtdMaxima + qtdMinima)/2;
	
	if (qtdEstoque >= qtdMedia) {
		cout << "Nao efetuar compra" << endl;
	} else {
		cout << "Efeturar compra" << endl;
	}
	
	return 0;
}
