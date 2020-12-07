#include <iostream>
#include <locale.h>

void coordenadas(int x, int y, int z = 10); // parâmetro padrão é quando você no protótipo já define um valor a variavel
int contadorChamadas(); // exemplo de variável static (quando a variável é mantida com seu valor atual mesmo depois de sair do bloco

int variavelGlobal; //poderá ser usada em qualquer bloco desse cpp

int main() 
{
	setlocale(LC_ALL, "portuguese");

	coordenadas(30, 30); //como a variável z já tem valor padrão, posso não passar, 
						 //mas se passar algum argumento irá considerar o que foi passado
	
	
	//int i = 1; // nesse caso a variável i foi criada fora do for, poderá ser usada dentro do for e depois que sair do for
	for (int i = 1; i <= 5; i++) //nesse caso a variável i foi criada dentro do bloco for, então assim que sair do bloco for ele será apagada
	{
		std::cout << "\nNumero variável estática: " << contadorChamadas() << '\n';
	}

	//std::cout << "\n" << i << "\n"; //se a variavel i for criada dentro do bloco for, nesse exemplo não funcionará fora do bloco
									//se a variavel i for criada fora do bloco for, nesse exemplo funcionará com o valor atual de i (depois que sai do bloco)

	std::cout << std::endl;
	system("pause");
	return 0;
}

void coordenadas(int x, int y, int z)
{	
	variavelGlobal = x;
	std::cout << "\nO valor da variável global antes é: " << variavelGlobal << std::endl;

	// cálculo das coordenadas
	x *= x;
	y *= y;
	z *= z;

	std::cout << "\nCoordenadas calculadas (" << x << " - " << y << " - " << z << ")\n";

	variavelGlobal = x;
	std::cout << "\nO valor da variável global depois é: " << variavelGlobal << std::endl;
}

int contadorChamadas()
{
	static int numContadorChamadas = 0; // usa-se static para variáveis estáticas que serão criadas apenas uma vez e será mantido seu valor
		// se usar sem static, toda a vez que chamar a função a variável será criada e inicializada, ficando sempre com 0 e depois com 1 no numContadorChamadas++;
	numContadorChamadas++;
		
	return numContadorChamadas;
}
