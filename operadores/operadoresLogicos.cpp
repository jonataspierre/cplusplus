#include <iostream>
#include <iomanip>
#include "locale.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	/* Operadores Lógicos:

	and: &&
	or: ||
	not: ! (inverte o resultado: se for true passa false e vice versa)
	*/

	double numero;
	bool resultadoLogico1, resultadoLogico2;
	char resposta;

	do
	{
		cout << "digite um número: ";
		cin >> numero;

		cout << "\n***************************************************" << endl;

		cout << "************** true = 1 e false = 0 ***************" << endl;
				
		// a variável booleana já recebe uma condição e já verifica
		resultadoLogico1 = ((numero >= 100) && (numero != 0));
		cout << "\no resultado lógico 1 é: " << resultadoLogico1 << endl;

		resultadoLogico2 = ((numero == 100) || (numero > 200)) && (numero < 1000);
		cout << "o resultado lógico 2 é: " << resultadoLogico2 << endl;

		cout << "\n***************************************************" << endl;

		cout << "repetir? (s = sim; n= não) ";
		cin >> resposta;

	} while (resposta == 'S' || resposta == 's');

	system("pause");
	return 0;
}