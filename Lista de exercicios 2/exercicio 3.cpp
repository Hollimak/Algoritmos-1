#include <stdio.h>
#include<stdlib.h>

int main()
{
    printf("Programa pra saber se o ano de nascimento e valido\n\n");

int dia, mes, ano;
printf("Qual dia voce nasceu:\n")/
scanf("%d", &dia);
printf("Qual mes voce nasceu\n");
scanf("%d", &mes);
printf("Qual ano voce nasceu:\n");
scanf("%d", &ano);

if (dia<=31, mes<=12, ano<=2022)
{
    printf("Essa data eh valida\n", dia, mes, ano);

}
else
{
    printf("Essa data nao eh valida\n", dia, mes, ano);
}


    printf("\n\n");
    system("pause");
    return 0;
}