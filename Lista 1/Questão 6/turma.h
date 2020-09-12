#include "aluno.h"

class Turma
{
private:
    Aluno   *m_aluno;
	char 	m_nome[80];
	char    m_componenteCurricular[80];
    int     m_quantidadeDeAlunos; 
public:
	char * getComponenteCurricular();
	void setComponenteCurricular(const char * componenteCurricular_);

	char * getNome();
	void setNome(const char * nome_);

	int getQuantidadeDeAlunos();
	void setQuantidadeDeAlunos(int quantidadeDeAlunos_);

	Aluno * getAluno();
    void setAluno(Aluno * aluno_);

	void print();
};