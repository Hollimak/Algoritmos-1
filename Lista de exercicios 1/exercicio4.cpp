#include <stdio.h>
#include <stdlib.h>

int main()
{

int a, quadrado;
printf("Programa para saber se quadrado eh um numero par:\n");

scanf("%d", &a);

if(a%2 == 0)
{
    quadrado = a*a;
    printf("O quadrado de %d e: %d \neh numero par \n", a,quadrado);
       
}
else
{
    printf("%d nao e um numero par\n", a);
}

system("pause");
   
 return 0;
}