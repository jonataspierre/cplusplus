#include <iostream>
#include <Windows.h>
#include <locale.h>

using namespace std;

// fazer uma calculado simples

char exibiMenu();
int calculo(int, int, char);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int numDig1, numDig2;
	char escolhaOperacao;

	cout << "Informe o primeiro n�mero: ";
	cin >> numDig1;
	cout << "Informe o segundo n�mero: ";
	cin >> numDig2;

	cout << endl;	
	
	escolhaOperacao = exibiMenu();

	cout << "\nO resultado do c�lculo foi: " << calculo(numDig1, numDig2, escolhaOperacao) << endl;

	cout << endl;
	
	system("pause");
	return 0;
}

char exibiMenu()
{
	char operadorEscolhido;
	bool operadorErrado(true);
	
	do
	{		
		cout <<
			"\n+ para adi��o"
			"\n- para subtra��o"
			"\n* para multiplica��o"
			"\n/ para divis�o\n"
			"\nInforme qual opera��o deseja realizar : ";
		cin >> operadorEscolhido;

		switch (operadorEscolhido)
		{
		case '+':
			operadorErrado = false;
			break;
		case '-':
			operadorErrado = false;
			break;
		case '*':
			operadorErrado = false;
			break;
		case '/':
			operadorErrado = false;
			break;
		default:
			Sleep(1000);
			cout << "\n********************************************\n";
			cout << "\nOperador inv�lido, informe novamente.\n";
			cout << "\n********************************************\n";
			Sleep(1000);
			break;
		}
	} while (operadorErrado);	

	return operadorEscolhido;
}

int calculo(int num1, int num2, char operador)
{
	switch (operador)
	{
	case '+':
		return (num1 + num2);
	case '-':
		return (num1 - num2);
	case '*':
		return (num1 * num2);
	case '/':
		return (num1 / num2);
	}

	return 0;
}
