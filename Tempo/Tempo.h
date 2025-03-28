
typedef struct tempo Tempo;
/*Cria��o de uma unidade de tempo
    � Permite definir um per�odo de tempo em horas, minutos e segundos.
    � Ajusta  automaticamente os valores para garantir que estejam no formato correto
(por exemplo, 70 segundos se tornam 1 minuto e 10 segundos).*/
Tempo* CriarTempo(float hora, float minuto, float segundo);
/*Exibi��o de um per�odo de tempo
    � Mostra a unidade de tempo no formato HH:MM:SS.*/
void ExibirTempo(Tempo* tempo);

/*Convers�o para segundos
    � Retorna o valor total do per�odo de tempo convertido para segundos.*/
float Segundos(Tempo *tempo);
/*Convers�o de segundos para unidade de tempo
    � Recebe um valor em segundos e o converte para o formato HH:MM:SS.*/
void SegTemp(float segundo);
/*Soma de per�odos de tempo
      
    � Permite adicionar dois per�odos e retorna o resultado ajustado corretamente.*/
Tempo* SomarTempo(Tempo* tempo1, Tempo* tempo2);
/*Subtra��o de per�odos de tempo
    � Calcula a diferen�a entre dois per�odos, garantindo que o resultado seja
positivo.*/
Tempo* SubTempo(Tempo* tempo1, Tempo* tempo2);
/*Tempo* SubtrairTempo(Tempo* tempo1, Tempo* tempo2);

Compara��o de per�odos de tempo
      
    � Determina se um per�odo de tempo � maior, menor ou igual a outro.
    � Retorna -1 se o primeiro per�odo for menor, 0 se forem iguais e 1 se for maior.
int CompararTempo(Tempo* tempo1, Tempo* tempo2);*/
Tempo* comp(Tempo* tempo1, Tempo* tempo2);
