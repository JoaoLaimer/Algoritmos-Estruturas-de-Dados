/*Escreva uma func¸ao que aceita como par ˜ ametro um array de inteiros com N valores, e ˆ
determina o maior elemento do array e o numero de vezes que este elemento ocorreu ´
no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15,
8, 6, 15, a func¸ao deve retorna para o programa que a chamou o valor 15 e o n ˜ umero 3 ´
(indicando que o numero 15 ocorreu 3 vezes). A func¸ ´ ao deve ser do tipo ˜ void*/

#include <stdio.h>

void funcaoQueFazCoisaDoExercicio(int *array,int tam);

int main(void)
{
    int array[50], i, n;

    printf("Tamanho: ");
    scanf("%d",&n);
    
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&array[i]); 
    }

    funcaoQueFazCoisaDoExercicio(array,n);

    return 0;

}

void funcaoQueFazCoisaDoExercicio(int *array,int tam)
{
    int temp = 0,maior,i,*inicio;

    maior = *array;
    //inicio = array;

    for(i = 0; i < tam; i ++ )
    {
        if(*array > maior)
        {
            maior = *array;
        }
        printf("%d ",*array);
        array++;
    }

    array = array-tam;
    for(i = 0; i < tam; i ++ )
    {
        if(*array == maior)
        {
            temp++;
        }
        array++;
    }

    printf("numero maior:%d\n quantidade de vezes que o num maior aparece:%d", maior, temp);

}