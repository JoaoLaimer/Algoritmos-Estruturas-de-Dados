#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void adicionarDados (void *pBuffer)
{
   // char nome[10],idade[2],tel[9];
    char ch;
    void *p;

    printf("\n---------------------------\n");
    
    p = pBuffer;
   // for(int i = 0; i < sizeof(pBuffer); i++,p++);


    
    printf("NOVO NOME: "); 
    getchar();

    while((ch = getchar()) != '\n' && ch != EOF)
    {
        *(char *)p = ch;
        pBuffer = realloc(pBuffer, sizeof(char) + sizeof(pBuffer));
        p++;
    }
    pBuffer = realloc(pBuffer,sizeof(pBuffer) + 1);

    strcat(pBuffer,",");
    p++;

    printf("NOVA IDADE: "); 

    while((ch = getchar()) != '\n' && ch != EOF)
    {
        *(int *)p = ch;
        pBuffer = realloc(pBuffer, sizeof(int) + sizeof(pBuffer));
        (int *)p++;
    }
    pBuffer = realloc(pBuffer, sizeof(pBuffer) + sizeof(char));

    strcat(pBuffer,",");
    p++;

    printf("NOVO TELEFONE: "); 

    while((ch = getchar()) != '\n' && ch != EOF)
    {
        *(int *)p = ch;
        pBuffer = realloc(pBuffer, sizeof(int) + sizeof(pBuffer));
        (int *)p++;
    }
    pBuffer = realloc(pBuffer,sizeof(pBuffer) + 2);

    strcat(pBuffer,".");
}

void listar (void *pBuffer)
{
    pBuffer = realloc(pBuffer,sizeof(pBuffer) + sizeof(char));
    strcat(pBuffer,"@");
    void *p;

    for(p = pBuffer; *(char *)p != '@';p++)
    {
        printf("%c",*(char *)p);
    }

}