#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //declaro as variaveis
    float a, b, c;

    printf("Digite o primeiro valor:\n");
    scanf("%f", &a);
    printf("Digite o segundo valor:\n");
    scanf("%f", &b);
    printf("Digite o terceiro valor:\n");
    scanf("%f", &c);
    
    // imprimo os resultados 

    printf("Primeiro numero:%f\n", a);
    printf("Segundo numero:%f\n", b);
    printf("Terceiro numero:%f\n", c);


    system("pause");
    return 0;
}