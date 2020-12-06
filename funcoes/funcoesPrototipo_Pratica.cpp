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

	cout << "Informe o primeiro número: ";
	cin >> numDig1;
	cout << "Informe o segundo número: ";
	cin >> numDig2;

	cout << endl;	
	
	escolhaOperacao = exibiMenu();

	cout << "\nO resultado do cálculo foi: " << calculo(numDig1, numDig2, escolhaOperacao) << endl;

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
			"\n+ para adição"
			"\n- para subtração"
			"\n* para multiplicação"
			"\n/ para divisão\n"
			"\nInforme qual operação deseja realizar : ";
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
			cout << "\nOperador inválido, informe novamente.\n";
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
