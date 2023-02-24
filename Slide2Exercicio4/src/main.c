#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    void *pointer = malloc(3*sizeof(int));
    void *qointer = malloc(3*sizeof(int));
    *(int *)pointer = 1;
        pointer++;
    *(int *)pointer = 2;
        pointer++;
    *(int *)pointer = 3;
        pointer++;
    

    return 0;
}
