#include <iostream>
#include <iomanip>
#include "tchar.h"

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int num_int;     // Inteiro / Integer
	float num_float;   //n�mero reais e fracionados(decimal) (4bits)
	double num_double;  //n�mero reais e fracionados(decimal) precis�o maior (8bits)
	char caractere_num; //caracter 1bit
	char caractere_letra; //caracter 1bit
	bool bAchou;     // verdadeiro ou falso (true / false)
	
	num_int = 4321;
	num_float = 1234.78f;
	num_double = 123456.123456;
	caractere_num = '3';
	caractere_letra = 'J';

	std::cout << "o valor da vari�vel num_int integer �: " << num_int << std::endl;
	std::cout << "tamanho da vari�vel num_int integer: " << sizeof(num_int) << " bits." << std::endl;
	std::cout << "endere�o da vari�vel num_int integer carregado na m�moria RAM: " << &num_int << std::endl;

	std::cout << "**************************************************" << std::endl;

	std::cout << "o valor de num_float do tipo float �: " << num_float << std::endl;
	std::cout << "tamanho de num_float do tipo float: " << sizeof(num_float) << " bits." << std::endl;
	std::cout << "endere�o de num_float do tipo float carregado na m�moria RAM: " << &num_float << std::endl;

	std::cout << "**************************************************" << std::endl;

	std::cout << "o valor de num_double do tipo double �: " << std::setprecision(12) << num_double << std::endl;// setprecision(x) para definir a precis�o, entre par�ntese o tamanho
	std::cout << "tamanho de num_double do tipo double: " << sizeof(num_double) << " bits." << std::endl;
	std::cout << "endere�o de num_double do tipo double carregado na m�moria RAM: " << &num_double << std::endl;

	std::cout << "**************************************************" << std::endl;

	std::cout << "o valor da vari�vel caractere_num �: " << caractere_num << std::endl;
	std::cout << "tamanho da vari�vel caractere_num: " << sizeof(caractere_num) << " bits." << std::endl;
	std::cout << "endere�o da vari�vel caractere_num carregado na m�moria RAM: " << (void*)&caractere_num << std::endl;

	std::cout << "**************************************************" << std::endl;

	std::cout << "o valor da vari�vel caractere_letra �: " << caractere_letra << std::endl;
	std::cout << "tamanho da vari�vel caractere_letra: " << sizeof(caractere_letra) << " bits." << std::endl;
	std::cout << "endere�o da vari�vel caractere_letra carregado na m�moria RAM: " << (void *)&caractere_letra << std::endl;

	std::cout << "**************************************************" << std::endl;

	// o boleano para falso � false ou 0 (zero), para verdadeiro � 1 (true) ou qualquer coisa <> 0
	bAchou = true;
	std::cout << "o valor da vari�vel bAchou �: " << bAchou << std::endl;
	bAchou = false;
	std::cout << "o valor da vari�vel bAchou �: " << bAchou << std::endl;
	bAchou = 1;
	std::cout << "o valor da vari�vel bAchou �: " << bAchou << std::endl;
	bAchou = 0;
	std::cout << "o valor da vari�vel bAchou �: " << bAchou << std::endl;
	bAchou = 'J'; //nesse caso vai retorna true por ser <> 0
	std::cout << "o valor da vari�vel bAchou �: " << bAchou << std::endl;


	system("pause");

	return(0);
}