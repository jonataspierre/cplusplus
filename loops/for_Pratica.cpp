#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	// Somar os n�meros de 1 a 10

	int soma = 0; // Vari�vel acumuladora

	for (int i = 1; i <= 10; i++)
	{
		cout << "valor de i: " << i << endl;
		cout << "valor de soma: " << soma << endl;
		cout << "c�lculo da soma ser�: " << soma << " + " << i << endl;
		soma = soma + i;
		cout << "valor da soma parcial: " << soma << endl;
		cout << "pr�ximo..." << endl;
		cout << "\n";
		
		Sleep(2000);
	}
	
	cout << "A soma dos n�meros  de 1 a 10 �: " << soma << endl;
	
	cout << "\n";
	
	system("pause");
	return 0;
}