typedef struct candidato Candidato;

Candidato* criar(int inscricao, char nome[], int idade, float nota);
void liberar(Candidato* candidato);
void acessar(Candidato *candidato, int *inscricao, char *nome[], int *idade, float *nota);
void atribuir(Candidato *candidato, int inscricao, char nome[], int idade, float nota);
void exibir(Candidato* candidato);
Candidato* buscar(Candidato* candidato[], int inscricao, int numero );
