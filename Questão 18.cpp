/*Faça um programa que a partir de duas datas informe qual é a data que ocorre depois da outra (a
maior data). As datas são compostas por três valores inteiros representando, o dia, o mês e o ano,
nessa ordem, e cada dado deve ser recebido em uma linha.
Entradas:
1. Número inteiro representando o dia da primeira data.
2. Número inteiro representando o mês da primeira data.
3. Número inteiro representando o ano da primeira data.
4. Número inteiro representando o dia da segunda data.
5. Número inteiro representando o mês da segunda data.
6. Número inteiro representando o ano da segunda data.
Saída:
1. Os três valores que representam a maior data, em uma mesma linha, na ordem: dia, mês e
ano.*/

#include <iostream>
using namespace std;

int main () {
	int dia1, mes1, ano1;
	int dia2, mes2, ano2;
	
	cout << "Digite o dia da primeira data: ";
	cin >> dia1;
	
	cout << "Digite o mes da primeira data: ";
	cin >> mes1;
	
	cout << "Digite o ano da primeira data: ";
	cin >> ano1;
	
	cout << "--------------------------------" << endl; // so pra ficar bunito haha
	
	cout << "Digite o dia da segunda data: ";
	cin >> dia2;
	
	cout << "Digite o mes da segunda data: ";
	cin >> mes2;
	
	cout << "Digite o ano da segunda data: ";
	cin >> ano2;
	
	cout << "--------------------------------" << endl; // so pra ficar bunito haha
	
	int data1 = ano1 * 10000 + mes1 * 100 + dia1;
    int data2 = ano2 * 10000 + mes2 * 100 + dia2;
    
    if (data1 > data2) {
    	cout << "A maior data e: " << dia1 << "/" << mes1 << "/" << ano2 << endl;
	} else {
		cout << "A maior data e: " << dia2 << "/" << mes2 << "/" << ano2 << endl;
	}
	
	return 0;
}
