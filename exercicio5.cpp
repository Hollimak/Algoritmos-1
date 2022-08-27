#include <stdio.h>
#include <stdlib.h>

int main ()
{
int p, i, u, r;
printf("Para fazer essa conta a corrente eletrica, tensao e resistencia, uma dessa tem que receber o valor de  zero\n");
printf("Digite a corrente eletrica:\n");
scanf("%d", &i);
printf("Digite a tensao:\n");
scanf("%d", &u);
printf("Digite a resistencia:\n");
scanf("%d", &r);

if(r==0)
{
    p=(i*u);
    printf("o valor da potencia eh:\n %d", p);
}
if(u==0)
{
    p=r*(i*i);
    printf("o valor da potencia eh:\n %d", p);

}

if(i==0)
{
    p = (u*u)/r;
    printf("o valor da potencia eh:\n %d", p);
}
    system("pause");
    return 0;
}