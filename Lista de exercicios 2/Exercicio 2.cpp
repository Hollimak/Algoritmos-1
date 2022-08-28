#include <stdio.h>
#include <stdlib.h>

int main ()
{
int idade;
float peso;

printf(" PROGRAMA PRA SABER SE PODE DOAR SANGUE OU NAO\n\n");

printf("Qual eh a sua idade:\n");
scanf("%d", &idade);
printf("Qual eh o seu peso:\n");
scanf("%f", &peso);

if(idade<=69 && idade>=18 && peso>=50)
{
    printf("voce pode doar sangue!\n", idade, peso);
}
else
{
    printf("voce nao pode doar sangue!\n", idade, peso);

}

    printf("\n\n");
    system("pause");
    return 0;
}