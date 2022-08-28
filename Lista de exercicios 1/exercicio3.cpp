#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // insiro uma variavel float para dar resultados quebrados 
int a, b, c, d, media;
float resultado;


printf("Digite o primeiro valor:\n");
scanf("%d",  &a);
printf("Digite o segundo valor:\n");
scanf("%d", &b);
printf("Digite o terceiro valor:\n");
scanf("%d", &c);
printf("Digite o quarto valor:\n");
scanf("%d", &d);
printf("Digite a media:\n");
scanf("%d", &media);

resultado = (a + b + c + d)/ media;

printf("Resposta eh %f \n", resultado);


system("pause");
    return 0;
}