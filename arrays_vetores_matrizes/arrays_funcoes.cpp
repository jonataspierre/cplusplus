#include <iostream>
#include <array>

//protótipo da funçã que irá receber o vetor. Nesse caso em C, porque em C++ pode usar o recurso #include <vector> -- estudar
void mostrarVetor(int vet[], int sizeVet);

int main()
{
	
	int vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	
	//o size(vetor) foi lançando das versões do vs 2017, abaixo o exemplo de como era passando antes
	int tamanhoVetor = std::size(vetor);
	
		
	//usava o sizeof, mas como ele devolve o número em Bytes do tamanho de uma variável ou tipo multiplicado pela quantidade de elementos no vetor
	//precisava dividir a quantidade de bits retornada pela quantidade de bits do tipo do vetor:
	
	//int tamanhoVetor = sizeof(Vetor) / sizeof(int);	

	mostrarVetor(vetor, tamanhoVetor);
	
	std::cout << "\n";

	system("PAUSE");
	return 0;
}

//Para receber um vetor basta colocar o tipo nomevetor e [ ]
//ou já com tamanho int nomevetor[10]
//void mostrarVetor(int vet[10])
void mostrarVetor(int vet[], int sizeVet)
{

	for (int i = 0; i < sizeVet; i++)
	{
		std::cout << "- " << vet[i] << " -";
	}
}