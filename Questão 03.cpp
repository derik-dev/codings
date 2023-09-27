/* Dados tr�s n�meros inteiros que representam comprimentos, verifique se eles podem ser os
comprimentos dos lados de um tri�ngulo e, se forem, verifique se � um tri�ngulo equil�tero,
is�sceles ou escaleno. Considere que:
- O comprimento de cada lado de um tri�ngulo � menor do que a soma dos outros dois lados.
- Chama-se equil�tero o tri�ngulo que tem 3 lados iguais.
- Denomina-se is�sceles o tri�ngulo que tem o comprimento de dois lados iguais.
- Recebe o nome de escaleno o tri�ngulo que tem os tr�s lados diferentes.
OBS: As classifica��es dos tri�ngulos devem ser escritas em letras min�sculas, sem acentua��o.
*/

#include <iostream>

using namespace std;

int main () {
	int lado1, lado2, lado3;
	
	cout << "Digite o comprimento do primeiro lado: ";
	cin >> lado1;
	
	cout << "Digite o comprimento do segundo lado: ";
	cin >> lado2;
	
	cout << "Digite o comprimento do terceiro lado: ";
	cin >> lado3;
	
	if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
		if (lado1 == lado2 && lado2 == lado3) {
			cout << "equilatero" << endl;
		} else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)  {
			cout << "isosceles" << endl;
		} else {
			cout << "escaleno" << endl;
		}
    } else {
        cout << "nao forma um triangulo" << endl;
    }
    
	return 0;
}
