#pragma once

#include <iostream>

using namespace std;

void Troca(int *_var1, int *_var2);

int main() {

	// AQUI S�O DECLARADAS AS DUAS VARIAVEIS QUE IREMOS FAZER TROCAR OS VALORES
	int var1 = 5;
	int var2 = 3;

	cout << "Valores iniciais: (var1) " << var1 << " - (var2) " << var2 << endl;

	// CHAMAMOS A FUN��O < Troca > QUE, COM O SIMBOLO < & > INFORMA QUE ESTAMOS PASSANDO
	// OS ENDERE�OS COMO PARAMETROS E N�O SEUS VALORES RESPECTIVAMENTE
	Troca(&var1, &var2);

	cout << "Valores finais: (var1) " << var1 << " - (var2) " << var2 << endl;

	cin >> var1; // ISTO � APENAS PARA SER POSS�VEL VIZUALIZAR O RESULTADO

	return 0;

}

void Troca(int *_var1, int *_var2) {

	// CRIAMOS UMA VARIAVEL PARA EFETUAR A TROCA JA QUE COM var1 = var2 IRIAMOS PERDER IRFORMA��O
	int troca = 0;

	// REALIZAMOS A TROCA ENT�O ALTERANDO O VALOR QUE O PONTEIRO ESTA APONTANDO UTILIZANDO
	// < * > NA FRENTE DA VARI�VEL E N�O SEU ENDERE�O SE USASSEMOS SEM
	troca = *_var1;
	*_var1 = *_var2;
	*_var2 = troca;

}

/**************************************************************************************************
									NOTAS SOBRE O C�DIGO

	NOTEM QUE SE DECLARAMOS O FUN��O COMO < void > J� QUE N�O RETORNAMOS VALOR ALGUM E SIM ALTERAMOS
VALORES J� EXISTENTES, ISTO � MAIS UMA VANTAGEM DE PONTEIROS. QUANDO DECLARAMOS UM PONTEIRO ELE OCUPA
APENAS UM BYTE NA MEM�RIA ENQUANTO E QUANDO VARI�VEIS DE TIPOS QUAISQUERES ELAS IRAM OCUPAR 8, 16, 32
BYTES.
	QUANDO OS PARAMETROS DE UMA FUN��O N�O S�O PONTEIROS, ESTAMOS OCUPANDO A MEM�RIA COM !C�PIAS! DAS
VARI�VEIS PASSADAS COMO PARAMETRO, ISSO FAZ COM QUE MAIS MEM�RIA SEJA OCUPADA. SEM FALAR QUE COMO DITO
ANTERIORMENTE, COM PONTEIROS CONSEGUIMOS ALTERAR OS DOIS VALORES DE MANEIRA, ACHO, MAIS EFICIENTE DO
QUE SE FOSSEMOS RETORNAR POR EXEMPLO ARRAYS, MATRIZES OU STRUCTS INTEIRAS.

**************************************************************************************************/