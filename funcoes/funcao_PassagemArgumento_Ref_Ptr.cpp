#include <iostream>
#include <tchar.h>

using namespace std;

//funcão recebendo argumentos com referência e ponteiro
void trocaNumeroPtr(int* num1, int* num2); //ponteiro 
void trocaNumeroRef(int& num1, int& num2); //referencia

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int numero1{ 12 };
	int numero2{ 47 };
	int numero3{ 112 };
	int numero4{ 147 };

	cout << "********* Passagem Argumento Ponteiro ***********\n";
	cout << "\nValor numero1 antes da troca: " << numero1 << endl;
	cout << "\nValor numero2 antes da troca: " << numero2 << endl;

	trocaNumeroPtr(&numero1, &numero2); //ponteiro

	cout << "\nValor numero1 depois da troca: " << numero1 << endl;
	cout << "\nValor numero2 depois da troca: " << numero2 << endl;

	cout << "\n*****************************************************\n";

	cout << "********* Passagem Argumento Referenciamento ***********\n";

	cout << "\nValor numero3 antes da troca: " << numero3 << endl;
	cout << "\nValor numero4 antes da troca: " << numero4 << endl;

	trocaNumeroRef(numero3, numero4); //referenciamento

	cout << "\nValor numero3 depois da troca: " << numero3 << endl;
	cout << "\nValor numero4 depois da troca: " << numero4 << endl;

	cout << "\n";
	system("pause");
	return 0;
}

void trocaNumeroPtr(int* num1, int* num2)
{
	int temp{ *num1 };

	*num1 = *num2;
	*num2 = temp;
}

void trocaNumeroRef(int& num1, int& num2)
{
	int temp{ num1 };

	num1 = num2;
	num2 = temp;
}
