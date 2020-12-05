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
			cout << "\nAcesso Negado! Desaja tentar novamente? (s = sim; n = n�o)" << endl;
			cin >> resposta;			
			
			if (resposta == 'N' || resposta == 'n') {
				system("pause");
				exit(0);
			}			
		}
	} while ((resposta == 'S' || resposta == 's') && bAcesso == false);
	
	
	if (bAcesso)
	{
		cout << "Fez sol? (0 = n�o; 1 = sim) " << endl; 
		cin >> bFezSol;
		cout << "Carro Pronto? (0 = n�o; 1 = sim) " << endl;
		cin >> bCarroPronto;
		cout << "Sal�rio Depositado? (0 = n�o; 1 = sim) " << endl;
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

	/* Operador Tern�rio - usa o ? para a ide saber que � uma opera��o tern�ria e o : separa a instru��o true e false
	(condi��o) ? instru��o true : instru��o false;
	
	pode ser usado para uma vari�vel tamb�m:
	variavel = (condi��o) ? valor1 true : valor2 false;
	*/

	(bFezSol == true) ? cout << "\nHoje est� fezendo Sol" << endl : cout << "\nHoje n�o est� fezendo Sol" << endl;

	carroPronto = (bCarroPronto == true) ? "O Carro ficou pronto SIM!!" : "O carro N�O ficou pronto!!";
	cout << "O carro ficou pronto? " << carroPronto << endl;

	system("pause");

	return 0;
}