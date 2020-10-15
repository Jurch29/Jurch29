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
    /*Compare string1 et string2, renvoie 0 si diffèrente et 1 si égale*/
    if (sizeString(string1) != sizeString(string2))
        return 0;

    for (int i = 0 ; i < sizeString(string1) ; i++)
    {
        if (string1[i] != string2[i])
            return 0;
    }
    
    return 1;
}

int isCaracInString(char carac,char *string)
{   
    /*Recherche carac dans string, si il est présent il renvoie l'index de la première occurence sinon -1*/
    for (int i = 0 ; i < sizeString(string) ; i++)
    {
        if (carac == string[i])
            return i;
    }
    return -1;
}

int countCaracInString(char carac,char *string)
{    
    /*compte le nombre d'occurence de carac dans string*/
    int result = 0;
    for (int i = 0 ; i < sizeString(string) ; i++)
    {
        if (carac == string[i])
            result++;
    }
    return result;
}

int searchStringInString(char *string1,char *string2)
{
    /*Recherche si string2 est contenu dans string1 renvoie 1 si oui sinon 0*/
    int i=0,j=0,tempo=0;
    for (i = 0 ; i < sizeString(string1) ; i++)
    {
        j=0;
        if(string1[i]==string2[j])
        {  
            tempo=i;
            while(string1[i]==string2[j])
            {
                j+=1;
                i+=1;
                if(j==sizeString(string2))
                    return 1;
            }
            i=tempo;
        }
    }
    return 0;
}