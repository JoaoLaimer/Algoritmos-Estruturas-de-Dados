/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). 
Modifique os valores de cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a modificacao. */

#include <stdio.h>

int main(void)
{
    int num = 5;
    char ch = 'a';
    int *pnum;
    char *pch;

    printf("%d\n",num);
    printf("%c\n",ch);

    pnum = &num;
    *pnum = 10;
    
    printf("%d\n",num);

    pch = &ch;
    *pch = 'b';
    printf("%c",ch);

    return 0;
}
