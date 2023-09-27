/* Dados três números inteiros que representam comprimentos, verifique se eles podem ser os
comprimentos dos lados de um triângulo e, se forem, verifique se é um triângulo equilátero,
isósceles ou escaleno. Considere que:
- O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
- Chama-se equilátero o triângulo que tem 3 lados iguais.
- Denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais.
- Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
OBS: As classificações dos triângulos devem ser escritas em letras minúsculas, sem acentuação.
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
