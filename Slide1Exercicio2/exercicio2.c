#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Menu(void);
int main(void)
{
    char nameString[100];
    int selectedOption;
    
    
    for( ; ; )
    {
        selectedOption = Menu();
        switch (selectedOption)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            return 0;
            break;
        default:
            printf("\n*OPCAO INVALIDA*\n\n");
            break;
        }
    }
    
    return 0;

}

int Menu(void)
{
    int selectedOption;

    printf("-------------MENU--------------\n");
    
    printf("1 . ADICIONAR NOME\n");
    printf("2 . REMOVER NOME\n");
    printf("3 . LISTAS\n");
    printf("4 . SAIR\n\n");

    printf("SELECIONE UMA OPCAO: ");
    scanf("%d",&selectedOption);

    return selectedOption;
}