#include <iostream>

#include "conjunto.h"

using namespace std;

int main(int argc, char const *argv[])
{	
	int tam;
	int el;
	Conjunto teste;
	cout << "Digite o tamanho do conjunto: " << endl;
	cin >> tam;
	teste.setTamanho(tam);
	int array[tam];
	cout << "Digite os elementos do conjunto: " << endl;
	for (int i = 0; i < teste.getTamanho(); i++)
	{
		cin >> el;
		array[i] = el;
	}
	teste.setElementosDoConjuntos(array);
	teste.calculeVarianca();
	return 0;
}