#include <iostream>
#include <cstring>

#include "conjunto.h"

int
Conjunto::getTamanho(){
	return m_tamanho;
}

void 
Conjunto::setTamanho(int tamanho_){
	m_tamanho = tamanho_;
}

int *
Conjunto::getElementosDoConjuntos(){
	return m_elementosDoConjunto;
}

void 
Conjunto::setElementosDoConjuntos(int *elementoDoConjunto_){
	m_elementosDoConjunto = elementoDoConjunto_;
}

void
Conjunto::calculeVarianca(){
	float mediaAritmetica;
	int somaTotal = 0;
	for (int i = 0; i < m_tamanho; i++)
	{
		somaTotal += m_elementosDoConjunto[i];
	}
	mediaAritmetica = somaTotal/m_tamanho;
	somaTotal = 0;

	for (int i = 0; i < m_tamanho; i++)
	{
		somaTotal += (m_elementosDoConjunto[i] - mediaAritmetica)*(m_elementosDoConjunto[i] - mediaAritmetica);
	}
	m_varianca = somaTotal/m_tamanho;
	std::cout << "A variaça do seu conjunto é " << m_varianca << ". " << std::endl;
}