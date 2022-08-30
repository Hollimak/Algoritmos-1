#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n;
    printf("Digite um valor para saber o quadrado dele\n");
    scanf("%d", &n);
    
    for(n; n>= 0; n--)
    { 
           printf("O quadrado de %d eh %d\n", n, n*n); 
    }
    printf("\n\n\n");
    system("pause");    
    
    return 0;
}