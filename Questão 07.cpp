/*Elabore um programa que dada a idade de um nadador classifique-o em uma das seguintes
categorias:
? Infantil A = 5 a 7 anos
? Infantil B = 8 a 11 anos
? Juvenil A = 12 a 13 anos
? Juvenil B = 14 a 17 anos
? Adultos = Maiores de 18 anos*/

#include <iostream>

using namespace std;

int main () {
	int idade;
	
	cout << "Digite a idade do nadador: ";
	cin >> idade;
	
	if (idade >= 5 && idade <= 7) {
		cout << "Categoria: Infantil A" << endl;
	} else if (idade >= 8 && idade <= 11) {
		cout << "Categoria: Infantil B" << endl;
	} else if (idade >= 12 && idade <= 13) {
		cout << "Categoria: Juvenil A" << endl;
	} else if (idade >= 14 && idade <= 17) {
		cout << "Categoria: Juvenil B" << endl;
	} else if (idade >= 18) {
		cout << "Categoria: Adultos" << endl;
	} else {
		cout << "Idade fora da categorias" << endl;
	}
	
	return 0;
}
