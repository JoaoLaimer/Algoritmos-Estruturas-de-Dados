#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p,*inicio;

    p = (int *)malloc(9*sizeof(int));
    inicio = p;
    p[0] = 0;
    p[1] = 1;
    p[2] = 2;
    p[3] = 3;
    p[4] = 4;
    p[5] = 5;
    p[6] = 6;
    p[7] = 7;
    p[8] = 8;

    for(int i = 0 ; i < 9 ;i++)
    {
        printf(" %d\n",p[i]);
    }
    p = inicio;
    
    p = (int *)realloc(inicio,12*sizeof(int));

    p[9] = 9;
    p[10]= 10;
    p[11] = 11;

    
    for(int i = 0; i < 10 ; i++,p++)
    {
        printf(" \t%d\n",*p);
    }
    free(p);

    return 0;
}