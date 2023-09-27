/* Escreva um programa que leia as idades de 2 homens e de 2 mulheres (considere que as idades dos
homens serão sempre diferentes entre si, bem como as das mulheres). Calcule e escreva a soma das
idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo
com a mulher mais velha.*/

#include <iostream>

using namespace std;

int main() {
    int idadeHomem1, idadeHomem2, idadeMulher1, idadeMulher2;

    // Leitura das idades
    cout << "Digite a idade do primeiro homem: ";
    cin >> idadeHomem1;

    cout << "Digite a idade do segundo homem: ";
    cin >> idadeHomem2;

    cout << "Digite a idade da primeira mulher: ";
    cin >> idadeMulher1;

    cout << "Digite a idade da segunda mulher: ";
    cin >> idadeMulher2;

    int homemMaisVelho = (idadeHomem1 > idadeHomem2) ? idadeHomem1 : idadeHomem2;
    int mulherMaisNova = (idadeMulher1 < idadeMulher2) ? idadeMulher1 : idadeMulher2;

    int somaIdades = homemMaisVelho + mulherMaisNova;
    int produtoIdades = idadeHomem2 * idadeMulher1; // Considerando o homem mais novo e a mulher mais velha

    cout << "Soma das idades do homem mais velho com a mulher mais nova: " << somaIdades << endl;
    cout << "Produto das idades do homem mais novo com a mulher mais velha: " << produtoIdades << endl;

    return 0;
}
