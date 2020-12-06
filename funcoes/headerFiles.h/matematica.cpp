#include <iostream>
#include <cmath>
#include "matematica.h"

using namespace std;

int soma(int num1, int num2)
{
	return num1 + num2;	
}

int subtracao(int num1, int num2)
{
	return num1 - num2;
}

int multiplicacao(int num1, int num2)
{
	return num1 * num2;
}

float divisao(int num1, int num2)
{
	return (float)num1 / (float)num2; //'(tipo)variável' é um cast, troca o tipo, transfomando nesse caso int em float
}

double potencia(double num1, double num2)
{
	return pow(num1, num2);
}

float raizQuadrada(int num)
{
	return sqrtf((float)num);
}
