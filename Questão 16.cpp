/*O gerente de seu banco te ligou e ofereceu dois tipos de investimento que, segundo ele, seriam
uma boa opção em tempos de crise financeira. Para ter mais segurança da sua decisão, você pediu a
ele a taxa de juros (rendimento) mensal e a taxa de administração (valor fixo) de cada um dos
investimentos para que pudesse tomar a sua decisão fazendo calculando o quanto ganharia de
acordo com o que pretende investir.
As opções de investimento do banco são dadas abaixo.
Tipo Descrição Rendimento Taxa
1 Poupança 0,5% isento
2 Renda fixa 3% R$ 30,00*
De posse dos dados você decidiu fazer um programa que faça os cálculos que você precisa. Seu
programa receberá o código do tipo de investimento (1 ou 2) e o valor inicial de investimento e
deverá calcular o quanto terá na conta após o primeiro mês de rendimento. O rendimento é relativo
ao investimento inicial.
Entradas:
1. Tipo de investimento (1 ou 2).
2. Valor do investimento inicial (número real).
Saída:
1. Valor na conta após o primeiro mês de rendimento.
OBS: Como foi você mesmo quem fez o programa, você digitará apenas os valores 1 ou 2 para o tipo de
investimento.*/

#include <iostream>

using namespace std;

int main () {
	int tipoInvestimento;
	double valorInicial;
	
	cout << "Digite o tipo de investimento (1 ou 2): ";
	cin >> tipoInvestimento;
	
	cout << "Dgite o valor do investimento: R$";
	cin >> valorInicial;
	
	double rendimento = 0.0;
	double valorFinal;
	
	switch (tipoInvestimento) {
		case 1: {
			rendimento = valorInicial * 0.005;
			valorFinal = valorInicial + rendimento;
			cout << "Conta (poupanca) rendimento no mes: " << valorFinal << endl;
			break;
		}
		
		case 2: {
			rendimento = (valorInicial * 0.03) - 30;
			valorFinal = valorInicial + rendimento;
			cout << "Conta (Renda fixa) rendimento no mes: " << valorFinal  << endl;
			break;
		}
	}
	
	return 0;
}
