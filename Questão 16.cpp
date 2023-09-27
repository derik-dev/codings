/*O gerente de seu banco te ligou e ofereceu dois tipos de investimento que, segundo ele, seriam
uma boa op��o em tempos de crise financeira. Para ter mais seguran�a da sua decis�o, voc� pediu a
ele a taxa de juros (rendimento) mensal e a taxa de administra��o (valor fixo) de cada um dos
investimentos para que pudesse tomar a sua decis�o fazendo calculando o quanto ganharia de
acordo com o que pretende investir.
As op��es de investimento do banco s�o dadas abaixo.
Tipo Descri��o Rendimento Taxa
1 Poupan�a 0,5% isento
2 Renda fixa 3% R$ 30,00*
De posse dos dados voc� decidiu fazer um programa que fa�a os c�lculos que voc� precisa. Seu
programa receber� o c�digo do tipo de investimento (1 ou 2) e o valor inicial de investimento e
dever� calcular o quanto ter� na conta ap�s o primeiro m�s de rendimento. O rendimento � relativo
ao investimento inicial.
Entradas:
1. Tipo de investimento (1 ou 2).
2. Valor do investimento inicial (n�mero real).
Sa�da:
1. Valor na conta ap�s o primeiro m�s de rendimento.
OBS: Como foi voc� mesmo quem fez o programa, voc� digitar� apenas os valores 1 ou 2 para o tipo de
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
