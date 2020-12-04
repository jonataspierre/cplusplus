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

	cout << "digite o primeiro número: ";
	cin >> numero01;

	cout << "digite o segundo número: ";
	cin >> numero02;		
	
	soma = numero01 + numero02;
	subtracao = numero01 - numero02;
	multiplicacao = numero01 * numero02;
	divisao = (float)numero01 / numero02;
	resto = numero01 % numero02;

	cout << "\n***********************************************" << endl;
	
	cout << "a soma dos dois números é: " << soma << endl;
	cout << "a subtração dos dois números é: " << subtracao << endl;
	cout << "a multiplicação dos dois números é: " << multiplicacao << endl;
	cout << "a divisão dos dois números é: " << divisao << endl;
	cout << "o resto dos dois números é: " << resto << endl;

	cout << "\n***********************************************" << endl;
	cout << "************* Média de 3 números ****************" << endl;

	float numero1, numero2, numero3;
	float media{ 0.0 };
	char resposta;

	do
	{
		cout << "digite o primeiro número: ";
		cin >> numero1;
		cout << "digite o segundo número: ";
		cin >> numero2;
		cout << "digite o terceiro número: ";
		cin >> numero3;

		cout << "\n***********************************************" << endl;

		media = (numero1 + numero2 + numero3) / 3;
		cout << "números digitados: {" << numero1 << "} {" << numero2 << "} {" << numero3 << "}" << "\n";
		cout << "média dos números: " << media << endl;
		cout << "\ndeseja calcular outra média? (s=sim; n=não): ";
		cin >> resposta;
	} while (resposta == 'S' || resposta == 's');	

	cout << "\nsaindo do programa...";

	system("pause");	
	return 0;
}