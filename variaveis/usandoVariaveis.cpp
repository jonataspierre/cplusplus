#include <iostream>
#include "locale.h" //(locale.h vem do C, C++ é tchar.h)
#include "tchar.h" //exemplo usando o tchar. para definir a linguagem (está comentado abaixo)

using namespace std; //using namespace std para não precisar ficar identificando no código

int main()
{	
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem para português (locale.h) para considerar os acentos 
	//_tsetlocale(LC_ALL, _T("portuguese")); //definindo a linguagem para português (locale.h) para considerar os acentos 


	int numVidas = 5;
	int score = 1350;
	
	//exibindo o número de vidas do jogar e pontuação iniciais
	cout << "****** Início do Jogo **************" << endl;
	cout << "Vidas Jogador: " << numVidas << endl;
	cout << "Pontuação: " << score << endl;
	
	cout << "******************************************" << endl;

	//exibindo o endereço na memória e tamanho das variáveis a título informativo apenas	
	cout << "Endereço de numVidas na memória: " << &numVidas << endl;
	cout << "Tamanho da variável numVidas: " << sizeof(numVidas) << endl;
	cout << "Endereço de score na memória: " << &score << endl;
	cout << "Tamanho da variável score: " << sizeof(score) << endl;
	
	
	cout << "******************************************" << endl;
	
	//painel só para exibir mesmo um novo resultado para a vida e score 
	cout << "****** Durante o Jogo - Perde 1 de vida e soma 150 pontos**************" << endl;

	numVidas = numVidas - 1;
	score = score + 150;	
	cout << "Vidas Jogador: " << numVidas << endl;
	cout << "Pontuação: " << score << endl;
	cout << "******************************************" << endl;

	system("pause");
	return(0);
}