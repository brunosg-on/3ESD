#include <stdio.h>
#include "Candidato.h"
#include <stdlib.h>
#include <string.h>
struct candidato
{
	int inscricao;
	char nome[51];
	int idade;
	float nota;	
};

Candidato* criar(int inscricao, char nome[], int idade, float nota)
{
	Candidato* candidato = (Candidato*) malloc(sizeof(Candidato));
	if(candidato)
	{	
		candidato->inscricao = inscricao;
		strcpy(candidato->nome, nome);
		candidato->idade = idade;
		candidato->nota = nota; 
		return candidato;
	}
	
	void liberar(Candidato* candidato)
	{
		free(candidato);
	}
	
	void acessar(Candidato *candidato, int *inscricao, char *nome[], int *idade, float *nota)
	{
		*inscricao = candidato->inscricao;
		strcpy(*nome, candidato->nome);
		*idade = candidato->idade;
		*nota = candidato->nota;
	}
	
	void atribuir(Candidato *candidato, int inscricao, char nome[], int idade, float nota)
	{
		candidato->inscricao = inscricao;
		strcpy(candidato->nome, nome);
		candidato->idade = idade;
		candidato->nota = nota ;
	}
	
	void exibir(Candidato* candidato)
	{
		printf("Inscricao: %d\n",candidato->inscricao);
		printf("Nome: %s\n",candidato->nome);
		printf("Inscricao: %d\n",candidato->inscricao);
		printf("idade: %d\n",candidato->idade);
		printf("Nota: %d\n",candidato->nota);
	}
	Candidato* buscar(Candidato* candidato[], int inscricao, int numero )
	{
		
	}
}

