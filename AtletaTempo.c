#include <stdio.h>
#include <string.h>
struct tat{
	int tempo,cod;
	char nome[50];
};
typedef struct tat tAtleta;
void obtemAtleta(int num,  tAtleta *atleta){

	/*printf("\nDigite o código do %dº atleta: ",num);
	scanf("%i",& (*atleta).cod);*/
	
	printf("\nDigite o tempo do %dº atleta: ",num);
	scanf("%i",&atleta->tempo);
	
	printf("\nDigite o nome do %dº atleta: ",num);
	fflush(stdin);
	gets(atleta->nome);
	
	return;
}

tAtleta leAtleta(int num){
	tAtleta atleta;
	/*printf("\nDigite o código do %dº atleta:\n",num);
	scanf("%i",&atleta.cod);*/
	
	printf("\nDigite o tempo do %dº atleta: ",num);
	scanf("%i",&atleta.tempo);
	return atleta;
}
int divisaoInteira(int dividendo, int divisor, int* quoc, int*resto){
    
    if (divisor==0)
        if (dividendo==0)
            return -1;
        else
            return 0;
    else{
        *quoc= dividendo/divisor;
        *resto=dividendo%divisor;
        return 1;
    }
    
}
void horario(int tempo, int *horas, int *minutos) {
	divisaoInteira(tempo,60, horas,minutos);
	return;
}

int OrdenarAtletas(tAtleta vAtletas[], int TAM)
{ 	
	tAtleta aux;
	int i, ordenado = 0;
	
	while(ordenado == 0)
	{
		ordenado = 1;
		for(i=0;i<TAM-1;i++)
		{
			if(vAtletas[i].tempo > vAtletas[i+1].tempo)
			{
				aux = vAtletas[i];
				vAtletas[i] = vAtletas[i+1];
				vAtletas[i+1] = aux;
				ordenado = 0;
			}	
		}	
	}
	ordenado = 0;
	while(ordenado == 0)
	{
		ordenado = 1;
		for(i=0;i<TAM-1;i++)
		{
			if(vAtletas[i].tempo == vAtletas[i+1].tempo)
			{
				
				if(strcmp (vAtletas[i].nome, vAtletas[i+1].nome) > 0)
				{
					aux = vAtletas[i];
					vAtletas[i] = vAtletas[i+1];
					vAtletas[i+1] = aux;
					ordenado = 0;
					
				}
				
			}	
		}	
	}
}

int main(void) 
{
	int TAM = 3;
	tAtleta vAtletas[TAM];

	int tempo_horas, tempo_minutos;
	int maiorTempo = -1, qtMaior= 0, contador, op;

    
    for(contador=0;contador<TAM;contador++)
	{
        //atleta=leAtleta(contador+1);
        obtemAtleta(contador+1, &vAtletas[contador]);

		horario(vAtletas[contador].tempo,&tempo_horas, &tempo_minutos);
		printf("\nTempo do %dº atleta foi %02i:%02ih\n", contador + 1, tempo_horas,tempo_minutos);
	
	}
	printf("colocacao\n");
	OrdenarAtletas(vAtletas, TAM);
	for(contador=0;contador<TAM;contador++)
	{
        
		printf("\n %d colocado Tempo do %s atleta foi %i minutos", contador +1, vAtletas[contador].nome , vAtletas[contador].tempo);
	
	}
	return 0;
}


