#include <iostream>
#include <fcntl.h>
#include <io.h>

using namespace std;

int main()
{		
	//exibir na tela os caracteres unicode
	_setmode(_fileno(stdout), _O_U16TEXT);
	
	wcout << L"\u00AE" << endl;
	wcout << L"\u263A" << endl;
	wcout << L"\u231B" << endl;
	wcout << L"\u058E" << endl;

	system("pause");
	return 0;
}