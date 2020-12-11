#include <iostream>


int main()
{
	setlocale(LC_ALL, "portuguese");
	
	//referenciamento é como 'dar um apelido' ou 'um novo nome' para a variável
	//quando utiliza um referenciamento, na verdade não está 'criando' uma variável, diferente do ponteiro, que aponta para uma variável e é uma variável
	//para declarar uma referencia basta usar o & que é usado apenas no momento de declara, diferente do ponteiro que precisa usar * 
	//toda referencia precisa ser declarada e já atribuída
	//referencia só pode ser declara e atribuida uma vez, ao contrário do ponteiro que pode ser reatribuido

	int num1{ 1247 };
	int& ref{ num1 };

	std::cout << "\nEndereço de num1 na memória: " << &num1 << "\n";
	std::cout << "\nEndereço de ref na memória: " << &ref << "\n"; //vai perceber que será o mesmo de num1
	std::cout << "\nValor dentro de num1: " << num1 << "\n";
	std::cout << "\nValor dentro de ref: " << ref << "\n"; //vai perceber que será o mesmo de num1

	//alterando a 'variável' de referenciamento, altera a variável referenciada
	ref = 1000;

	std::cout << "\nValor dentro de num1 agora: " << num1 << "\n";
	std::cout << "\nValor dentro de ref agora: " << ref << "\n"; //vai perceber que será o mesmo de num1

	std::cout << "\n";

	system("pause");
	return 0;
}