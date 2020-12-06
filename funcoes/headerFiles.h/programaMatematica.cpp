#include <iostream>
#include <locale.h>
#include "matematica.h" //foi criado o header que contem os protótipos das funões que são implementadas no .cpp de mesmo nome

/* Criar um programa que receba 2 número inteiros e exiba:
a soma entre eles
a subtração entre eles
a divisão entre eles
a multiplicação entre eles
a potência dos dois números (primeir número elevado a potência do segundo)
a raiz quadrada dos dois números

usando header*/

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	int numDig1, numDig2;

	cout << "Informe o primeiro número: ";
	cin >> numDig1;
	cout << "Informe o segundo número: ";
	cin >> numDig2;

	cout << "\nSoma: " << soma(numDig1, numDig2) << endl;
	cout << "\nSubtração: " << subtracao(numDig1, numDig2) << endl;
	cout << "\nMultiplicação: " << multiplicacao(numDig1, numDig2) << endl;
	cout << "\nDivisão: " << divisao(numDig1, numDig2) << endl;
	cout << "\nPotência: " << potencia(numDig1, numDig2) << endl;
	cout << "\nRaiz quadrada número 1: " << raizQuadrada(numDig1) << endl;
	cout << "\nRaiz quadrada número 2: " << raizQuadrada(numDig2) << endl;

	cout << endl;

	system("pause");
	return 0;
}