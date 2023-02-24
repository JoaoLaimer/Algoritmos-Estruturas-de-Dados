/*Crie uma func¸ao para somar dois arrays. Esta func¸ ˜ ao deve receber dois arrays e retornar ˜
a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente
entao a func¸ ˜ ao retornar ˜ a ZERO (0). Caso a func¸ ´ ao seja conclu ˜ ´ıda com sucesso a mesma
deve retornar o valor UM (1). Utilize aritmetica de ponteiros para manipulac¸ ´ ao do array.*/

#include <stdio.h>
#include <stdbool.h>

#define TAM 100

bool somaArrays(int *array1, int *array2);
int main(void)
{
    int array1[TAM] = {0} ,array2[TAM] = {0} ,t1,t2,i;

    printf("tamanho do array 1: ");
    scanf("%d",&t1);

    for ( i = 0 ; i < t1 ; i ++)
    {
        printf("elemento %d: ",i+1);
        scanf("%d",&array1[i]);
    }

    
    printf("tamanho do array 2: ");
    scanf("%d",&t2);

    for ( i = 0 ; i < t2 ; i ++)
    {
        printf("elemento %d: ",i+1);
        scanf("%d",&array2[i]);
    }

    if(somaArrays(array1,array2) == true)
    {
        printf("verdade");
    }
    else
    {
        printf("mentira");
    }

    return 0;

}

bool somaArrays(int *array1, int *array2)
{
    int i,*inicio1,*inicio2,array3[TAM];

    inicio1 = array1;
    inicio2 = array2;

    for(i = 0 ; *array1 != 0 || *array2 != 0; array1++, array2++,  i++)
    {
        array3[i] = *array1 + *array2;
        printf("%d ",array3[i]); 
        if(*array1 == 0 || *array2 == 0)
        {
            return false;
        }
    }

    return true;
    
}