
typedef struct tempo Tempo;
/*Criação de uma unidade de tempo
    • Permite definir um período de tempo em horas, minutos e segundos.
    • Ajusta  automaticamente os valores para garantir que estejam no formato correto
(por exemplo, 70 segundos se tornam 1 minuto e 10 segundos).*/
Tempo* CriarTempo(int hora, int minuto, int segundo);
/*Exibição de um período de tempo
    • Mostra a unidade de tempo no formato HH:MM:SS.*/
void ExibirTempo(Tempo* tempo);

/*Conversão para segundos
    • Retorna o valor total do período de tempo convertido para segundos.*/
int Segundos(Tempo *tempo);
/*Conversão de segundos para unidade de tempo
    • Recebe um valor em segundos e o converte para o formato HH:MM:SS.*/
void SegTemp(int segundo);
/*Soma de períodos de tempo
      
    • Permite adicionar dois períodos e retorna o resultado ajustado corretamente.*/
Tempo* SomarTempo(Tempo* tempo1, Tempo* tempo2);
/*Subtração de períodos de tempo
    • Calcula a diferença entre dois períodos, garantindo que o resultado seja
positivo.*/
Tempo* SubTempo(Tempo* tempo1, Tempo* tempo2);
/*Tempo* SubtrairTempo(Tempo* tempo1, Tempo* tempo2);

Comparação de períodos de tempo
      
    • Determina se um período de tempo é maior, menor ou igual a outro.
    • Retorna -1 se o primeiro período for menor, 0 se forem iguais e 1 se for maior.
int CompararTempo(Tempo* tempo1, Tempo* tempo2);*/
int CompTempo(Tempo* tempo1, Tempo* tempo2);