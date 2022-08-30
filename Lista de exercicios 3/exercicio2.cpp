#include <stdio.h>
#include <stdlib.h>

int main ()
{
int n;
printf("Digite um valor para saber a soma:\n");
scanf("%d", &n);
for (n; n>=0; n--)
{
    printf("A soma de %d mais %d  eh %d\n", n, n+n);
}

    printf("\n\n");
    system("pause");   
    return 0;
}