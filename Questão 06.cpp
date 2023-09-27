/*Faça um programa que leia o nome de 2 times e o número de gols marcados na partida (para cada
time). Escreva na tela o nome do vencedor. Caso não haja vencedor deverá ser impressa a palavra
EMPATE.*/

#include <iostream>

using namespace std;

int main () {
	string nomeTime1, nomeTime2;
	int golsTime1, golsTime2;
	
	cout << "Digite o nome do pirmeiro time: ";
	cin >> nomeTime1;
	
	cout << "Digite o nome do segundo time: ";
	cin >> nomeTime2;
	
	cout << "Digite os gols do primeiro time: ";
	cin >> golsTime1;
	
	cout << "Digite os gols do segundo time: ";
	cin >> golsTime2;
	
	if (golsTime1 > golsTime2) {
		cout << "O vencedor e: " << nomeTime1 << endl;
	} else if (golsTime1 == golsTime2) {
		cout << "EMPATE" << endl;
	} else {
		cout << "O vencedor e: " << nomeTime2 << endl;
	}
	
	return 0;
}
