#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* reallocFake(void *pointer, size_t newSize);
int main(int argc, char const *argv[])
{
    
    void *pointer = malloc(3*sizeof(int));
    void *inicio;

    inicio = pointer;

    *(int *)pointer = 3;
        pointer += sizeof(int);
    *(int *)pointer = 2;
        pointer += sizeof(int);
    *(int *)pointer = 1;

    pointer = inicio; 

    
    printf("%d\n",*(int *)pointer);
        pointer += sizeof(int);
    printf("%d\n",*(int *)pointer);
        pointer += sizeof(int);
    printf("%d\n",*(int *)pointer);
        
    

    pointer = inicio;
    
    pointer = reallocFake(pointer,4*sizeof(int));

        printf("%d\n",*(int *)pointer);
        pointer += sizeof(int);
        printf("%d\n",*(int *)pointer);
        pointer += sizeof(int);
        printf("%d\n",*(int *)pointer);
        pointer += sizeof(int);
    

    *(int *)pointer = 4;
    printf("%d\n",*(int *)pointer);
    
    
    free(inicio);
    return 0;
}

void* reallocFake(void *pointer, size_t newSize)
{
    void *newPointer = malloc(newSize);

    memcpy(newPointer,pointer,3*sizeof(int));

    return newPointer;
}