#include <iostream>
#include <windows.h>
#include <tchar.h>


using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	// no caso for, a condicional também é verificada antes, porém, a variavel, condicional e incremento já são configurados nos parametros do for:
	// for(*contador*, *condicional*, *incremento*)
	// for(int i = 0; i =< 10; i++)
	// pode iniciar a variável dentro do for ou fora, como quiser
	// ideal para quando já sabe a quantidade de repetições que terá

	int i{ 0 }; // iniciando a variável na declaração	

	for (i; i <= 10; i++)
	{
		cout << i << endl;
	}

	Sleep(2000);
	cout << "\n";

	// declarando e iniciando a variável dentro do for
	for (int w = 20; w <= 30; w++)
	{
		cout << w << endl;
	}

	system("pause");
	return 0;	
}