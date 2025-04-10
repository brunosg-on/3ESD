#include <stdio.h>
#include <stdlib.h>
#include "Tempo.h"
struct tempo
{
	int segundo, minuto, hora;
	
};

Tempo* CriarTempo(int h, int m, int s)
{
	Tempo* t = (Tempo*) malloc(sizeof(Tempo));
	if(t)
	{
		//Ajustando o tempo
		if(s > 59)
		{
			m += s/60;
			s = s%60;
		}
		
			if(m > 59)
		{
			h += m/60;
			m = m%60;
		}
		
		t->hora = h;
		t->minuto = m;
		t->segundo = s;
		return t;	
	}
}
int Segundos(Tempo* t)
{
	return (t->hora*3600) + (t->minuto*60) + (t->segundo);
}

void SegTemp(int segundos)
{
	printf("\n%d:%d:%d\n", segundos/3600, (segundos%3600)/60, (segundos%3600)%60);
}

void ExibirTempo(Tempo* tempo)
{
	printf("\n%d:%d:%d\n",tempo->hora, tempo->minuto, tempo->segundo);
}
Tempo* SomarTempo(Tempo* tempo1, Tempo* tempo2)
{
	return CriarTempo(0,0,Segundos(tempo1) + Segundos(tempo1)); 
}
int CompTempo(Tempo* tempo1, Tempo* tempo2)
{
	if ((Segundos(tempo1) - Segundos(tempo2)) > 0)
	{
		return 1;
	}
	if((Segundos(tempo1) - Segundos(tempo2)) < 0)
	{
		return -1;
	}
	return 0;
}
Tempo* SubTempo(Tempo* tempo1, Tempo* tempo2)
{

	if ((Segundos(tempo1) - Segundos(tempo2)) > 0)
	{
		return CriarTempo(0,0,(Segundos(tempo1) - Segundos(tempo2)));
	}
	return CriarTempo(0,0,(Segundos(tempo1) - Segundos(tempo2))*-1);
}