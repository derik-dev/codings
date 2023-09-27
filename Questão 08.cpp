/* Elabore programa que leia as variáveis C e N, respectivamente código e número de horas
trabalhadas de um operário. E calcule o salário sabendo que ele ganha R$10,00 por hora. Quando o
número de horas exceder a 50, calcule o excesso de pagamento armazenando-o na variável E, caso
contrário, zerar tal variável. A hora excedente de trabalho vale R$20,00. No final do processamento
imprima o salário total e o salário excedente*/

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
