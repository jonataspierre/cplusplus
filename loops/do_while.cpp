#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int escolha = 0;
	
	do // as instru��es ser�o executadas pelo menos uma vez j� que a condicional � no final (faz ... enquanto ... )
	{
		cout << "\n****Tickets Cinema****" << endl;
		cout << "\n1 - Para Meia Entrada\n";
		cout << "\n2 - Para Inteira\n";
		cout << "\n3 - Sair\n";
		cout << "\nEscolha sua op��o: ";
		cin >> escolha;

		switch (escolha)
		{
		case 1: cout << "\n-> Ticket Meia Entrada Comprada <-\n";
			Sleep(1000);
			break;
		case 2: cout << "\n-> Ticket Inteira Comprado <-\n";
			Sleep(1000);
			break;
		case 3: cout << "\n-> Saindo Menu Tickets...\n";
			Sleep(1000);
			break;
		default: cout << "\n!!!Op��o Inv�lida!!!\n";
			Sleep(1000);
			break;
		}
	} while (escolha != 3); //enquanto escolha for diferente de 3 o menu vai aparecer (resultado verdadeiro) 
							//ficar� em loop at� que a escolha seja igual a 3 e o resultado seja falso saindo do loop do-while
	
	system("PAUSE");
	return 0;
}