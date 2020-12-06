#include <iostream>
#include <Windows.h>
#include <locale.h>

using namespace std;

// Protótipo - Declarar a função quando o código da função está em outro lugar ou abaixo

bool isPar(int num); // se o código da função estiver abaixo de onde será 'chamada', deverá declarar o cabeçalho da função com ; no final

int main()
{
	setlocale(LC_ALL, "portuguese");

	int numDig;

	cout << "Digite um número: ";
	cin >> numDig;

	cout << endl;

	if (isPar(numDig)) {
		cout << "O número informado é par\n";
	}		
	else {
		cout << "O número informado é impar\n";
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