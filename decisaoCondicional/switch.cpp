#include <iostream>
#include <tchar.h>
#include <string>

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Num01, Num02;
	char Operacao;

	cout << "\nDigite o primeiro número: ";
	cin >> Num01;
	cout << "\nDigite o segundo número: ";
	cin >> Num02;

	cout << "\nQual operação deseja efetuar? \n+ Adição \n- Subtração \n* Multiplicação \n/ Divisão \n";
	cout << "\nDigite sua opção: ";
	cin >> Operacao;

	
	// o switch só funciona para int (integer), no caso do char funciona porque pega o código(número) da tabela ASCII
	switch (Operacao)
	{
	case '+':
		cout << "\nA soma dos números é: " << Num01 + Num02 << endl;
		break;
	case '-': 
		cout << "\nA subtração dos números: " << Num01 - Num02 << endl;
		break;
	case '*':
		cout << "\nA multiplicação dos números é: " << Num01 * Num02 << endl;
		break;
	case '/':
		cout << "\nA divisão dos números é: " << Num01 / Num02 << endl;
		break;
	default:
		cout << "\nVocê não digitou um operador válido." << endl;
		break;
	}

	cout << "\n";

	system("pause");//	
	return 0;
}