class Conjunto
{
private:
	int 	m_tamanho;
	int		*m_elementosDoConjunto;
	int		m_index;
	float	m_varianca;
public:

	int getTamanho();
	void setTamanho(int tamanho_);

	int *getElementosDoConjuntos();
	void setElementosDoConjuntos(int *elementosDoConjunto_);
	
	void calculeVarianca();
};