#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	int num[10]{ 0 };
	int sum{ 0 };

	for (int i = 0; i <= 9; i++)
	{
		cout << "Digite o n�mero " << (i + 1) << ": ";
		cin >> num[i];
		
		sum += num[i];
	}
	
	cout << "\nA soma dos n�meros digitados �: " << sum << endl;

	cout << "\n";
	
	
	system("pause");
	return 0;
}