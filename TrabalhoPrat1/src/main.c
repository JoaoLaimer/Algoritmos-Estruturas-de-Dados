#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int jeitosDeSubirEscada(int n);
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

    int ultimo = 1, penultimo = 1, temp; 

    for( int i =  1 ; i < n ; i ++)
    {
        temp = ultimo;
        ultimo = ultimo + penultimo;
        penultimo = temp;
    }
    
    return ultimo;

}
// nota: na aula eu tava tentando fazer usando permutacao mas ai o senhor mencionou programacao dinamica e fui pesquisar o q era
// eu usei recursao e memoization pra otimizar a arvore ( tive que aprender na hora),  

