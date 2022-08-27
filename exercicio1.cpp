#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
// Aqui eu declaro as variáveis
char c [10];
int a;
float b;
// Agora faço os print e scanf para imprimir
    printf("Digite um nome com maximo de 10 caracteres:\n");
    scanf("%s", &c);
    printf("Digite um numero inteiro:\n");
    scanf ("%d", &a);
    printf("Digite um numero quebrado usando ponto:\n");
    scanf("%f", &b);

    printf("Voce digitou esse nome %s:\n", c);
    printf("voce digitou esse numero inteiro %d:\n", a);
    printf("voce digitou esse numero quebrado %f:\n", b);
    

    
    system("pause");
    return 0;
}