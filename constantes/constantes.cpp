#include <iostream>
#include "tchar.h"

/*
Constante armazena o valor na memória (se não usar como #define) mas eese valor que não pode ser alterado


Para usar #define precisa colocar aqui abaixo dos includes, não tem ; no final
 #define é uma diretiva de pré-processador, é apenas um texto que será substituido durante o pré-processamento, sem nenhuma verificação
 #define não cria nada na memória, igual no caso da const que cria uma região na memória e é acessada
 no exemplo abaixo usando #define, onde tiver o texto numVidas irá apenas substituir por 10
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
	cout << "Endereço de Memória de NUM_VIDAS: " << &numVidas << "\n";
	
	system("PAUSE");

	return 0;

}