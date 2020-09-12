#include <iostream>
#include <cstring>

#include "turma.h"

char * 
Turma::getComponenteCurricular(){
    return m_componenteCurricular;
}

void 
Turma::setComponenteCurricular(const char * componenteCurricular_){
    strcpy(m_componenteCurricular, componenteCurricular_);
};

char *
Turma::getNome(){
    return m_nome;
};

void 
Turma::setNome(const char * nome_){
    strcpy(m_nome, nome_);
};

int 
Turma::getQuantidadeDeAlunos(){
    return m_quantidadeDeAlunos;
};
void
Turma::setQuantidadeDeAlunos(int quantidadeDeAlunos_){
    m_quantidadeDeAlunos = quantidadeDeAlunos_;
};

Aluno *
Turma::getAluno(){
    return m_aluno;
};
void
Turma::setAluno(Aluno * aluno_){
    m_aluno = aluno_;
};

void
Turma::print(){
	std::cout << "Nome: " << m_nome << std::endl;
	std::cout << "Componente Curricular: " << m_componenteCurricular << std::endl;
    std::cout << "Quantidade de Alunos: " << m_quantidadeDeAlunos << std::endl;
    std::cout << "Alunos: " << std::endl;
    for (int i = 0; i < m_quantidadeDeAlunos; i++)
    {
        std::cout << "Matricula: " << m_aluno[i].m_matricula << std::endl;
	    std::cout << "Nome: " << m_aluno[i].m_nome << std::endl;
	    std::cout << "Idade: " << m_aluno[i].m_idade << " Periodo: " << m_aluno[i].m_periodo << " Já passou em fmc?  " << m_aluno[i].m_passouFmc << std::endl;
    }
    
}

