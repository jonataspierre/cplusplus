#include <iostream>
#include <tchar.h>
#include <string>

using namespace std;

int main() {

	_tsetlocale(LC_ALL, _T("portuguese"));


	// while a verificação vem no início do loop, enquanto a condição for verdadeira ele repete a instrução até ser falsa e assim sai do loop
	// enquanto ... faz ...
		
	int i{0};

	while (i <= 50) //só entra no loop se for verdadeira e fica até ser falsa
	{
		if(i % 2 == 0) // exibir os números pares de 0 a 50 pelo resto
		{
			cout << i << endl; //exibe na tela
		}		
		
		i++;
	}

	
	cout << "\n";
	cout << "Parabéns\n";
	cout << "\n";
	
	system("pause");
	return 0;
}