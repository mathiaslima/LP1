class Aluno
{
private:
	char 	m_matricula[10];
	char 	m_nome[80];
	int 	m_idade;
	int 	m_periodo;
	char 	m_passouFmc[3];
public:
	char * getMatricula();
	void setMatricula(const char * matricula_);

	char * getNome();
	void setNome(const char * nome_);

	int getIdade();
	void setIdade(int idade_);

	int getPeriodo();
	void setPeriodo(int periodo_);

	char * getPassouFmc();
	void setPassouFmc(const char * passouFmc_);

	void print();
};