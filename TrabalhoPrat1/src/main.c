#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int jeitosDeSubirEscada(int n);

int climbStairs(int n);
int findWays(int n);
int main(int argc, char const *argv[])
{
    int n;
    do
    {
        scanf("%d",&n);
    }while(n < 0 || n > 45);

    printf("%d",jeitosDeSubirEscada(n));

    return 0;
}

int jeitosDeSubirEscada(int n)
{
    
    //int *v = malloc(n*sizeof(int));//
    //int i,count = 0;
    if(n <= 1)
    {
        return 1;
    }

   /* for ( i = 0; i < n; i ++)
    {
        v[i] = 1;
    }

    for ( i = 0; i < n; i ++)
    {
        if(v[i] == v[i + 1])
        {
            count++;
        }
        
    }*/

    return jeitosDeSubirEscada(n-2) + jeitosDeSubirEscada(n-1);
    
    
}


// 4 

// 1 1 1 1

// 1 1 2
// 1 2 1
// 2 1 1

// 2 2




// 5

// 1 1 1 1 1

// 1 1 1 2
// 1 1 2 1
// 1 2 1 1
// 2 1 1 1

// 2 1 2
// 2 2 1
// 1 2 2

// 6

// 1 1 1 1 1 1

// 1 1 1 1 2
// 1 1 1 2 1
// 1 1 2 1 1
// 1 2 1 1 1
// 2 1 1 1 1

// 2 1 1 2
// 2 1 2 1
// 2 2 1 1
// 1 2 1 2
// 1 2 2 1
// 1 1 2 2

// 2 2 2




