#include <iostream>
#include <windows.h>
#include <tchar.h>


using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	// no caso for, a condicional tamb�m � verificada antes, por�m, a variavel, condicional e incremento j� s�o configurados nos parametros do for:
	// for(*contador*, *condicional*, *incremento*)
	// for(int i = 0; i =< 10; i++)
	// pode iniciar a vari�vel dentro do for ou fora, como quiser
	// ideal para quando j� sabe a quantidade de repeti��es que ter�

	int i{ 0 }; // iniciando a vari�vel na declara��o	

	for (i; i <= 10; i++)
	{
		cout << i << endl;
	}

	Sleep(2000);
	cout << "\n";

	// declarando e iniciando a vari�vel dentro do for
	for (int w = 20; w <= 30; w++)
	{
		cout << w << endl;
	}

	system("pause");
	return 0;	
}