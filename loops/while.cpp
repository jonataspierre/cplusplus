#include <iostream>
#include <tchar.h>
#include <string>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));


	// while a verifica��o vem no in�cio do loop, enquanto a condi��o for verdadeira ele repete a instru��o at� ser falsa e assim sai do loop
	// enquanto ... faz ...
		
	int i{0};

	while (i <= 50) //s� entra no loop se for verdadeira e fica at� ser falsa
	{
		if(i % 2 == 0) // exibir os n�meros pares de 0 a 50 pelo resto
		{
			cout << i << endl; //exibe na tela
		}		
		
		i++;
	}

	
	cout << "\n";
	cout << "Parab�ns\n";
	cout << "\n";
	
	system("pause");
	return 0;
}