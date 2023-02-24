#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(void);
void adicionarDados(void *pBuffer);
void listar(void *pBuffer);

int main(int argc, char const *argv[])
{
    int escolha; 
    void *pBuffer = malloc(sizeof(void));

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

void adicionarDados (void *pBuffer)
{
    char nome[10],idade[2],tel[9];
    void *p;

    printf("\n---------------------------\n");
    
    printf("NOVO NOME: "); 
    getchar();
    scanf("%[^\n]s",nome);

    pBuffer = realloc(pBuffer,sizeof(pBuffer)  + sizeof(nome) + 2);

    strcat(pBuffer,nome);
    strcat(pBuffer,",");

    
    
    printf("IDADE: ");getchar();
    scanf("%s",idade);
    
    pBuffer = realloc(pBuffer,sizeof(pBuffer)  + sizeof(idade) + 2);
    
    strcat(pBuffer,idade);
    strcat(pBuffer,",");

    

    printf("TELEFONO: ");getchar();
    scanf("%s",tel);
    
    pBuffer = realloc(pBuffer,sizeof(pBuffer)  + sizeof(tel) + 2);
    
    strcat(pBuffer,tel);
    strcat(pBuffer,".");
    
}

void listar (void *pBuffer)
{
    void *p;
    //int i;

    for(p = pBuffer; *(char *)p != '.';p++)
    {
        printf("%c",*(char *)p);
    }

}