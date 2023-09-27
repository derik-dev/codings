/*Seu jogo preferido envolve a atualiza��o de estruturas que demora v�rios minutos. O jogo
informa quantos minutos faltam para terminar a atualiza��o, mas voc� gostaria de saber
exatamente quando � isso para ajustar um alarme.
Fa�a um programa que l� o dia, hora e minuto atual, al�m de uma dura��o em minutos e escreve o
resultado da adi��o da dura��o com o hor�rio atual. Para simplificar, suponha que nunca vai ocorrer
mudan�a de m�s no processamento.
Entradas (suponha cada valor numa linha):
1. o dia do hor�rio atual (inteiro),
2. a hora do hor�rio atual (inteiro entre 0 e 23),
3. o minuto do hor�rio atual (inteiro entre 0 e 59),
4. a dura��o em minutos que a atualiza��o precisa para terminar (inteiro).
Sa�das:
1. O dia, hora e minuto em que a atualiza��o ir� terminar.*/

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
