#include <iostream>
#include <string>
#include <tchar.h>

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	
	
	/* variável composta, homogênea a unidimensional que pode receber mais de um valor do mesmo tipo 	
	Como se fosse uma variável com vários compartimentos	
	indexados a partir do zero [0] [1] [2] [3] [4]
	na memória são alocados na sequencia um do outro.
		
	declarando:
	float Notas[5]; //tamanho 5 (5 compartimentos)
	*/	
	
	float notas[5] { 1.0, 2.0, 3.0, 4.0, 5.0 }; //declarando e inicializando	
	float media, soma {0.0};
	string nomeAluno;

	cout << "Digite o nome do Aluno: ";
	cin >> nomeAluno;

	system("CLS"); //limpa as informações da tela

	for (int i = 0; i <= 4; i++)
	{
		cout << "Digite A nota " << (i+1) << ": ";
		cin >> notas[i];
		soma = soma + notas[i];
		system("CLS"); //limpa as informações da tela
	}

	media = soma / 5;

	cout << "A média das notas do aluno foi: " << media << "\n";
	//E se fossem 10 notas?

	cout << "\n";

	system("PAUSE");
	return 0;
}