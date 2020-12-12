#include <iostream>
#include <locale.h>

//Receber do usário a quantidade de numeros ele irá digitar (limite 20)
//pegar os números que forem digitados
//exibir na tela o maior e o menor

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int vetor[20];
	int qtd_elementos{ 0 };
	int max, min;

	cout << "Qual a quantidade de números serão digitados? ";
	cin >> qtd_elementos;
	system("CLS");

	for (int i = 0; i < qtd_elementos; i++)
	{
		cout << "\nDigite o número " << (i + 1) << ": ";
		cin >> vetor[i];
	}
	
	max = vetor[0];
	min = vetor[0];

	for (int i = 0; i < qtd_elementos; i++)
	{
		if (vetor[i] > max)
		{
			max = vetor[i];
		}
		else if (vetor[i] < min)
		{
			min = vetor[i];
		}
	}
	
	cout << "\nO valor maior informado foi: " << max << " e o valor menor foi: " << min << endl;

	cout << "\n";

	system("pause");
	return 0;
}