#include <iostream>
#include <Windows.h>
#include <locale.h>

using namespace std;

// Prot�tipo - Declarar a fun��o quando o c�digo da fun��o est� em outro lugar ou abaixo

bool isPar(int num); // se o c�digo da fun��o estiver abaixo de onde ser� 'chamada', dever� declarar o cabe�alho da fun��o com ; no final

int main()
{
	setlocale(LC_ALL, "portuguese");

	int numDig;

	cout << "Digite um n�mero: ";
	cin >> numDig;

	cout << endl;

	if (isPar(numDig)) {
		cout << "O n�mero informado � par\n";
	}		
	else {
		cout << "O n�mero informado � impar\n";
	}		

	cout << endl;

	system("pause");
	return 0;
}

bool isPar(int num)
{
	if (num % 2 == 0) {
		return true;
	}
	
	return false;
}