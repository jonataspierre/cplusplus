#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int num{ 4890 };
	char letra{ 'J' };
	
	// ponteiro gen�rico ou vazio(void) significa que ele n�o tem ainda um tipo que possa apontar	
	void *ponteiroGenerico; //a declara��o n�o muda, apenas que usa agora o tipo void
			
	ponteiroGenerico = &letra; // atribuindo o endere�o da vari�vel letra
	
	//para 'usar' o valor da vari�vel apontada pelo ponteiro, � necess�rio fazer um cast informando
	//qual o tipo da vari�vel para que o ponteiro saiba quantos bits retornar:
	//primeiro voc� faz o cast e depois coloca o sinal de desreferenciamento
	// *(cast para tipo desejado*)NomePonteiroGenerico	
	std::cout << "Valor de letra via ponteiroGenerico = " << *(char*)ponteiroGenerico << "\n";
	
	std::cout << "\n****************************************************\n";

	ponteiroGenerico = &num;
	std::cout << "\nValor de num via ponteiroGenerico = " << *(int*)ponteiroGenerico << "\n";

	std::cout << "\n****************************************************\n";

	*(int*)ponteiroGenerico = num + 110;
	std::cout << "\nValor de num via ponteiroGenerico agora �= " << *(int*)ponteiroGenerico << "\n";

	std::cout << "\n****************************************************\n";

	system("PAUSE");
	return 0;
}