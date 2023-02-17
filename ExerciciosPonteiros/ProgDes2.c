/*Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
exiba o maior endereco*/
#include <stdio.h>

int main(void)
{
    int num1 = 1, num2 = 2;
    int *pnum1, *pnum2;

    pnum1 = &num1;
    pnum2 = &num2;

    if(*pnum1 > *pnum2)
    {
        printf("%d",*pnum1);
    }else
    {
        printf("%d",*pnum2);
    }

    return 0;

}