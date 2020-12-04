#include <iostream>
#include <tchar.h>

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	
	int Num1, Num2;

	cout << "Num1 = 10 e Num2 = 20" << endl;

	cout << "\n*****************************************************" << endl;
	
	Num1 = 10;
	Num2 = 20;
	//Num1 = Num2++;	
	/* Se ++ vier depois da vari�vel devemos ler da seguinte forma:
	Num1 pegue logo o valor da vari�vel Num2 e somente depois da instru��o incremente em 1 o valor de Num2
	Logo Num1 = Num2++ � equivalente as seguintes instru��es:
	Num1 = Num2;
	Num2 = Num2 + 1;
	Chamamos isso de P�s-Fixado
	Assim se o ++ ou -- estiver ap�s a vari�vel ela somente ser� incrementada ap�s a execu��o da instru��o
	*/
	Num1 = Num2++;	
	cout << "(Num1 = Num2++) Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";

	cout << "\n*****************************************************" << endl;
	
	Num1 = 10;
	Num2 = 20;
	//Num1 = ++Num2;
	/* Se ++ vier antes da vari�vel devemos ler da seguinte forma:
	Num2 incremente em 1 ao seu valor e depois atribua a outra vari�vel num1
	Logo Num1 = ++Num2 � equivalente as seguintes instru��es:
	Num2 = Num2 + 1;
	Num1 = Num2;
	Chamamos isso de Pr�-Fixado
	*/
	Num1 = ++Num2;	
	cout << "(Num1 = ++Num2) Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	
	cout << "\n*****************************************************" << endl;

	Num1 = 10;
	Num2 = 20;
	//Num1 = Num1++;
	/*Num1 recebe o valor de Num1 e depois desta instru��o o valor de Num1 ser� incrementado na mem�ria em uma unidade
	Logo Num1 = Num1++ � equivalente as seguintes instru��es:
	Num1 = Num1;
	Num1 = Num1 + 1;
	*/
	Num1 = Num1++;
	cout << "(Num1 = Num1++) Valor Atual de Num1: " << Num1 << "\n";
	
	cout << "\n*****************************************************" << endl;

	Num1 = 10;
	Num2 = 20;
	//Num1 = ++Num1;
	/*Num1 ser� incrementado na mem�ria em uma unidade e depois ir� atribuir ao valor de Num1
	Logo Num1 = ++Num1 � equivalente as seguintes instru��es:
	Num1 = Num1 + 1;
	Num1 = Num1;	
	*/
	Num1 = ++Num1;
	cout << "(Num1 = ++Num1) Valor Atual de Num1: " << Num1 << "\n";

	cout << "\n*****************************************************" << endl;	

	Num1 = ++Num2 + Num1++;
	cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";				
	Num2 = ++Num2;
	cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";	
	Num2 = ++Num2 + Num2--;
	cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num1 = --Num1 - --Num2;
	cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	Num2 = --Num2 + Num1--;
	cout << "Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	
	system("PAUSE");
	return 0;
}