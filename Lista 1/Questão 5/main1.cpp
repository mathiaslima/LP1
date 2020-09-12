#include <iostream>

#include "aluno.h"

int main(int argc, char const *argv[])
{
	Aluno teste;
	teste.setMatricula("201920054");
	teste.setNome("Mathias Morais Lima");
	teste.setIdade(20);
	teste.setPassouFmc("Sim");
	teste.setPeriodo(3);
	
	teste.print();
	return 0;
}