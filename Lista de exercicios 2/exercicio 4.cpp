#include <stdio.h>
#include<stdlib.h>

int main()
{
int idade, sexo;
printf("Programa pra saber se pode se alistar no exercito\n\n");
printf("Qual e o seu sexo (Se for homem digita 1 se for mulher digite 2):\n");
scanf("%d", &sexo);
printf("Qual eh a sua idade:\n");
scanf("%d", &idade);

if(sexo==1 && idade>=18)
{
    printf("Voce pode se alistar, parabens !!\n");
}
if(sexo==2 || idade<18)
{
    printf("Voce nao pode se alistar\n");
}

    printf("\n\n");
    system("pause");
    return 0;
}