/*As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem
compradas pelo menos 12. Escreva um programa que leia o número de maçãs compradas, calcule e
escreva o custo total da compra*/

#include <iostream>

using namespace std;

int main () {
	int quantidadeMacan;
	double custoTotal, macaPreco = 1.30, desconto = 1.00;
	
	cout << "Digite a quantidade de macan compradas: ";
	cin >> quantidadeMacan;
	
	if (quantidadeMacan < 12) {
		custoTotal = quantidadeMacan * macaPreco;
	} else {
		custoTotal = quantidadeMacan * desconto;
	}
	
	cout << "Custo total: R$ " << custoTotal << endl;
	
	return 0;
}
