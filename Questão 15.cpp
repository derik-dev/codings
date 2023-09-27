/*Seu jogo preferido envolve a atualização de estruturas que demora vários minutos. O jogo
informa quantos minutos faltam para terminar a atualização, mas você gostaria de saber
exatamente quando é isso para ajustar um alarme.
Faça um programa que lê o dia, hora e minuto atual, além de uma duração em minutos e escreve o
resultado da adição da duração com o horário atual. Para simplificar, suponha que nunca vai ocorrer
mudança de mês no processamento.
Entradas (suponha cada valor numa linha):
1. o dia do horário atual (inteiro),
2. a hora do horário atual (inteiro entre 0 e 23),
3. o minuto do horário atual (inteiro entre 0 e 59),
4. a duração em minutos que a atualização precisa para terminar (inteiro).
Saídas:
1. O dia, hora e minuto em que a atualização irá terminar.*/

#include <iostream>

using namespace std;

int main () {
	int dia, hora, minuto, duracao;
	
	cout << "Digite o dia do horario atual: ";
	cin >> dia;
	
	cout << "Digite a hora atual (entre 0 e 23): ";
	cin >> hora;
	
	cout << "Digite o minuto atual (entre 0 e 59): ";
	cin >> minuto;
	
	cout << "Digite a duracao da atualizacao em minutos: ";
	cin >> duracao;
	
	minuto += duracao;
	
	if (minuto > 59) {
		hora += minuto / 60;
		minuto %= 60;
	}
	
	if (hora > 23) {
		dia += hora / 24;
		hora %= 24;
	}
	
	cout << dia << " dia(s), " << hora << " hora(s) e " << minuto << " minuto(s)" << endl;
	
	return 0;
}
