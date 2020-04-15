#include <stdio.h>
#include <string.h>
#include "test.h"
#include "strFunc.h"

int nb_funcTest = 8;
int nb_funcTestValid;

void run_test()
{
    printf("\n----Demarage du module test de strProject----\n\n");
    nb_funcTestValid = nb_funcTest;

    test_createString();
    test_sizeString();
    test_copyString();
    test_concatString();
    test_compareString();
    test_isCaracInString();
    test_countCaracInString();
    test_searchStringInString();

    int percent = nb_funcTestValid*100/nb_funcTest;
    printf("\nRéussite : %d %% \n\n",percent);
    printf("----Fin----\n\n");
}

void test_createString()
{
    printf("createString() : ");

    char *string = createString("Je suis une chaine.");

    if (string==NULL){
        printf("\033[31;1m Fail \033[0m (NULL value) \n");
        nb_funcTestValid--;
    }
    else 
    {
        if (string != NULL || strcmp(string, "Je suis une chaine.") == 0) // Si chaînes identiques
        {
            printf("\033[32;1m Success \033[0m\n");
        }
        else
        {
            printf("\033[31;1m Fail \033[0m\n");
            nb_funcTestValid--;
        }
    }
}

void test_sizeString()
{
    printf("sizeString() : ");

    char *string = createString("ceci est une chaine de 37 caracteres.");
    if (string==NULL){
        printf("\033[31;1m Fail \033[0m (NULL value) \n");
        nb_funcTestValid--;
    }
    else
    {
        if (sizeString(string)==37)
        {
            printf("\033[32;1m Success \033[0m\n");
        }
        else
        {
            printf("\033[31;1m Fail \033[0m\n");
            nb_funcTestValid--;
        }
    }
}

void test_copyString()
{
    printf("copyString() : ");
    char *stringCopied;
    copyString(stringCopied,"le message a copier");
}

void test_concatString()
{
    printf("concatString() : ");
}

void test_compareString()
{
    printf("compareString() : ");
}

void test_isCaracInString()
{
    printf("isCaracInString() : ");
}

void test_countCaracInString()
{
    printf("countCaracInString() : ");
}

void test_searchStringInString()
{
    printf("searchStringInString() : ");
}
