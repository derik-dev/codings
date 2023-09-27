/*Fa�a um programa que a partir de duas datas informe qual � a data que ocorre depois da outra (a
maior data). As datas s�o compostas por tr�s valores inteiros representando, o dia, o m�s e o ano,
nessa ordem, e cada dado deve ser recebido em uma linha.
Entradas:
1. N�mero inteiro representando o dia da primeira data.
2. N�mero inteiro representando o m�s da primeira data.
3. N�mero inteiro representando o ano da primeira data.
4. N�mero inteiro representando o dia da segunda data.
5. N�mero inteiro representando o m�s da segunda data.
6. N�mero inteiro representando o ano da segunda data.
Sa�da:
1. Os tr�s valores que representam a maior data, em uma mesma linha, na ordem: dia, m�s e
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
