#include <iostream>
#include "tchar.h"

int main()
{

	_tsetlocale(LC_ALL, _T("portuguese"));
	
	int NumComputadores = 100;
	int SerialComputadores = 1111;
	
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "\tO nome da variável é NumComputadores e seu valor é: " << NumComputadores << "." << std::endl;
	std::cout << "\tO nome da variável é SerialComputadores e seu valor é: " << SerialComputadores << "." << std::endl;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;

	system("pause");

	return 0;


}