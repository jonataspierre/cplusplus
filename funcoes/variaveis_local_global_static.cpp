#include <iostream>
#include <locale.h>

void coordenadas(int x, int y, int z = 10); // par�metro padr�o � quando voc� no prot�tipo j� define um valor a variavel
int contadorChamadas(); // exemplo de vari�vel static (quando a vari�vel � mantida com seu valor atual mesmo depois de sair do bloco

int variavelGlobal; //poder� ser usada em qualquer bloco desse cpp

int main() 
{
	setlocale(LC_ALL, "portuguese");

	coordenadas(30, 30); //como a vari�vel z j� tem valor padr�o, posso n�o passar, 
						 //mas se passar algum argumento ir� considerar o que foi passado
	
	
	//int i = 1; // nesse caso a vari�vel i foi criada fora do for, poder� ser usada dentro do for e depois que sair do for
	for (int i = 1; i <= 5; i++) //nesse caso a vari�vel i foi criada dentro do bloco for, ent�o assim que sair do bloco for ele ser� apagada
	{
		std::cout << "\nNumero vari�vel est�tica: " << contadorChamadas() << '\n';
	}

	//std::cout << "\n" << i << "\n"; //se a variavel i for criada dentro do bloco for, nesse exemplo n�o funcionar� fora do bloco
									//se a variavel i for criada fora do bloco for, nesse exemplo funcionar� com o valor atual de i (depois que sai do bloco)

	std::cout << std::endl;
	system("pause");
	return 0;
}

void coordenadas(int x, int y, int z)
{	
	variavelGlobal = x;
	std::cout << "\nO valor da vari�vel global antes �: " << variavelGlobal << std::endl;

	// c�lculo das coordenadas
	x *= x;
	y *= y;
	z *= z;

	std::cout << "\nCoordenadas calculadas (" << x << " - " << y << " - " << z << ")\n";

	variavelGlobal = x;
	std::cout << "\nO valor da vari�vel global depois �: " << variavelGlobal << std::endl;
}

int contadorChamadas()
{
	static int numContadorChamadas = 0; // usa-se static para vari�veis est�ticas que ser�o criadas apenas uma vez e ser� mantido seu valor
		// se usar sem static, toda a vez que chamar a fun��o a vari�vel ser� criada e inicializada, ficando sempre com 0 e depois com 1 no numContadorChamadas++;
	numContadorChamadas++;
		
	return numContadorChamadas;
}
