#include <iostream>
#include <tchar.h>

using namespace std;

//se na função tivesse declara só como int num1, seria passado como argumento o valor contido dentro da variável
//como passou a referencia, num1 agora rerefenciará a variável que for passada como argumento
//void trocaNumeroRef(int num1, int num2); //exemplo quando um argumento é passado sem referencia
void trocaNumeroRef(int& num1, int& num2);

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int numero1{ 12 };
	int numero2{ 47 };

	cout << "\nValor numero1 antes da troca: " << numero1 << endl;
	cout << "\nValor numero2 antes da troca: " << numero2 << endl;

	trocaNumeroRef(numero1, numero2); //no caso do referenciamento, aqui é atribuido qual variável será referenciada

	cout << "\nValor numero1 depois da troca: " << numero1 << endl;
	cout << "\nValor numero2 depois da troca: " << numero2 << endl;

	cout << "\n";

	system("pause");
	return 0;
}

//void trocaNumeroRef(int num1, int num2) //exemplo quando o argumento é passado sem referencia
void trocaNumeroRef(int& num1, int& num2)
{
	int temp{ num1 };

	num1 = num2;
	num2 = temp;
}