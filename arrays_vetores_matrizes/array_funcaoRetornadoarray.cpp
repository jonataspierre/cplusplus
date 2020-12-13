#include <iostream>
#include <array>

using namespace std;

//protótipos - recebe um array por referência através de um ponteiro
//Ou seja a variável *vet irá receber um endereço de memória de um vetor que será enviado para esta função
//quando usa apenas o nome do vetor (sem o []), estár usando o endereço da memoria do primeiro elemente	

//Mostra o vetor recebido via ponteiro
void mostrarVetor(int *vet, int sizeVet);

//Duplica Vetor
void duplicarVetor(int *vet, int sizeVet);

//esta função é um ponteiro que recebe um vetor via ponteiro e retorna um ponteiro, que neste caso deve ser um ponteiro para int.
//vai retornar o endereço do primeiro elemento do array*/
int *inverterVetor(int *vet, int sizeVet);


int main()
{
	//quando declara [] e com valores, ao compilar o sistema já vai saber quantos elementos tem e definir no tamanho
	int vetor[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int tamVetor = size(vetor);	
	
	//exemplo do que retorna quando usa apenas o nome do vetor
	//cout << vetor << endl;
	//cout << &vetor[0] << endl;
	//cout << &vetor[1] << endl;

	//O endereço do primeiro elemento do vetor será enviado para Array
	mostrarVetor(vetor, tamVetor);
	
	//função que vai receber o vetor e duplicar os valores de todos os elementos
	duplicarVetor(vetor, tamVetor);	

	//a função inverter retorna um ponteiro de vetor, e no caso usei a função mostrar vetor para processar o retorno
	mostrarVetor(inverterVetor(vetor, tamVetor), tamVetor);

	//MostraVetor(Numeros, Tam);
	//Aqui Mostrar vetor recebe o retorno da função Inverte Vetor
	//E este retorno será o endereço do primeiro elemento do array inventido
	//MostraVetor(InverteVetor(Numeros, Tam), Tam);
	
	system("PAUSE");
	return 0;
}


//aqui recebe um vetor via ponteiro e mostra na tela
void mostrarVetor(int *vet, int sizeVet)
{
	//coloca colchete antes do for
	cout << "[ ";
	//Coloca os elementos e finaliza o loop
	for (int i = 0; i < sizeVet; i++)
	{
		cout << vet[i] << "  ";
	}
	//e depois coloca ] para fechar o vetor
	cout << "] \n\n";
}

void duplicarVetor(int *vet, int sizeVet)
{
	cout << "[ ";
	//função percorre o vetor e duplica os valores do vetor
	for (int i = 0; i < sizeVet; i++)
	{
		//elemento recebe ele mesmo * 2
		vet[i] = vet[i] * 2;				
		cout << vet[i] << "  ";
	}
	 cout << "] \n\n";
}

//esta função recebe um array(na realidade recebe o endereço do primeiro elemento do array)
//e devolve um array invertido
int *inverterVetor(int *vet, int sizeVet)
{
	//para inverter o vetor iremos usar um vetor auxiliar
	//ele precisa ser estático pois senão ao sair da função ele iria desaparecer da memória, e não conseguiria ser enviado como retorno da função
	int j = 0;
	static int vetorInvertido[10];
	
	//Para conseguir um vetor com valores invertidos: faremos
	//começa do indice sizeVet -1 ou seja 10 -1 = 9 e vai até 0 i>=0
	for (int i = sizeVet - 1; i >= 0; i--)
	{
		//a variávei j vai de zero até 9
		//enquanto i vai de 9 até 0
		/*assim teremos dentro do for todas estas execuções
		vetorInvertido[0] = vet[9];
		vetorInvertido[1] = vet[8];
		vetorInvertido[2] = vet[7];
		vetorInvertido[3] = vet[6];
		vetorInvertido[4] = vet[5];
		vetorInvertido[5] = vet[4];
		vetorInvertido[6] = vet[3];
		vetorInvertido[7] = vet[2];
		vetorInvertido[8] = vet[1];
		vetorInvertido[9] = vet[0];
		*/
		vetorInvertido[j] = vet[i];
		j++;
	}
	//Aqui a função está retornando o mesmo que o endereço de memória
	//do primeiro elememento do ArrayInvertido
	return vetorInvertido;
}

