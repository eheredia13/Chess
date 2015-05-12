// Clase derivada Pieza:

#pragma once

#include "Pieza.h"

class Rey : public Pieza
{

public:
	Rey(int x, int y, int color);
	~Rey(void);
	//restricciones de movimiento
	virtual void moverPieza (struct jugada*);
	void comeRey (void);
	void enrocar (bool movido);
};



