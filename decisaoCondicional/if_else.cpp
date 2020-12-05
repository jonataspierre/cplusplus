#include <iostream>
#include <tchar.h>
#include <string>

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso (false);

	char resposta ('s');

	string senhaAcesso = "123";
	string senhaDigitada;
	string carroPronto;	
	
	//Operados IF / Else = Simples
	do {
		cout << "Digite a senha de acesso: ";
		cin >> senhaDigitada;
		
		if (senhaDigitada == senhaAcesso)
		{
			cout << "\nAcesso Permitido!" << endl;
			cout << "----------------------------------" << endl;
			bAcesso = true;
		}
		else
		{
			cout << "\nAcesso Negado! Desaja tentar novamente? (s = sim; n = não)" << endl;
			cin >> resposta;			
			
			if (resposta == 'N' || resposta == 'n') {
				system("pause");
				exit(0);
			}			
		}
	} while ((resposta == 'S' || resposta == 's') && bAcesso == false);
	
	
	if (bAcesso)
	{
		cout << "Fez sol? (0 = não; 1 = sim) " << endl; 
		cin >> bFezSol;
		cout << "Carro Pronto? (0 = não; 1 = sim) " << endl;
		cin >> bCarroPronto;
		cout << "Salário Depositado? (0 = não; 1 = sim) " << endl;
		cin >> bSalarioDepositado;
		cout << "----------------------------------" << endl;
		
		//Operados IF / Else IF / Else = Composto 
		if (bFezSol && bCarroPronto && bSalarioDepositado)
		{
			cout << "\nVai dar Praia!!!" << endl;
		}
		else if (bSalarioDepositado)
		{
			cout << "\nVai dar Cinema!!!" << endl;
		}
		else
		{
			cout << "\nPartiu ficar em casa!!!" << endl;
		}		
	}

	cout << "***************************************************" << endl;

	/* Operador Ternário - usa o ? para a ide saber que é uma operação ternária e o : separa a instrução true e false
	(condição) ? instrução true : instrução false;
	
	pode ser usado para uma variável também:
	variavel = (condição) ? valor1 true : valor2 false;
	*/

	(bFezSol == true) ? cout << "\nHoje está fezendo Sol" << endl : cout << "\nHoje não está fezendo Sol" << endl;

	carroPronto = (bCarroPronto == true) ? "O Carro ficou pronto SIM!!" : "O carro NÃO ficou pronto!!";
	cout << "O carro ficou pronto? " << carroPronto << endl;

	system("pause");

	return 0;
}