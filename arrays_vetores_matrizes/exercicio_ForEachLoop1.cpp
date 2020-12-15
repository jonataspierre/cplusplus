#include <iostream>
#include <iomanip>

using namespace std;

//Um org�o de tr�nsito captrou algumas velocidades e precisa saber e m�dia:
//ENTRADA: 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7
//PROCESSAMENTO: for each C++ e palavra reservada auto
//SAIDA: valor m�dio da velocidade de um estrada


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

	//como padr�o, o precision vai como floatdefault, que significa que o numero do parametro ser� a quantidade
	//total de n�meros exibidos, antes e depois da ,
	//para contrar a precis�o somente 'depois' da , usa o fixed (quantas casas decimais depois da virgula)
	cout << "A velocidade m�dia foi de: " << fixed << setprecision(2) << media << " Km/h." << endl;

	cout << "\n***********************************************\n";	
	
	system("pause");
	return 0;
}
