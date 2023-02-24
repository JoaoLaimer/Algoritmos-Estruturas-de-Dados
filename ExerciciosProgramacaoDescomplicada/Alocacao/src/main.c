/*Fac¸a um programa que leia uma quantidade qualquer de numeros armazenando-os na ´
memoria e pare a leitura quando o usu ´ ario entrar um n ´ umero negativo. Em seguida, ´
imprima o vetor lido. Use a func¸ao REALLOC.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *array,*arrayStart, i,flag = 0;

    array = (int *)malloc(sizeof(int));

    arrayStart = array;

    for(i = 1 ; flag < 1 ; array++,i++)
    {   
        arrayStart = (int *)realloc(arrayStart,i*sizeof(int));
        printf("numero %d: ",i);
        scanf("%d",array);
        
        if(*array < 0)
        {
            flag++;    
        }
    }
    
    

    for( array = arrayStart; *array > 0 ; array++)
    {
        printf("%d ",*array);
    }


    free(arrayStart);

    return 0;

}