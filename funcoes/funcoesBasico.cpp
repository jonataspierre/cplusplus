#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;

// precisa definir o que a fun��o ir� retornar (return)
// precisa declarar o tipo da fun��o	


// fun��o do tipo integer que soma dois n�meros
int somaNumeros(int num1, int num2) { // a fun��o tem os par�metros que ir� receber (entrada)

	//nesse exemplo foi criado uma vari�vel para gravar a soma
	int result;
	result = num1 + num2;

	return result; //o que ser� retornado
}

// fun��o do tipo integer que multiplica dois n�meros
int multiplicacaoNumeros(int num1, int num2) { // a fun��o tem os par�metros que ir� receber (entrada)

	//nesse exemplo n�o foi criado uma vari�vel para gravar a multiplica��o, foi direto no return
	return num1 * num2; //o que ser� retornado
}

// fun��o tamb�m pode ser do tipo void (sem retorno)
void mensagem1() { //n�o recebe par�metro, mas precisa colocar o ()
	
	cout << "Mensagem 1 gerada atrav�s da fun��o" << endl;
}

// fun��o tamb�m pode ser do tipo void (sem retorno)
void mensagem2() { //n�o recebe par�metro, mas precisa colocar o ()
	
	cout << "Mensagem 2 gerada atrav�s da fun��o" << endl;
	
	return; //quando usa o return em uma fun��o void, quando

	cout << "Mensagem 3 que n�o vai aparecer" << endl;
}


 int main() {

	 setlocale(LC_ALL, ("portuguese"));

	 int iNum1, iNum2, retornoFuncao;

	 cout << "Informe o primeiro n�mero: "; 
	 cin >> iNum1;
	 cout << "\nInforme o seguindo n�mero: ";
	 cin >> iNum2;
	
	 cout << "\n***************************************" << endl;

	 cout << "\nA soma dos dois n�meros �: " << somaNumeros(iNum1, iNum2) << endl; //passando os argumentos para a fun��o
	 cout << "\nA multiplica��o dos dois n�meros �: " << multiplicacaoNumeros(iNum1, iNum2) << endl; //passando os argumentos para a fun��o
	 
	 cout << "\n***************************************" << endl;

	 // outra forma de usar a fun��o � passando os argumentos diretamente (sem ser por vari�vel)
	 retornoFuncao = somaNumeros(200, 300);
	 cout << "\nA soma dos n�meros 200 e 300 passados diretamente para a fun��o �: " << retornoFuncao << endl;

	 // ou usando a pr�pria fun��o dentor da fun��o, desde que seja do mesmo tipo esperado da fun��o
	 retornoFuncao = somaNumeros(iNum1, multiplicacaoNumeros(iNum1, iNum2));
	 cout << "\nA soma dos n�meros usando a fun��o no par�metro da fun��o �: " << retornoFuncao << endl;

	 cout << "\n***************************************" << endl;

	 cout << endl; //quebra de linha
	 
	 // chamando a fun��o void
	 mensagem1();
	 
	 cout << endl; //quebra de linha
	 
	 // chamando a fun��o void
	 mensagem2();

	 cout << "\n***************************************" << endl;
	 
	 system("pause");
	 return 0;
}