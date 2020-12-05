#include <iostream>
#include <tchar.h>
#include <string>

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	bool bFezSol, bCarroPronto;
	
	string carroPronto;

	/* Operador Ternário - usa o ? para a ide saber que é uma operação ternária e o : separa a instrução true e false
	(condição) ? instrução true : instrução false;

	pode ser usado para uma variável também:
	variavel = (condição) ? valor1 true : valor2 false;
	*/

	cout << "Fez sol? (0 = não; 1 = sim) " << endl;
	cin >> bFezSol;
	cout << "Carro Pronto? (0 = não; 1 = sim) " << endl;
	cin >> bCarroPronto;
	
	cout << "\n************************************" << endl;
	
	(bFezSol == true) ? cout << "\nHoje está fazendo Sol" << endl : cout << "\nHoje não está fezendo Sol" << endl;

	carroPronto = (bCarroPronto == true) ? "O Carro ficou pronto SIM!!" : "O carro NÃO ficou pronto!!";

	cout << "O carro ficou pronto? " << carroPronto << endl;

	cout << "\n************************************" << endl;

	system("pause");
	return 0;
}