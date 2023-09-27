/*Uma fruteira está vendendo frutas com a seguinte tabela de preços:
Até 5Kg Acima de 5Kg
Morango R$ 2,50 por Kg R$ 2,20 por Kg
Maçã R$ 1,80 por Kg R$ 1,50 por Kg.
Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$25,00,
receberá ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade
(em Kg) de morangos e a quantidade (em Kg) de maçãs adquiridas e escreva o valor a ser pago pelo
cliente.*/

#include <iostream>

using namespace std;

int main () {
	float morangoKG, macaKG, valorTotal, valorDesconto;
	
	cout << "Digite quantidade (em Kg) de morangos: ";
	cin >> morangoKG;
	
	cout << "Digite quantidade (em Kg) de macans: ";
	cin >> macaKG;
	
	float precoMorango, precoMaca;
	
	if (morangoKG <= 5) {
		precoMorango = 2.50;
	} else {
		precoMorango = 2.20;
	}
	
	if (macaKG <= 5) {
		precoMaca = 1.80;
	} else {
		precoMaca = 1.50;
	}
	
	valorTotal = (morangoKG * precoMorango ) + (macaKG * precoMaca);
	
	if ((morangoKG + macaKG) > 8 || valorTotal > 25.00) {
		valorDesconto = valorTotal * 0.10;
		valorTotal -= valorDesconto;
	}
	
	cout << "Valor pago: R$: " << valorTotal << endl;
	
	return 0;
}


