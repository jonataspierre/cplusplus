#include <iostream>
#include <iomanip>
#include "locale.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	int num1, num2;
	int result;

	cout << "Digite o primeiro número: ";
	cin >> num1;
	cout << "Primeiro número digitado foi = " << num1 << endl;
	cout << "Digite o segundo número: ";
	cin >> num2;
	cout << "Segundo número digitado foi = " << num2 << endl;
	
	cout << "\n********************************************" << endl;

	//soma | sinal: +;	
	
	cout << "********** Soma ****************************" << endl;
	result = num1 + num2;
	cout << "\nA soma dos dois números: " << result << "\n";
	
	cout << "\n********************************************" << endl;

	//subtração | sinal: -;	

	cout << "********** Subtração ***********************" << endl;	
	result = num1 - num2;
	cout << "\nA subtração dos dois números: " << result << "\n";
	
	cout << "\n********************************************" << endl;

	//multiplicação | sinal: *;	

	cout << "********** Multiplicação *******************" << endl;	
	result = num1 * num2;
	cout << "\nA multiplicação dos dois números: " << result << "\n";

	cout << "\n********************************************" << endl;

	//divisão | sinal: /;	

	cout << "********** Divisão ***************************" << endl;
	result = num1 / num2;
	cout << "\nA divisão dos dois números: " << result << "\n";

	cout << "\n********************************************" << endl;

	//resto (sobra da divisão) | sinal: %;	

	cout << "********** Resto *****************************" << endl;
	result = num1 % num2;
	cout << "\nO resto da divisão dos dois números: " << result << "\n";

	cout << "\n********************************************" << endl;

	system("pause");
	return 0;
}
