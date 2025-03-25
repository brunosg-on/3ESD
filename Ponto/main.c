
#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"
#include "Ponto.c"
void main()
{
	Ponto *p1, *p2;
	p1 = pto_criar(14,7);
	printf("%s",pto_getPonto(p1));
		
}
