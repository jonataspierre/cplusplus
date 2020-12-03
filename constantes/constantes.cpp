#include <iostream>
#include "tchar.h"

/*
Constante armazena o valor na mem�ria (se n�o usar como #define) mas eese valor que n�o pode ser alterado


Para usar #define precisa colocar aqui abaixo dos includes, n�o tem ; no final
 #define � uma diretiva de pr�-processador, � apenas um texto que ser� substituido durante o pr�-processamento, sem nenhuma verifica��o
 #define n�o cria nada na mem�ria, igual no caso da const que cria uma regi�o na mem�ria e � acessada
 no exemplo abaixo usando #define, onde tiver o texto numVidas ir� apenas substituir por 10
*/

//#define numVidas 10


using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	
	const int numVidas = 10;
	int TotalDeVidas;
	
	TotalDeVidas = numVidas - 1;
	
	cout << "Total de Vidas: " << TotalDeVidas << "\n";
	cout << "Valor Constante numVias: " << numVidas << "\n";
	cout << "Endere�o de Mem�ria de NUM_VIDAS: " << &numVidas << "\n";
	
	system("PAUSE");

	return 0;

}