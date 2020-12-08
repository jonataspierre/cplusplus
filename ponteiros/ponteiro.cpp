#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	// ponteiro 'aponta' para o primeiro endereço de ou variável/objeto. dentro da variável ponteiro fica o 
	//primeiro endereço da variável da qual ela está 'apontando', sendo que ao alterar o ponteiro também estará
	//alterando a variável
	
	//para declarar uma Variável ponteiro precisa informar * entre o tipo e o nome da variável
	//tipo *nome_variável = int *ponteiro	
	//é necessário sempre inicializar o ponteiro, caso não seja com um endreço, que seja ao menos
	//para um endreço vazio (não lixo de memória):
	int *ponteiro{ nullptr };
	
	
	int num { 10 };
	int *ponteiroInteiro1 { nullptr };
	int *ponteiroInteiro2 { nullptr };
	
	std::cout << "\nValor da variável num: " << num << "\n";
	std::cout << "\nEndereço na memória de num: " << &num << "\n";
	std::cout << "\nEndereço na memória de ponteiroInteiro1: " << &ponteiroInteiro1 << "\n";
	std::cout << "\nEndereço na memória de ponteiroInteiro2: " << &ponteiroInteiro2 << "\n";
	
	std::cout << "\n***********************************\n";
	// para atribuir valor ao ponteiro, não usa * e precisa atribuir um endereço de variável
	// ponteiro = &variável
	
	ponteiroInteiro1 = &num; // agora o ponteiro possui o endereço da variável num

	std::cout << "\nValor contido dentro do ponteiroInteiro1: " << ponteiroInteiro1 << "\n"; // é o endereço da variável num

	// usando o * é usar o valor dentro da variável que o ponteiro aponta, tanto para exibir quanto para alterar (atribuir novo valor)
	std::cout << "\nValor contido na variável apontada por ponteiroInteiro1: " << *ponteiroInteiro1 << "\n";
	
	*ponteiroInteiro1 = num + 5; //atribuindo um novo valor para a variável num pelo ponteiro
	std::cout << "\nValor da variável num agora: " << num << "\n";
	std::cout << "\nValor contido na variável apontada por ponteiroInteiro1: " << *ponteiroInteiro1 << "\n";
	
	std::cout << "\n***********************************\n";

	// um ponteiro pode receber outro ponteiro
	ponteiroInteiro2 = ponteiroInteiro1;

	std::cout << "\nValor contido dentro do ponteiroInteiro2: " << ponteiroInteiro2 << "\n"; // é o endereço da variável num
	std::cout << "\nValor contido na variável apontada por ponteiroInteiro2: " << *ponteiroInteiro2 << "\n";

	std::cout << "\n***********************************\n";

	// lembrando sempre que usando * estará mexendo com a informação contida 'dentro da variável que está sendo apontada'

	*ponteiroInteiro2 = *ponteiroInteiro1 + num;

	std::cout << "\nValor da variável num agora: " << num << "\n";
	std::cout << "\nValor contido na variável apontada por ponteiroInteiro1 agora: " << *ponteiroInteiro1 << "\n";
	std::cout << "\nValor contido na variável apontada por ponteiroInteiro2 agora: " << *ponteiroInteiro2 << "\n";
	
	std::cout << "\n***********************************\n";

	system("pause");
	return 0;
}