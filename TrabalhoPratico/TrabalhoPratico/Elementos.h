#ifndef ELEMENTOS_H
#define ELEMENTOS_H
#pragma once
class Elementos
{
public:
	Elementos();
	~Elementos();

	int posx, posy;
	char avatar;
	int raioVisao, raioMovimento, dx = 0, dy = 0;
	int energia;
	int energiaInicial;
	int foraDoNinho = 0;
};

#endif