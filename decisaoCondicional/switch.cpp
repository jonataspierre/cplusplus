#include <iostream>
#include <tchar.h>
#include <string>

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Num01, Num02;
	char Operacao;

	cout << "\nDigite o primeiro n�mero: ";
	cin >> Num01;
	cout << "\nDigite o segundo n�mero: ";
	cin >> Num02;

	cout << "\nQual opera��o deseja efetuar? \n+ Adi��o \n- Subtra��o \n* Multiplica��o \n/ Divis�o \n";
	cout << "\nDigite sua op��o: ";
	cin >> Operacao;

	
	// o switch s� funciona para int (integer), no caso do char funciona porque pega o c�digo(n�mero) da tabela ASCII
	switch (Operacao)
	{
	case '+':
		cout << "\nA soma dos n�meros �: " << Num01 + Num02 << endl;
		break;
	case '-': 
		cout << "\nA subtra��o dos n�meros: " << Num01 - Num02 << endl;
		break;
	case '*':
		cout << "\nA multiplica��o dos n�meros �: " << Num01 * Num02 << endl;
		break;
	case '/':
		cout << "\nA divis�o dos n�meros �: " << Num01 / Num02 << endl;
		break;
	default:
		cout << "\nVoc� n�o digitou um operador v�lido." << endl;
		break;
	}

	cout << "\n";

	system("pause");//	
	return 0;
}