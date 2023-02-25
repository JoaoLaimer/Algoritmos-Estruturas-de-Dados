#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int numPessoas = 0;
int menu(void);
void adicionarDados(void *pBuffer);
void listar(void *pBuffer);

int main(int argc, char const *argv[])
{
    int escolha; 
    void *pBuffer = calloc(1,sizeof(void));

    for(;;)
    {
        escolha = menu();
        switch(escolha)
        {
            case 1:

                adicionarDados(pBuffer);
            
                break;

            case 2:
            
                break;

            case 3:
            
                break;
            
            case 4:

                listar(pBuffer);

                break;
            
            case 5:

                return 0;
            
            default:
            
                printf("Escolha invalida!\n");
                
                break;
        }
    }
    return 0;
}

int menu(void)
{
    int selectedOption;

    printf("\n-------------MENU--------------\n");
    
    printf("1 . ADICIONAR PESSOA\n");
    printf("2 . REMOVER PESSOA\n");
    printf("3 . BUSCAR PESSOA\n");
    printf("4 . LISTAR\n");
    printf("5 . SAIR\n\n");

    printf("SELECIONE UMA OPCAO: ");
    scanf("%d",&selectedOption);

    return selectedOption;

}

void adicionarDados(void *pBuffer)
{
    void *p;
    int c;

    printf("\n---------------------------\n");
    
    p = pBuffer;
    pBuffer = realloc(pBuffer, 10*sizeof(char) + sizeof(int) + 1*sizeof(char));
    numPessoas++;
    printf("%d",numPessoas);

    for(p = pBuffer; c != numPessoas;p++)
    {
        if( *(char *)p == '.')
        {
            c++;
        }
    }
    if( *(char *)p == '.')
    {
        p+= sizeof(char);
    }
    
    printf("NOVO NOME: "); 
    getchar();
    scanf("%10s",(char *)p);

    strcat(pBuffer,".");
        
    for(p = pBuffer; *( char *)p != '.'; p+=sizeof(char) ){}
    p += sizeof(char);

    printf("IDADE: "); 
    scanf("%d",(int *)p);
    p += sizeof(int);


    

    
}

void listar (void *pBuffer)
{

    int c = 0;
    void *p;

    for(p = pBuffer; *(char *)p != '.';p++)
    {
        printf("%c",*(char *)p);
    }
    printf("%c",*(char *)p);
    p += sizeof(char);

    printf("%d",*(char *)p);
    
}

