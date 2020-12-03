#include <iostream>
#include <iomanip>
#include "tchar.h"

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	
	/* Operadores Relacionais:

	igual: == 
	diferente: !=
	maior que: >
	maior igual que: >=
	menor que: <
	menor igual que: <=

	Lembrando que = � comando de atribui��o e == � operador de igualdade. Para verificar se o operando � igual a outro operando

	*/
	   
	int num1, num2;
	bool comparacao;

	cout << "Digite o primeiro n�mero: ";
	cin >> num1;
	cout << "O primeiro n�mero digitado foi = " << num1 << endl;
	cout << "\nDigite o segundo n�mero: ";
	cin >> num2;
	cout << "O segundo n�mero digitado foi = " << num2 << endl;
	
	cout << "\n****************************************************" << endl;

	comparacao = (num1 == num2);
	cout << "\nnum1 Igual a num2?:  " << comparacao << "\n";
	
	comparacao = (num1 != num2);
	cout << "\nnum1 Diferente a num2?:  " << comparacao << "\n";

	comparacao = (num1 > num2);
	cout << "\nnum1 Maior que num2?:  " << comparacao << "\n";
	
	comparacao = (num1 < num2);
	cout << "\nnum1 Menor que num2?:  " << comparacao << "\n";

	comparacao = (num1 >= num2);
	cout << "\nnum1 Maior ou igual a num2?:  " << comparacao << "\n";
	
	comparacao = (num1 <= num2);
	cout << "\nnum1 Menor ou igual a num2?:  " << comparacao << "\n";

	cout << "\n****************************************************" << endl;

	system("pause");
	return 0;
}