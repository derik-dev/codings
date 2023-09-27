/* Elabore programa que leia as vari�veis C e N, respectivamente c�digo e n�mero de horas
trabalhadas de um oper�rio. E calcule o sal�rio sabendo que ele ganha R$10,00 por hora. Quando o
n�mero de horas exceder a 50, calcule o excesso de pagamento armazenando-o na vari�vel E, caso
contr�rio, zerar tal vari�vel. A hora excedente de trabalho vale R$20,00. No final do processamento
imprima o sal�rio total e o sal�rio excedente*/

#include <iostream>

using namespace std;

int main () {
	int codigo, horas;
	double salarioTotal;
	double salarioExcedente;
	
	cout << "Digite o codigo do operario: ";
	cin >> codigo;
	
	cout << "Digite o numero de horas trabalhadas: ";
	cin >> horas;
	
	double valorHora = 10.00;
	
	if (horas > 50) {
		salarioTotal = 50 * valorHora;
		salarioExcedente = (horas - 50) * 20;
	} else {
		salarioTotal = horas * valorHora;
	}
	
	cout << "Salario total: R$" << salarioTotal << endl;
	cout << "Salario excedente: R$" << salarioExcedente << endl;
	
	return 0;
}
