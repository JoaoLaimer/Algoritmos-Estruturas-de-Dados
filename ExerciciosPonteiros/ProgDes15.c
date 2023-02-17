/*Crie uma func¸ao que receba como par ˜ ametro um array e o imprima. N ˆ ao utilize ˜ ´ındices
para percorrer o array, apenas aritmetica de ponteiros. */

#include <stdio.h>

void numberArray(int *array);

int main(void)
{
    int vetor[5],i;

    for( i = 0; i < 5 ; i++ )
    {
        scanf("%d",&vetor[i]);
    }

    numberArray(vetor);

    return 0;

}

void numberArray(int *array)
{
    
    for( int i = 0 ; i < 5 ; i ++)
    {
        printf("%d ",*array);
        array++;
    }

}