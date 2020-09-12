#include <iostream>

#include "aluno.h"
#include "turma.h"

int main(int argc, char const *argv[])
{
	
	Aluno * teste;
	Turma turmaTeste;
	turmaTeste.setNome("Turma 1");
	turmaTeste.setComponenteCurricular("LP1");
	turmaTeste.setQuantidadeDeAlunos(20);
	for (int i = 0; i < turmaTeste.getQuantidadeDeAlunos(); i++)
	{
		teste[i].setMatricula("201920054");
		teste[i].setNome("Mathias Morais Lima");
		teste[i].setIdade(20);
		teste[i].setPassouFmc("Sim");
		teste[i].setPeriodo(3);
	}
	turmaTeste.setAluno(teste);
	
	turmaTeste.print();
	
	return 0;
}