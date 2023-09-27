/*Ilusionistas e trapaceiros bem treinados conseguem passar a ilus�o de que embaralharam
cartas, quando na verdade distribu�ram elas em posi��es bem determinadas. Um m�todo,
conhecido como "o corte de Faro" consiste em dividir o baralho ao meio e depois juntar de maneira
que a primeira carta da metade posterior fique no in�cio, a primeira carta da metade anterior fique
em segundo, a segunda carta da metade posterior fique em terceiro e assim por diante. No caso de
quantidade �mpar de cartas, sup�e-se que a metade posterior ter� uma carta a mais.
Assim, a sequ�ncia de cartas ?A, ?A, ?A, ?K, ?K, ?K e ?K, depois do corte de faro fica assim: ?K, ?A,
?K, ?A, ?K, ?A e ?K.
Fa�a um programa que dada uma quantidade de cartas e a posi��o de uma carta, calcule e escreva a
posi��o da mesma carta ap�s o corte de Faro.
Entradas:
1. Quantidade de cartas e
2. posi��o inicial da carta (a primeira carta est� na posi��o zero, a segunda na posi��o 1 e assim
por diante).
Sa�das:
1. A posi��o da carta ap�s o corte de Faro (as posi��es come�am em zero).*/

#include <iostream>

using namespace std;

int main () {
	int qtdCartas, posicaoInicial;

	cout << "Digite a quantidade de cartas: ";
	cin >> qtdCartas;
	
	cout << "Digite a posisao inicial: ";
	cin >> posicaoInicial;
	
	int novaPosicao;
	
	if (qtdCartas % 2 == 0) {
		novaPosicao = posicaoInicial * 2;
	} else {
		novaPosicao = posicaoInicial * 2 + 1;
	}
	
	cout << "Nova posicao da carta apos o corte de faro: " << novaPosicao << endl;
	
	return 0;
}
