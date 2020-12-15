#include <iostream>
#include <iomanip>

using namespace std;

//Um orgão de trânsito captrou algumas velocidades e precisa saber e média:
//ENTRADA: 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7
//PROCESSAMENTO: for each C++ e palavra reservada auto
//SAIDA: valor médio da velocidade de um estrada


int main()
{
	setlocale(LC_ALL, "portuguese");

	float velocidades[] { 70.9f, 89.5f, 65.6f, 102.5f, 123.6f, 63.4f, 74.5f, 99.5f, 68.7f };
	int sizeVelocidades{ 0 };
	float sum{ 0.0f };
	float media{ 0.0f };

	for (auto velocidade : velocidades)
	{
		sum += velocidade;
		sizeVelocidades++;
	}

	
	media = sum / sizeVelocidades;

	//como padrão, o precision vai como floatdefault, que significa que o numero do parametro será a quantidade
	//total de números exibidos, antes e depois da ,
	//para contrar a precisão somente 'depois' da , usa o fixed (quantas casas decimais depois da virgula)
	cout << "A velocidade média foi de: " << fixed << setprecision(2) << media << " Km/h." << endl;

	cout << "\n***********************************************\n";	
	
	system("pause");
	return 0;
}
