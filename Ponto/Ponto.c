#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"
struct ponto
{
	float x, y;
};

Ponto* pto_criar(float x, float y)
{
	Ponto* p = (Ponto*) malloc(sizeof(Ponto));
	if(p)
	{
		p->x = x;
		p->y = y;
		return p;	
	}
	
}
void pto_liberar(Ponto* p)
{
	free(p);
}

void pto_acessar(Ponto* p, float *x, float *y)
{
	*x = p->x;
	*y = p->y;
}
void pto_atribuir(Ponto* p, float x, float y)
{
	p->x = x;
	p->y = x;
}
Ponto* pto_copiar(Ponto* p)
{
	return pto_criar(p->x, p->y);
}
char* pto_getPonto(Ponto* p)
{
	char* pt;
	pt = (char*) malloc(sizeof(*p) + 8);
	sprintf(pt,"(%.2f,%.2f)", p->x, p->y);
	return pt;
}

