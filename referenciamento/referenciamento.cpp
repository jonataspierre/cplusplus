#include <iostream>


int main()
{
	setlocale(LC_ALL, "portuguese");
	
	//referenciamento � como 'dar um apelido' ou 'um novo nome' para a vari�vel
	//quando utiliza um referenciamento, na verdade n�o est� 'criando' uma vari�vel, diferente do ponteiro, que aponta para uma vari�vel e � uma vari�vel
	//para declarar uma referencia basta usar o & que � usado apenas no momento de declara, diferente do ponteiro que precisa usar * 
	//toda referencia precisa ser declarada e j� atribu�da
	//referencia s� pode ser declara e atribuida uma vez, ao contr�rio do ponteiro que pode ser reatribuido

	int num1{ 1247 };
	int& ref{ num1 };

	std::cout << "\nEndere�o de num1 na mem�ria: " << &num1 << "\n";
	std::cout << "\nEndere�o de ref na mem�ria: " << &ref << "\n"; //vai perceber que ser� o mesmo de num1
	std::cout << "\nValor dentro de num1: " << num1 << "\n";
	std::cout << "\nValor dentro de ref: " << ref << "\n"; //vai perceber que ser� o mesmo de num1

	//alterando a 'vari�vel' de referenciamento, altera a vari�vel referenciada
	ref = 1000;

	std::cout << "\nValor dentro de num1 agora: " << num1 << "\n";
	std::cout << "\nValor dentro de ref agora: " << ref << "\n"; //vai perceber que ser� o mesmo de num1

	std::cout << "\n";

	system("pause");
	return 0;
}