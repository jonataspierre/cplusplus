#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

//média das notas de um aluno no semestre:
//ENTRADA: 4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7 e 10.0
//PROCESSAMENTO : for each, auto, tamanho vetor sizeof
//media simples(soma das notas) / Numero de Notas
//SAIDA : Media de Notas

int main()
{
	setlocale(LC_ALL, "portuguese");

	double notas[]{ 4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, 10.0 };
	int sizeNotas = size(notas); //pegando o vetor pelo size do <array>
	//int sizeNotas = sizeof(notas)/sizeof(float); //pegando o tamanho do vetor pelo sizeof
	double sumNotas{ 0.0 };
	double mediaNotas{ 0.0 };

	for (auto nota : notas)
	{
		sumNotas += nota;		
	}

	mediaNotas = sumNotas / sizeNotas;		
	
	cout << "A média das notas do aluno foi: " << fixed << setprecision(2) << mediaNotas << endl;

	cout << '\n';

	system("pause");
	return 0;
}
