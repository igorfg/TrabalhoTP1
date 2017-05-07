#ifndef _TUNOME_H_INCLUDED
#define _TUNOME_H_INCLUDED

#include "Nome.h"

class TUNome {

private:
	static string NOME_VALIDO;
	static string NOME_INVALIDO;

	Nome *nome;
	int estado;

	void setUp();
	void tearDown();
	void testeSucesso();
	void testeFalha();

public:
	const static int SUCESSO = 1;
	const static int FALHA = 0;

	int run();
};

#endif