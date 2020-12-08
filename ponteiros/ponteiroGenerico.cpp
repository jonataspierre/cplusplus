#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int num{ 4890 };
	char letra{ 'J' };
	
	// ponteiro genérico ou vazio(void) significa que ele não tem ainda um tipo que possa apontar	
	void *ponteiroGenerico; //a declaração não muda, apenas que usa agora o tipo void
			
	ponteiroGenerico = &letra; // atribuindo o endereço da variável letra
	
	//para 'usar' o valor da variável apontada pelo ponteiro, é necessário fazer um cast informando
	//qual o tipo da variável para que o ponteiro saiba quantos bits retornar:
	//primeiro você faz o cast e depois coloca o sinal de desreferenciamento
	// *(cast para tipo desejado*)NomePonteiroGenerico	
	std::cout << "Valor de letra via ponteiroGenerico = " << *(char*)ponteiroGenerico << "\n";
	
	std::cout << "\n****************************************************\n";

	ponteiroGenerico = &num;
	std::cout << "\nValor de num via ponteiroGenerico = " << *(int*)ponteiroGenerico << "\n";

	std::cout << "\n****************************************************\n";

	*(int*)ponteiroGenerico = num + 110;
	std::cout << "\nValor de num via ponteiroGenerico agora é= " << *(int*)ponteiroGenerico << "\n";

	std::cout << "\n****************************************************\n";

	system("PAUSE");
	return 0;
}