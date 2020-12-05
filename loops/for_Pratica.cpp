#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	// Somar os números de 1 a 10

	int soma = 0; // Variável acumuladora

	for (int i = 1; i <= 10; i++)
	{
		cout << "valor de i: " << i << endl;
		cout << "valor de soma: " << soma << endl;
		cout << "cálculo da soma será: " << soma << " + " << i << endl;
		soma = soma + i;
		cout << "valor da soma parcial: " << soma << endl;
		cout << "próximo..." << endl;
		cout << "\n";
		
		Sleep(2000);
	}
	
	cout << "A soma dos números  de 1 a 10 é: " << soma << endl;
	
	cout << "\n";
	
	system("pause");
	return 0;
}