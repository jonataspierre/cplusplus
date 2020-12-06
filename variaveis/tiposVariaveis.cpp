#include <iostream>
#include <iomanip>
#include "tchar.h"

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int num_int;     // Inteiro / Integer
	float num_float;   //número reais e fracionados(decimal) (4bits)
	double num_double;  //número reais e fracionados(decimal) precisão maior (8bits)
	char caractere_num; //caracter 1bit
	char caractere_letra; //caracter 1bit
	bool bAchou;     // verdadeiro ou falso (true / false)
	
	num_int = 4321;
	num_float = 1234.78f;
	num_double = 123456.123456;
	caractere_num = '3';
	caractere_letra = 'J';

	std::cout << "o valor da variável num_int integer é: " << num_int << std::endl;
	std::cout << "tamanho da variável num_int integer: " << sizeof(num_int) << " bits." << std::endl;
	std::cout << "endereço da variável num_int integer carregado na mémoria RAM: " << &num_int << std::endl;

	std::cout << "**************************************************" << std::endl;

	std::cout << "o valor de num_float do tipo float é: " << num_float << std::endl;
	std::cout << "tamanho de num_float do tipo float: " << sizeof(num_float) << " bits." << std::endl;
	std::cout << "endereço de num_float do tipo float carregado na mémoria RAM: " << &num_float << std::endl;

	std::cout << "**************************************************" << std::endl;

	std::cout << "o valor de num_double do tipo double é: " << std::setprecision(12) << num_double << std::endl;// setprecision(x) para definir a precisão, entre parêntese o tamanho
	std::cout << "tamanho de num_double do tipo double: " << sizeof(num_double) << " bits." << std::endl;
	std::cout << "endereço de num_double do tipo double carregado na mémoria RAM: " << &num_double << std::endl;

	std::cout << "**************************************************" << std::endl;

	std::cout << "o valor da variável caractere_num é: " << caractere_num << std::endl;
	std::cout << "tamanho da variável caractere_num: " << sizeof(caractere_num) << " bits." << std::endl;
	std::cout << "endereço da variável caractere_num carregado na mémoria RAM: " << (void*)&caractere_num << std::endl;

	std::cout << "**************************************************" << std::endl;

	std::cout << "o valor da variável caractere_letra é: " << caractere_letra << std::endl;
	std::cout << "tamanho da variável caractere_letra: " << sizeof(caractere_letra) << " bits." << std::endl;
	std::cout << "endereço da variável caractere_letra carregado na mémoria RAM: " << (void *)&caractere_letra << std::endl;

	std::cout << "**************************************************" << std::endl;

	// o boleano para falso é false ou 0 (zero), para verdadeiro é 1 (true) ou qualquer coisa <> 0
	bAchou = true;
	std::cout << "o valor da variável bAchou é: " << bAchou << std::endl;
	bAchou = false;
	std::cout << "o valor da variável bAchou é: " << bAchou << std::endl;
	bAchou = 1;
	std::cout << "o valor da variável bAchou é: " << bAchou << std::endl;
	bAchou = 0;
	std::cout << "o valor da variável bAchou é: " << bAchou << std::endl;
	bAchou = 'J'; //nesse caso vai retorna true por ser <> 0
	std::cout << "o valor da variável bAchou é: " << bAchou << std::endl;


	system("pause");

	return(0);
}