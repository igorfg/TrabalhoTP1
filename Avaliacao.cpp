#include "Avaliacao.h"

const int Avaliacao::AVALIACAO_MINIMA;
const int Avaliacao::AVALIACAO_MAXIMA;

void Avaliacao::setAvaliacao(int avaliacao) throw (invalid_argument) {
	validar(avaliacao);
	this->avaliacao = avaliacao;
}

void Avaliacao::validar(int avaliacao) throw (invalid_argument) {
	if (avaliacao < AVALIACAO_MINIMA || avaliacao > AVALIACAO_MAXIMA) {
		throw invalid_argument("A avaliacao deve ser 1, 2, 3, 4 ou 5\n");
	}
} 