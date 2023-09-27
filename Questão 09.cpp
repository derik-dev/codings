/*Crie um programa que leia o ano atual e o ano de nascimento de uma pessoa e então, escreva
uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em
que a pessoa nasceu)*/

#include <iostream>

using namespace std;

int main () {
    int anoAtual, anoNascimento;
    
    cout << "Digite o ano atual: ";
    cin >> anoAtual;
    
    cout << "Digite o ano de nascimento: ";
    cin >> anoNascimento;
    
    int idade = anoAtual - anoNascimento;
    
    if (idade >= 16) {
        cout << "Voce pode votar" << endl;
    } else {
        cout << "Voce nao pode votar" << endl;
    }
    
    return 0;
}