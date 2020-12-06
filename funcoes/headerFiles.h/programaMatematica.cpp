#include <iostream>
#include <locale.h>
#include "matematica.h" //foi criado o header que contem os prot�tipos das fun�es que s�o implementadas no .cpp de mesmo nome

/* Criar um programa que receba 2 n�mero inteiros e exiba:
a soma entre eles
a subtra��o entre eles
a divis�o entre eles
a multiplica��o entre eles
a pot�ncia dos dois n�meros (primeir n�mero elevado a pot�ncia do segundo)
a raiz quadrada dos dois n�meros

usando header*/

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	int numDig1, numDig2;

	cout << "Informe o primeiro n�mero: ";
	cin >> numDig1;
	cout << "Informe o segundo n�mero: ";
	cin >> numDig2;

	cout << "\nSoma: " << soma(numDig1, numDig2) << endl;
	cout << "\nSubtra��o: " << subtracao(numDig1, numDig2) << endl;
	cout << "\nMultiplica��o: " << multiplicacao(numDig1, numDig2) << endl;
	cout << "\nDivis�o: " << divisao(numDig1, numDig2) << endl;
	cout << "\nPot�ncia: " << potencia(numDig1, numDig2) << endl;
	cout << "\nRaiz quadrada n�mero 1: " << raizQuadrada(numDig1) << endl;
	cout << "\nRaiz quadrada n�mero 2: " << raizQuadrada(numDig2) << endl;

	cout << endl;

	system("pause");
	return 0;
}