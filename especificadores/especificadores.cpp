#include <iostream>
#include <tchar.h>
#include <string>

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	/* Especificadores:

	%d  = Inteiro (int).
	%f	= Real (serve tanto para float como para double) - ($.2f o .x indica a quantidade de casas decimais depois da v�gula)
	%lf = Double. (l-long , f-float - lf)
	%c	= Caractere: imprime o caractere que tem o c�digo ASCII correspondente ao valor dado.
	%s	= Sequ�ncia de caracteres (string, em ingl�s).
	*/	

	//Voc� pode usar ( ) para iniciar vari�veis com valores literais
	//{  } � inicializa��o uniforme, permite tanto iniciar tanto valores literais (int, float, caractere) quanto valores escalares, vetores, enums etc.
	
	int NumeroInteiro{ 12 };
	float NumeroReal{ 12.47 };
	char Caractere{ 'j' };
	
	//String � um cadeia de caracteres, � um texto e deve estar entre aspas duplas "texto da string"	
	//Para declarar uma string usamos string
	string Texto;//{ "Vou Aprender C++ e descobrir o lado sombrio da for�a!" };
	Texto = "Vou Aprender C++ e descobrir o lado sombrio da for�a!";

	cout << "Texto da String: " << Texto << "\n"; //utilizando o cout para exibir a string que n�o tem/precisa de especificadores
	
	cout << "\n**************************************************" << endl;

	//para usar os especificadores utilizamos o printf("texto que contenha o especificador", c�digo do especificador)
	printf("\nValor Inteiro: %d \n", NumeroInteiro);
	printf("Valor Real: %.2f \n", NumeroReal);
	printf("Caractere: %c \n", Caractere);
	printf("Texto: %s \n", Texto.c_str());

	//para usar mais de um especificador, precisa colocar eles separados por v�rgula na ordem certa
	printf("\nValor Inteiro: %d e Real: %.2f \n", NumeroInteiro, NumeroReal);

	printf("\nO Valor do Caractere Digitado: %c na Tabela ASCII �: %d \n", Caractere, Caractere);	

	cout << "\n**************************************************" << endl;
	
	system("PAUSE");
	return 0;
}