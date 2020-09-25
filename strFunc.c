#include <stdio.h>
#include "strFunc.h"

char *createString(char *string)
{
    return string;
}


int sizeString(char *string)
{
    /*Renvoie la taille de la chaîne*/
    int nombreDeCarateres=0;
    char caractereActuel=0;
    do
    {
        caractereActuel=string[nombreDeCarateres];
        nombreDeCarateres++;
    } 
    while (caractereActuel!='\0');
    nombreDeCarateres--;
    // à implémenter
    return nombreDeCarateres;
}

void copyString(char *stringCopied,char *stringToCopy)
{
    /*Copie stringToCopy dans stringCopied*/
    for (int i = 0 ; stringToCopy[i] != '\0' ; i++)
    {
        stringCopied[i] = stringToCopy[i];
    }
}

void concatString(char *string1,char *string2,char *result)
{
    /*Ajoute le contenu de string2 à la suite de string1*/

    int i,j;
    for (i = 0 ; i < sizeString(string1) ; i++)
    {
        result[i] = string1[i];
    }
    
    for (j=i ; j < sizeString(string2)+i ; j++)
    {
        result[j] = string2[j-i];
    }
    result[j] = '\0';
}

int compareString(char *string1,char *string2)
{
    int a=1;
    // if (strmp(string1,string2)==0)
    // {
    //     a=0;
    // }
     
    /*Compare string1 et string2, renvoie 0 si diffèrente et 1 si égale*/
    // à implémenter
    return a;
}

int isCaracInString(char carac,char *string)
{   int i=0,nombreDeCaracteres=0,caractereActuel=0,a=-1;
    do
    {
        caractereActuel=string[nombreDeCaracteres];
        nombreDeCaracteres+=1;
    } while (caractereActuel!='\0');
        nombreDeCaracteres--;
        for(i=0;i<=nombreDeCaracteres;++i) 
        {
            if(string[i]==carac)
            {
                a=i;
                i=nombreDeCaracteres+1;
            }
        }
    /*Recherche carac dans string, si il est présent il renvoie l'index de la première occurence sinon -1*/
    // à implémenter
    return a;
}

int countCaracInString(char carac,char *string)
{    
    /*
    int i=0,nombreDeCaracteres=0;
    char caractereActuel=0;
    do
    {
        caractereActuel=stringToCopy[nombreDeCaracteres];
        nombreDeCaracteres++;
    }
    while (caractereActuel!='\0');
    nombreDeCaracteres--;
    // int stringCopied[nombreDeCaracteres];
    for(i=0;i<=nombreDeCaracteres;++i)
    {
        stringCopied[i]=stringToCopy[i];
    }
    /*Copie stringToCopy dans stringCopied*/
    // à implémenter
}

int searchStringInString(char *string1,char *string2)
{
    /*Recherche si string2 est contenu dans string1 renvoie 1 si oui sinon 0*/
    // à implémenter
    return NULL;
}