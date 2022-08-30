#include <stdio.h>
#include <stdlib.h>

int main()
{
int graus;
int media = 6;
int contador;
float resultado, soma=0;


for(contador = 12; contador <=17 ; contador++)
{   
    printf("Digite quantos grau estava em %d horas\n", contador);
    scanf("%d", &graus);
    soma =soma+graus;
    
}
     resultado = (soma/ media);
     contador++;

    printf("Ah media de graus no periodo vespertino eh %f\n", resultado);

    printf("\n\n");
    system("pause");
    return 0;
}
