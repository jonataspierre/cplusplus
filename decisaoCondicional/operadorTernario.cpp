#include <iostream>
#include <tchar.h>
#include <string>

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	bool bFezSol, bCarroPronto;
	
	string carroPronto;

	/* Operador Tern�rio - usa o ? para a ide saber que � uma opera��o tern�ria e o : separa a instru��o true e false
	(condi��o) ? instru��o true : instru��o false;

	pode ser usado para uma vari�vel tamb�m:
	variavel = (condi��o) ? valor1 true : valor2 false;
	*/

	cout << "Fez sol? (0 = n�o; 1 = sim) " << endl;
	cin >> bFezSol;
	cout << "Carro Pronto? (0 = n�o; 1 = sim) " << endl;
	cin >> bCarroPronto;
	
	cout << "\n************************************" << endl;
	
	(bFezSol == true) ? cout << "\nHoje est� fazendo Sol" << endl : cout << "\nHoje n�o est� fezendo Sol" << endl;

	carroPronto = (bCarroPronto == true) ? "O Carro ficou pronto SIM!!" : "O carro N�O ficou pronto!!";

	cout << "O carro ficou pronto? " << carroPronto << endl;

	cout << "\n************************************" << endl;

	system("pause");
	return 0;
}