#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	// ponteiro 'aponta' para o primeiro endere�o de ou vari�vel/objeto. dentro da vari�vel ponteiro fica o 
	//primeiro endere�o da vari�vel da qual ela est� 'apontando', sendo que ao alterar o ponteiro tamb�m estar�
	//alterando a vari�vel
	
	//para declarar uma Vari�vel ponteiro precisa informar * entre o tipo e o nome da vari�vel
	//tipo *nome_vari�vel = int *ponteiro	
	//� necess�rio sempre inicializar o ponteiro, caso n�o seja com um endre�o, que seja ao menos
	//para um endre�o vazio (n�o lixo de mem�ria):
	int *ponteiro{ nullptr };
	
	
	int num { 10 };
	int *ponteiroInteiro1 { nullptr };
	int *ponteiroInteiro2 { nullptr };
	
	std::cout << "\nValor da vari�vel num: " << num << "\n";
	std::cout << "\nEndere�o na mem�ria de num: " << &num << "\n";
	std::cout << "\nEndere�o na mem�ria de ponteiroInteiro1: " << &ponteiroInteiro1 << "\n";
	std::cout << "\nEndere�o na mem�ria de ponteiroInteiro2: " << &ponteiroInteiro2 << "\n";
	
	std::cout << "\n***********************************\n";
	// para atribuir valor ao ponteiro, n�o usa * e precisa atribuir um endere�o de vari�vel
	// ponteiro = &vari�vel
	
	ponteiroInteiro1 = &num; // agora o ponteiro possui o endere�o da vari�vel num

	std::cout << "\nValor contido dentro do ponteiroInteiro1: " << ponteiroInteiro1 << "\n"; // � o endere�o da vari�vel num

	// usando o * � usar o valor dentro da vari�vel que o ponteiro aponta, tanto para exibir quanto para alterar (atribuir novo valor)
	std::cout << "\nValor contido na vari�vel apontada por ponteiroInteiro1: " << *ponteiroInteiro1 << "\n";
	
	*ponteiroInteiro1 = num + 5; //atribuindo um novo valor para a vari�vel num pelo ponteiro
	std::cout << "\nValor da vari�vel num agora: " << num << "\n";
	std::cout << "\nValor contido na vari�vel apontada por ponteiroInteiro1: " << *ponteiroInteiro1 << "\n";
	
	std::cout << "\n***********************************\n";

	// um ponteiro pode receber outro ponteiro
	ponteiroInteiro2 = ponteiroInteiro1;

	std::cout << "\nValor contido dentro do ponteiroInteiro2: " << ponteiroInteiro2 << "\n"; // � o endere�o da vari�vel num
	std::cout << "\nValor contido na vari�vel apontada por ponteiroInteiro2: " << *ponteiroInteiro2 << "\n";

	std::cout << "\n***********************************\n";

	// lembrando sempre que usando * estar� mexendo com a informa��o contida 'dentro da vari�vel que est� sendo apontada'

	*ponteiroInteiro2 = *ponteiroInteiro1 + num;

	std::cout << "\nValor da vari�vel num agora: " << num << "\n";
	std::cout << "\nValor contido na vari�vel apontada por ponteiroInteiro1 agora: " << *ponteiroInteiro1 << "\n";
	std::cout << "\nValor contido na vari�vel apontada por ponteiroInteiro2 agora: " << *ponteiroInteiro2 << "\n";
	
	std::cout << "\n***********************************\n";

	system("pause");
	return 0;
}