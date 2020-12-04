#include <iostream>
#include <iomanip>
#include "tchar.h"

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int numero01, numero02;
	int soma, subtracao, multiplicacao, resto;
	float divisao;
	bool comparacao;

	cout << "digite o primeiro n�mero: ";
	cin >> numero01;

	cout << "digite o segundo n�mero: ";
	cin >> numero02;		
	
	soma = numero01 + numero02;
	subtracao = numero01 - numero02;
	multiplicacao = numero01 * numero02;
	divisao = (float)numero01 / numero02;
	resto = numero01 % numero02;

	cout << "\n***********************************************" << endl;
	
	cout << "a soma dos dois n�meros �: " << soma << endl;
	cout << "a subtra��o dos dois n�meros �: " << subtracao << endl;
	cout << "a multiplica��o dos dois n�meros �: " << multiplicacao << endl;
	cout << "a divis�o dos dois n�meros �: " << divisao << endl;
	cout << "o resto dos dois n�meros �: " << resto << endl;

	cout << "\n***********************************************" << endl;
	cout << "************* M�dia de 3 n�meros ****************" << endl;

	float numero1, numero2, numero3;
	float media{ 0.0 };
	char resposta;

	do
	{
		cout << "digite o primeiro n�mero: ";
		cin >> numero1;
		cout << "digite o segundo n�mero: ";
		cin >> numero2;
		cout << "digite o terceiro n�mero: ";
		cin >> numero3;

		cout << "\n***********************************************" << endl;

		media = (numero1 + numero2 + numero3) / 3;
		cout << "n�meros digitados: {" << numero1 << "} {" << numero2 << "} {" << numero3 << "}" << "\n";
		cout << "m�dia dos n�meros: " << media << endl;
		cout << "\ndeseja calcular outra m�dia? (s=sim; n=n�o): ";
		cin >> resposta;
	} while (resposta == 'S' || resposta == 's');	

	cout << "\nsaindo do programa...";

	system("pause");	
	return 0;
}