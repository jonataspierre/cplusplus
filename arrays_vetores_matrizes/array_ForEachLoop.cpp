#include <iostream>

using namespace std;

int main()
{
	//o loop foreach percorrer de forma mais 'simplificada' o vetor/matriz
	//no for basta criar a variável que irá receber e seguido do : colocar o vetor/matriz
	int vetores[] = { 1,2,3,4,5 };

	//utilizando o 'tipo' auto, o sistema na compilação já 'resolve' o tipo
	for (auto vetor : vetores)
	{
		cout << vetor << endl;
	}
	
	cout << endl;
		
	system("pause");
	return 0;
}
