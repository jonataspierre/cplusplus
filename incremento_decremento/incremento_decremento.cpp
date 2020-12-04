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
	/* Se ++ vier depois da variável devemos ler da seguinte forma:
	Num1 pegue logo o valor da variável Num2 e somente depois da instrução incremente em 1 o valor de Num2
	Logo Num1 = Num2++ é equivalente as seguintes instruções:
	Num1 = Num2;
	Num2 = Num2 + 1;
	Chamamos isso de Pós-Fixado
	Assim se o ++ ou -- estiver após a variável ela somente será incrementada após a execução da instrução
	*/
	Num1 = Num2++;	
	cout << "(Num1 = Num2++) Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";

	cout << "\n*****************************************************" << endl;
	
	Num1 = 10;
	Num2 = 20;
	//Num1 = ++Num2;
	/* Se ++ vier antes da variável devemos ler da seguinte forma:
	Num2 incremente em 1 ao seu valor e depois atribua a outra variável num1
	Logo Num1 = ++Num2 é equivalente as seguintes instruções:
	Num2 = Num2 + 1;
	Num1 = Num2;
	Chamamos isso de Pré-Fixado
	*/
	Num1 = ++Num2;	
	cout << "(Num1 = ++Num2) Valor Atual de Num1: " << Num1 << " e " << "Num2: " << Num2 << "\n";
	
	cout << "\n*****************************************************" << endl;

	Num1 = 10;
	Num2 = 20;
	//Num1 = Num1++;
	/*Num1 recebe o valor de Num1 e depois desta instrução o valor de Num1 será incrementado na memória em uma unidade
	Logo Num1 = Num1++ é equivalente as seguintes instruções:
	Num1 = Num1;
	Num1 = Num1 + 1;
	*/
	Num1 = Num1++;
	cout << "(Num1 = Num1++) Valor Atual de Num1: " << Num1 << "\n";
	
	cout << "\n*****************************************************" << endl;

	Num1 = 10;
	Num2 = 20;
	//Num1 = ++Num1;
	/*Num1 será incrementado na memória em uma unidade e depois irá atribuir ao valor de Num1
	Logo Num1 = ++Num1 é equivalente as seguintes instruções:
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