#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;

// precisa definir o que a função irá retornar (return)
// precisa declarar o tipo da função	


// função do tipo integer que soma dois números
int somaNumeros(int num1, int num2) { // a função tem os parâmetros que irá receber (entrada)

	//nesse exemplo foi criado uma variável para gravar a soma
	int result;
	result = num1 + num2;

	return result; //o que será retornado
}

// função do tipo integer que multiplica dois números
int multiplicacaoNumeros(int num1, int num2) { // a função tem os parâmetros que irá receber (entrada)

	//nesse exemplo não foi criado uma variável para gravar a multiplicação, foi direto no return
	return num1 * num2; //o que será retornado
}

// função também pode ser do tipo void (sem retorno)
void mensagem1() { //não recebe parâmetro, mas precisa colocar o ()
	
	cout << "Mensagem 1 gerada através da função" << endl;
}

// função também pode ser do tipo void (sem retorno)
void mensagem2() { //não recebe parâmetro, mas precisa colocar o ()
	
	cout << "Mensagem 2 gerada através da função" << endl;
	
	return; //quando usa o return em uma função void, quando

	cout << "Mensagem 3 que não vai aparecer" << endl;
}


 int main() {

	 setlocale(LC_ALL, ("portuguese"));

	 int iNum1, iNum2, retornoFuncao;

	 cout << "Informe o primeiro número: "; 
	 cin >> iNum1;
	 cout << "\nInforme o seguindo número: ";
	 cin >> iNum2;
	
	 cout << "\n***************************************" << endl;

	 cout << "\nA soma dos dois números é: " << somaNumeros(iNum1, iNum2) << endl; //passando os argumentos para a função
	 cout << "\nA multiplicação dos dois números é: " << multiplicacaoNumeros(iNum1, iNum2) << endl; //passando os argumentos para a função
	 
	 cout << "\n***************************************" << endl;

	 // outra forma de usar a função é passando os argumentos diretamente (sem ser por variável)
	 retornoFuncao = somaNumeros(200, 300);
	 cout << "\nA soma dos números 200 e 300 passados diretamente para a função é: " << retornoFuncao << endl;

	 // ou usando a própria função dentor da função, desde que seja do mesmo tipo esperado da função
	 retornoFuncao = somaNumeros(iNum1, multiplicacaoNumeros(iNum1, iNum2));
	 cout << "\nA soma dos números usando a função no parâmetro da função é: " << retornoFuncao << endl;

	 cout << "\n***************************************" << endl;

	 cout << endl; //quebra de linha
	 
	 // chamando a função void
	 mensagem1();
	 
	 cout << endl; //quebra de linha
	 
	 // chamando a função void
	 mensagem2();

	 cout << "\n***************************************" << endl;
	 
	 system("pause");
	 return 0;
}