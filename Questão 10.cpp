/*Crie um programa que leia a hora de início e a hora de fim de um jogo de Xadrez (considere
apenas horas inteiras, sem os minutos) e calcule a duração do jogo em horas, sabendo-se que o
tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no
dia seguinte.*/

#include <iostream>

using namespace std;

int main () {
    int horaInicial, horaFinal, tempo;
    
    cout << "Digite a hora do incio do jogo: ";
    cin >> horaInicial;
    
    cout << "Digite a hora de fim de jogo: ";
    cin >> horaFinal;
    
    if (horaFinal < horaInicial) {
        cout << "Terminou no outro dia";
    } else {
        cout << "Terminou no mesmo dia";
    }
    
    return 0;
}