// Clase derivada Pieza:

#pragma once

#include "Pieza.h"

class Peon : public Pieza
{
	bool movido2casillas;

public:
	Peon(int x, int y, int t);
	~Peon(void);
	//restricciones de movimiento
	void muevePeon (void);
	void comePeon (void);
};



