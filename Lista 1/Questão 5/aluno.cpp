#include <iostream>
#include <cstring>

#include "aluno.h"

char *
Aluno::getMatricula(){
	return m_matricula;
}

void 
Aluno::setMatricula(const char * matricula){
	strcpy(m_matricula, matricula);
}

char * 
Aluno::getNome(){
	return m_nome;
}
	
void 
Aluno::setNome(const char * nome_){
	strcpy(m_nome, nome_);
}

int 
Aluno::getIdade(){
	return m_idade;
}

void 
Aluno::setIdade(int idade_){
	m_idade = idade_;
}

int 
Aluno::getPeriodo(){
	return m_periodo;
}

void 
Aluno::setPeriodo(int periodo_){
	m_periodo = periodo_;
}

char * 
Aluno::getPassouFmc(){
	return m_passouFmc;
}

void 
Aluno::setPassouFmc(const char * passouFmc_){
	strcpy(m_passouFmc, passouFmc_);
}

void
Aluno::print(){
	std::cout << "Matricula: " << m_matricula << std::endl;
	std::cout << "Nome: " << m_nome << std::endl;
	std::cout << "Idade: " << m_idade << " Periodo: " << m_periodo << " Já passou em fmc?  " << m_passouFmc << std::endl;
}