#include <iostream>
#include <iomanip>
#include "locale.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	/* Operadores L�gicos:

	and: &&
	or: ||
	not: ! (inverte o resultado: se for true passa false e vice versa)
	*/

	double numero;
	bool resultadoLogico1, resultadoLogico2;
	char resposta;

	do
	{
		cout << "digite um n�mero: ";
		cin >> numero;

		cout << "\n***************************************************" << endl;

		cout << "************** true = 1 e false = 0 ***************" << endl;
				
		// a vari�vel booleana j� recebe uma condi��o e j� verifica
		resultadoLogico1 = ((numero >= 100) && (numero != 0));
		cout << "\no resultado l�gico 1 �: " << resultadoLogico1 << endl;

		resultadoLogico2 = ((numero == 100) || (numero > 200)) && (numero < 1000);
		cout << "o resultado l�gico 2 �: " << resultadoLogico2 << endl;

		cout << "\n***************************************************" << endl;

		cout << "repetir? (s = sim; n= n�o) ";
		cin >> resposta;

	} while (resposta == 'S' || resposta == 's');

	system("pause");
	return 0;
}