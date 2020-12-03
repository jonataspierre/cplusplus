#include <iostream>
#include <limits>

/* 
	Temos 4 modificadores de tipo:
		signed    número com sinal (positivo e negativo)
		unsigned  número sem sinais (positivo incluindo o zero)
		long      aumentar a capacidade de armazenamento
		short     dominuir a capacidade de armazenamento

	sizeof = retorna o tamanho em bytes que um dado ocupa na mamória
*/


int main()
{
	std::cout << "Tamanho char : " << sizeof(char) << std::endl;
	std::cout << "Tamanho int : " << sizeof(int) << std::endl;
	std::cout << "Tamanho short int : " << sizeof(short int) << std::endl;
	std::cout << "Tamanho long int : " << sizeof(long int) << std::endl;
	std::cout << "Tamanho long long int : " << sizeof(long long int) << std::endl;
	std::cout << "Tamanho float : " << sizeof(float) << std::endl;
	std::cout << "Tamanho long float : " << sizeof(long float) << std::endl;
	std::cout << "Tamanho double : " << sizeof(double) << std::endl;
	std::cout << "Tamanho long double : " << sizeof(long double) << std::endl;
	std::cout << "Tamanho wchar_t : " << sizeof(wchar_t) << std::endl;
	
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ " << std::endl;

	// \t insere uma tabulação 
	std::cout << "Tipo\t\t Minimo\t\t Maximo\n\n";

	std::cout << "bool\t\t"
		<< +std::numeric_limits<bool>::min() << '\t' << '\t'
		<< +std::numeric_limits<bool>::max() << '\n';
	std::cout << "char\t\t"
		<< +std::numeric_limits<char>::min() << '\t' << '\t'
		<< +std::numeric_limits<char>::max() << '\n';
	std::cout << "unsigned char\t"
		<< +std::numeric_limits<unsigned char>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned char>::max() << '\n';
	std::cout << "short\t\t"
		<< +std::numeric_limits<short>::min() << '\t' << '\t'
		<< +std::numeric_limits<short>::max() << '\n';
	std::cout << "unsigned short\t"
		<< +std::numeric_limits<unsigned short>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned short>::max() << '\n';
	std::cout << "int\t\t"
		<< +std::numeric_limits<int>::min() << '\t'
		<< +std::numeric_limits<int>::max() << '\n';
	std::cout << "unsigned int\t"
		<< +std::numeric_limits<unsigned int>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned int>::max() << '\n';
	std::cout << "long int\t"
		<< +std::numeric_limits<long int>::min() << '\t'
		<< +std::numeric_limits<long int>::max() << '\n';
	std::cout << "unsigned long int "
		<< +std::numeric_limits<unsigned long int>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned long int>::max() << '\n';
	std::cout << "long long int\t"
		<< +std::numeric_limits<long long int>::min() << '\t' << '\t'
		<< +std::numeric_limits<long long int>::max() << '\n';
	std::cout << "float\t\t"
		<< +std::numeric_limits<float>::min() << '\t' << '\t'
		<< +std::numeric_limits<float>::max() << '\n';
	std::cout << "double\t\t"
		<< +std::numeric_limits<double>::min() << '\t' << '\t'
		<< +std::numeric_limits<double>::max() << '\n';
	std::cout << "long double\t"
		<< +std::numeric_limits<long double>::min() << '\t' << '\t'
		<< +std::numeric_limits<long double>::max() << '\n';
	
	
	system("PAUSE");
	
	return 0;
}