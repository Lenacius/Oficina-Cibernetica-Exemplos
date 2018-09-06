#pragma once

#include <iostream>

using namespace std;

void Troca(int *_var1, int *_var2);

int main() {

	// AQUI SÃO DECLARADAS AS DUAS VARIAVEIS QUE IREMOS FAZER TROCAR OS VALORES
	int var1 = 5;
	int var2 = 3;

	cout << "Valores iniciais: (var1) " << var1 << " - (var2) " << var2 << endl;

	// CHAMAMOS A FUNÇÃO < Troca > QUE, COM O SIMBOLO < & > INFORMA QUE ESTAMOS PASSANDO
	// OS ENDEREÇOS COMO PARAMETROS E NÃO SEUS VALORES RESPECTIVAMENTE
	Troca(&var1, &var2);

	cout << "Valores finais: (var1) " << var1 << " - (var2) " << var2 << endl;

	cin >> var1; // ISTO É APENAS PARA SER POSSÍVEL VIZUALIZAR O RESULTADO

	return 0;

}

void Troca(int *_var1, int *_var2) {

	// CRIAMOS UMA VARIAVEL PARA EFETUAR A TROCA JA QUE COM var1 = var2 IRIAMOS PERDER IRFORMAÇÃO
	int troca = 0;

	// REALIZAMOS A TROCA ENTÃO ALTERANDO O VALOR QUE O PONTEIRO ESTA APONTANDO UTILIZANDO
	// < * > NA FRENTE DA VARIÁVEL E NÃO SEU ENDEREÇO SE USASSEMOS SEM
	troca = *_var1;
	*_var1 = *_var2;
	*_var2 = troca;

}

/**************************************************************************************************
									NOTAS SOBRE O CÓDIGO

	NOTEM QUE SE DECLARAMOS O FUNÇÃO COMO < void > JÁ QUE NÃO RETORNAMOS VALOR ALGUM E SIM ALTERAMOS
VALORES JÁ EXISTENTES, ISTO É MAIS UMA VANTAGEM DE PONTEIROS. QUANDO DECLARAMOS UM PONTEIRO ELE OCUPA
APENAS UM BYTE NA MEMÓRIA ENQUANTO E QUANDO VARIÁVEIS DE TIPOS QUAISQUERES ELAS IRAM OCUPAR 8, 16, 32
BYTES.
	QUANDO OS PARAMETROS DE UMA FUNÇÃO NÃO SÃO PONTEIROS, ESTAMOS OCUPANDO A MEMÓRIA COM !CÓPIAS! DAS
VARIÁVEIS PASSADAS COMO PARAMETRO, ISSO FAZ COM QUE MAIS MEMÓRIA SEJA OCUPADA. SEM FALAR QUE COMO DITO
ANTERIORMENTE, COM PONTEIROS CONSEGUIMOS ALTERAR OS DOIS VALORES DE MANEIRA, ACHO, MAIS EFICIENTE DO
QUE SE FOSSEMOS RETORNAR POR EXEMPLO ARRAYS, MATRIZES OU STRUCTS INTEIRAS.

**************************************************************************************************/