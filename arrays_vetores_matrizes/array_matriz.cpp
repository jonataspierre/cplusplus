#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");


	//matriz é quando temos mais de uma dimensão, no caso de matriz 2x2 será linha e coluna (x,z)
	//matriz 3x3 será (x, y, z)
	int matriz[5][5];//declarando quantidade de linhas e colunas, para inicializar, basta colocar entre {}

	//nesse caso gravei os números dentro da matriz
	for (int i = 0; i < 5; i++) //for para percorrer a linha
	{
		for (int j = 0; j < 5; j++) // for aninhando para percorrer cada coluna da linha
		{
			if (j == i)
				matriz[i][j] = 0;
			else if (j > i)
				matriz[i][j] = 1;
			else if (j < i)
				matriz[i][j] = -1;
			
			cout << "  " << matriz[i][j] ;
		}

		cout << endl;
	}

	cout << "\n************************\n";

	//nesse caso só exibir na tela
	for (int i = 0; i < 5; i++) //for para percorrer a linha
	{
		for (int j = 0; j < 5; j++) // for aninhando para percorrer cada coluna da linha
		{
			if (j == i)
				cout << " 0";
			else if (j > i)
				cout << " 1";
			else if (j < i)
				cout << "-1";

			cout << "  ";
		}

		cout << endl;
	}
	
	cout << "\n************************\n";

	//exemplo de matriz declarada e já iniciada
	int matrizIn[3][2]{
		{0, 1},
		{1, 2},
		{2, 3}
	};

	cout << "\n" << matrizIn[2][1] << endl;

	cout << endl;
	
	system("pause");
	return 0;
}
