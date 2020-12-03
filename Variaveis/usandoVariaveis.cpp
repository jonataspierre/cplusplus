#include <iostream>
#include "locale.h" //(locale.h vem do C, C++ � tchar.h)
#include "tchar.h" //exemplo usando o tchar. para definir a linguagem (est� comentado abaixo)

using namespace std; //using namespace std para n�o precisar ficar identificando no c�digo

int main()
{	
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem para portugu�s (locale.h) para considerar os acentos 
	//_tsetlocale(LC_ALL, _T("portuguese")); //definindo a linguagem para portugu�s (locale.h) para considerar os acentos 


	int numVidas = 5;
	int score = 1350;
	
	//exibindo o n�mero de vidas do jogar e pontua��o iniciais
	cout << "****** In�cio do Jogo **************" << endl;
	cout << "Vidas Jogador: " << numVidas << endl;
	cout << "Pontua��o: " << score << endl;
	
	cout << "******************************************" << endl;

	//exibindo o endere�o na mem�ria e tamanho das vari�veis a t�tulo informativo apenas	
	cout << "Endere�o de numVidas na mem�ria: " << &numVidas << endl;
	cout << "Tamanho da vari�vel numVidas: " << sizeof(numVidas) << endl;
	cout << "Endere�o de score na mem�ria: " << &score << endl;
	cout << "Tamanho da vari�vel score: " << sizeof(score) << endl;
	
	
	cout << "******************************************" << endl;
	
	//painel s� para exibir mesmo um novo resultado para a vida e score 
	cout << "****** Durante o Jogo - Perde 1 de vida e soma 150 pontos**************" << endl;

	numVidas = numVidas - 1;
	score = score + 150;	
	cout << "Vidas Jogador: " << numVidas << endl;
	cout << "Pontua��o: " << score << endl;
	cout << "******************************************" << endl;

	system("pause");
	return(0);
}