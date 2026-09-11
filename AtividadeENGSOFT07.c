#include <stdio.h>
int main()
{
    int idade;

    printf("Digite o valor para a entrada do teste: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade < 16)
        printf("Não empregar");
    else if (idade >= 16 && idade < 18)
        printf("Pode ser empregado em tempo parcial");
    else if (idade >= 18 && idade < 55)
        printf("Pode ser empregado em tempo integral");
    else if (idade >= 55 && idade < 99)
        printf("Não empregar"); 
    else 
    printf("Erro! Insira um valor no intervalo entre  0 e 99");
}                                               