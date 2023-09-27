/*) Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir,
calcule e mostre o valor do aumento e o novo salário.
Salário Percentual de Aumento
Até R$ 300,00 15%
Entre R$ 300,00 e R$ 600,00 (incluso) 10%
Entre R$ 600,00 e R$ 900,00 (incluso) 5%
Acima de R$ 900,00 0%*/

#include <iostream>

using namespace std;

int main () {
	float salarioAtual, novoSalario, aumento;
	
	cout << "Digite o seu salario atual: ";
	cin >> salarioAtual;
	
	if (salarioAtual <= 300) {
		aumento = salarioAtual * 0.15;
	} else if (salarioAtual <= 600) {
		aumento = salarioAtual * 0.10;
	} else if (salarioAtual <= 900) {
		aumento = 0.5;
	} else {
		aumento = 0.0;
	}
	
	novoSalario = salarioAtual + aumento;
	
	cout << "Valor do aumento: R$ " << aumento << endl;
	cout << "Novo salario: R$ " << novoSalario << endl;
	
	return 0;
}
