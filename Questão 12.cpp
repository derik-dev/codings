/*) Fa�a um programa para ler: quantidade atual em estoque, quantidade m�xima em estoque e
quantidade m�nima em estoque de um produto. Calcular e escrever a quantidade m�dia
((quantidade m�dia = quantidade m�xima + quantidade m�nima)/2). Se a quantidade em estoque
for maior ou igual a quantidade m�dia, escrever a mensagem 'N�o efetuar compra', sen�o escrever
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
