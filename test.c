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
    char *stringToCopy = "le message a copier";

    copyString(stringCopied,stringToCopy);
    if (stringCopied==NULL){
        printf("\033[31;1m Fail \033[0m (NULL value) \n");
        nb_funcTestValid--;
    }
    else
    {
        if (strcmp(stringCopied,stringToCopy)==0)
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

void test_concatString()
{
    printf("concatString() : ");
    char *string1 = "il était ";
    char *string2 = "une fois";
    char *finalString;

    finalString = concatString(string1,string2);
    if (finalString==NULL){
        printf("\033[31;1m Fail \033[0m (NULL value) \n");
        nb_funcTestValid--;
    }
    else
    {
        if (strcmp(finalString,strcpy(string1,string2))==0)
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

void test_compareString()
{
    printf("compareString() : ");
    char *string1 = "je suis *";
    char *string2 = "je suis";

    int comparator = compareString(string1,string1);
    if (comparator==NULL){
        printf("\033[31;1m Fail \033[0m (NULL value) \n");
        nb_funcTestValid--;
    }
    else
    {
        if (!comparator)
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

void test_isCaracInString()
{
    printf("isCaracInString() : ");
    char *string1 = "le petit navire est géniale ?!?";
    char carac = '?';

    int positionChar = isCaracInString(carac, string1);
    if (positionChar==NULL){
        printf("\033[31;1m Fail \033[0m (NULL value) \n");
        nb_funcTestValid--;
    }
    else
    {
        if (positionChar==28)
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

void test_countCaracInString()
{
    printf("countCaracInString() : ");
    char *string1 = "le petit navire est géniale ?!?";
    char carac = 'e';

    int countOccurence = countCaracInString(carac,string1);
    if (countOccurence==NULL){
        printf("\033[31;1m Fail \033[0m (NULL value) \n");
        nb_funcTestValid--;
    }
    else
    {
        if (countOccurence==5)
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

void test_searchStringInString()
{
    printf("searchStringInString() : ");
    char *string1 = "je suis content!::.";
    char *string2 = "je suis con";

    int isStrInStr = searchStringInString(string1,string2);
    if (isStrInStr==NULL){
        printf("\033[31;1m Fail \033[0m (NULL value) \n");
        nb_funcTestValid--;
    }
    else
    {
        if (isStrInStr==1)
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