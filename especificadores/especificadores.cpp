#include <iostream>
#include <tchar.h>
#include <string>

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	/* Especificadores:

	%d  = Inteiro (int).
	%f	= Real (serve tanto para float como para double) - ($.2f o .x indica a quantidade de casas decimais depois da vígula)
	%lf = Double. (l-long , f-float - lf)
	%c	= Caractere: imprime o caractere que tem o código ASCII correspondente ao valor dado.
	%s	= Sequência de caracteres (string, em inglês).
	*/	

	//Você pode usar ( ) para iniciar variáveis com valores literais
	//{  } é inicialização uniforme, permite tanto iniciar tanto valores literais (int, float, caractere) quanto valores escalares, vetores, enums etc.
	
	int NumeroInteiro{ 12 };
	float NumeroReal{ 12.47 };
	char Caractere{ 'j' };
	
	//String é um cadeia de caracteres, é um texto e deve estar entre aspas duplas "texto da string"	
	//Para declarar uma string usamos string
	string Texto;//{ "Vou Aprender C++ e descobrir o lado sombrio da força!" };
	Texto = "Vou Aprender C++ e descobrir o lado sombrio da força!";

	cout << "Texto da String: " << Texto << "\n"; //utilizando o cout para exibir a string que não tem/precisa de especificadores
	
	cout << "\n**************************************************" << endl;

	//para usar os especificadores utilizamos o printf("texto que contenha o especificador", código do especificador)
	printf("\nValor Inteiro: %d \n", NumeroInteiro);
	printf("Valor Real: %.2f \n", NumeroReal);
	printf("Caractere: %c \n", Caractere);
	printf("Texto: %s \n", Texto.c_str());

	//para usar mais de um especificador, precisa colocar eles separados por vírgula na ordem certa
	printf("\nValor Inteiro: %d e Real: %.2f \n", NumeroInteiro, NumeroReal);

	printf("\nO Valor do Caractere Digitado: %c na Tabela ASCII é: %d \n", Caractere, Caractere);	

	cout << "\n**************************************************" << endl;
	
	system("PAUSE");
	return 0;
}