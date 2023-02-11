#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool IsHappy(int number);
bool RepeatDetector(int *lista,int size);

int main(void){
    int num;

    scanf("%d",&num);

    IsHappy(num);

    return 0; 

}

bool IsHappy(int number)
{

 int temp = 0,i;
 int *num_array,*startPoint,separetedNum_array[31];
 bool flag = false;

    
    num_array = ( int * )malloc( 2*sizeof( int ) );

    startPoint = num_array;
    do
    {   
        temp++;
        startPoint = ( int * )realloc( startPoint, temp*sizeof( int ) );
        
        for( i = 31 ; i >= 0 ; i-- )
        {
            separetedNum_array[i] = number/pow( 10, i );
            number = number - separetedNum_array[i]*pow( 10, i );
        }

        for(i = 31 ; i >= 0 ; i-- )
        {
            number += separetedNum_array[i]*separetedNum_array[i];
        }
        
        *num_array = number;
        num_array++;

        if( temp > 20 )
        { 
            flag = RepeatDetector( startPoint, temp );
        }

   
    }while( number != 1 && flag == false );

    for(int i = 0; startPoint != NULL; i++)
    {
        printf("%d\n",startPoint[i]);
    }
    
    free(startPoint);

    if( number == 1 )
    {
        
        printf("is happy number");
        return true;
    }
    else
    {
        printf("is NOT happy number");
        return false;
    }

}
/*
*   Detecta um numero repetido em um certo indice do vetor.
*/

bool RepeatDetector(int *array,int size)
{
    int *p,*q,i;

    p = array+size;

            for( i = 1, q = array ; i < size ; q++, i++ )
            {   
                if( *p == *q )
                {
                    return true;
                    break;
                }
            }
    return false;
}
