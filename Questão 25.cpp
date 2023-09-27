/*Ilusionistas e trapaceiros bem treinados conseguem passar a ilusão de que embaralharam
cartas, quando na verdade distribuíram elas em posições bem determinadas. Um método,
conhecido como "o corte de Faro" consiste em dividir o baralho ao meio e depois juntar de maneira
que a primeira carta da metade posterior fique no início, a primeira carta da metade anterior fique
em segundo, a segunda carta da metade posterior fique em terceiro e assim por diante. No caso de
quantidade ímpar de cartas, supõe-se que a metade posterior terá uma carta a mais.
Assim, a sequência de cartas ?A, ?A, ?A, ?K, ?K, ?K e ?K, depois do corte de faro fica assim: ?K, ?A,
?K, ?A, ?K, ?A e ?K.
Faça um programa que dada uma quantidade de cartas e a posição de uma carta, calcule e escreva a
posição da mesma carta após o corte de Faro.
Entradas:
1. Quantidade de cartas e
2. posição inicial da carta (a primeira carta está na posição zero, a segunda na posição 1 e assim
por diante).
Saídas:
1. A posição da carta após o corte de Faro (as posições começam em zero).*/

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
