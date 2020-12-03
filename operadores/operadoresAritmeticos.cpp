#include <iostream>
#include <iomanip>
#include "locale.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	int num1, num2;
	int result;

	cout << "Digite o primeiro n�mero: ";
	cin >> num1;
	cout << "Primeiro n�mero digitado foi = " << num1 << endl;
	cout << "Digite o segundo n�mero: ";
	cin >> num2;
	cout << "Segundo n�mero digitado foi = " << num2 << endl;
	
	cout << "\n********************************************" << endl;

	//soma | sinal: +;	
	
	cout << "********** Soma ****************************" << endl;
	result = num1 + num2;
	cout << "\nA soma dos dois n�meros: " << result << "\n";
	
	cout << "\n********************************************" << endl;

	//subtra��o | sinal: -;	

	cout << "********** Subtra��o ***********************" << endl;	
	result = num1 - num2;
	cout << "\nA subtra��o dos dois n�meros: " << result << "\n";
	
	cout << "\n********************************************" << endl;

	//multiplica��o | sinal: *;	

	cout << "********** Multiplica��o *******************" << endl;	
	result = num1 * num2;
	cout << "\nA multiplica��o dos dois n�meros: " << result << "\n";

	cout << "\n********************************************" << endl;

	//divis�o | sinal: /;	

	cout << "********** Divis�o ***************************" << endl;
	result = num1 / num2;
	cout << "\nA divis�o dos dois n�meros: " << result << "\n";

	cout << "\n********************************************" << endl;

	//resto (sobra da divis�o) | sinal: %;	

	cout << "********** Resto *****************************" << endl;
	result = num1 % num2;
	cout << "\nO resto da divis�o dos dois n�meros: " << result << "\n";

	cout << "\n********************************************" << endl;

	system("pause");
	return 0;
}
