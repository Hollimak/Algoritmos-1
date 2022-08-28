#include <stdio.h>
#include<stdlib.h>

int main ()
{
int a, b;
printf("Programa pra dizer qual numero eh maior e qual eh o menor\n\n");

printf("Digite o primeiro valor\n");
scanf("%d", &a);
printf("Digite o segundo valor\n");
scanf("%d", &b);

if (a>b)
{
    printf("Numero maior eh %d ", a);
}
else
{
    printf("Numero maior eh %d ", b);
}
if (a==b)
{
    printf("e os numeros sao iguais", a,b);
}
    printf("\n\n");
    system("pause");
    return 0;
}