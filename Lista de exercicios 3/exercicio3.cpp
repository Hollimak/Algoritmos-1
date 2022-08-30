#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
printf("Digite um valor\n");
scanf("%d", &n);

for (n; n>=0; n--)
{
    if(n%2==1)
    printf("Esses sao os numeros impares %d \n", n);
}

    printf("\n\n");
    system("pause");
    return 0;
}