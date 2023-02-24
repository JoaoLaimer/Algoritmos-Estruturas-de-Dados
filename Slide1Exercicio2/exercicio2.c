#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int showMenu(void);
void getNameList(char *name);
char* adicionarNome(char *nameString);
char *removeNameString(char *nameString);

int main(void)
{
    char *nameString;
    int selectedOption;

    nameString = (char *)malloc(sizeof(char));
   
    nameString[0] = '\0';
    
    for( ; ; )
    {
        selectedOption = showMenu();
        switch (selectedOption)
        {
        case 1:
            nameString = adicionarNome(nameString);
            break;
        case 2:
            nameString = removeNameString(nameString);
            break;
        case 3:
            getNameList(nameString);
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

int showMenu(void)
{
    int selectedOption;

    printf("\n-------------MENU--------------\n");
    
    printf("1 . ADICIONAR NOME\n");
    printf("2 . REMOVER NOME\n");
    printf("3 . LISTAS\n");
    printf("4 . SAIR\n\n");

    printf("SELECIONE UMA OPCAO: ");
    scanf("%d",&selectedOption);

    return selectedOption;
}

char* adicionarNome(char *nameString)
{
    char *newName;
    getchar();

    newName = (char*) malloc(sizeof(char));

    printf("INSIRA O NOVO NOME: ");
    
    scanf("%s",newName);

    nameString = (char*) realloc(nameString, strlen(nameString) + strlen(newName) + 2);
    
    strcat(nameString,newName);
    strcat(nameString,",");
    free(newName);
    return nameString;
}

void getNameList(char *name)
{
    printf("\n%s.\n", name);

    for( int i = 0 ; i < strlen(name) ; i++)
    {
        printf("%c",name[i]);
    }
}

char* removeNameString(char *nameString)
{   
    getchar();
    char *strToBeRemoved, *strToBeRemovedStart, *temp;


    strToBeRemoved = (char *)malloc(sizeof(char));
    strToBeRemovedStart = strToBeRemoved;
    //printf("%s",nameString);
    
    printf("INSIRA NOME A SER REMOVIDO: ");
    scanf("%s",strToBeRemoved);

    strToBeRemovedStart = (char *)realloc(strToBeRemovedStart ,strlen(strToBeRemoved)*sizeof(char));

    size_t len = strlen(strToBeRemoved);
    
    //while((temp = strstr(nameString,strToBeRemoved)) != NULL)
    //{
        temp = strstr(nameString,strToBeRemoved);
        memmove(temp, temp + len + 1, strlen(temp + len) + 1);
    //}

    free(strToBeRemovedStart);

    return nameString;

}