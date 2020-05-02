#include <stdio.h>
#include "strFunc.h"

char *createString(char *string)
{
    // int taille=0, copie[100],i=0;
    // for (i=0;string[i]!='\O';++i)
    // {
    // taille=taille+1
    // }
    // i=0;
    // for(i=0;i<=taille;++i)
    // {
    // copie[i]=string[i];
    // }
    /*Renvoie la chaîne passé en paramètre (comme une affecation simple)*/
    // à implémenter
    return string;
}

int sizeString(char *string)
{
    int nombreDeCarateres=0;
    char caractereActuel=0;
    do
    {   
        caractereActuel=string[nombreDeCarateres];
        nombreDeCarateres++;
    } 
    while (caractereActuel!='\0');
    nombreDeCarateres--;
    
//  i=0;

//  /*j'ai essayé avec une boucle for mais ça ne fonctionnait pas non plus*/

//    while(string [i]!='\0')
//    {
//        i=i+1;
//    }
    /*Renvoie la taille de la chaîne*/
    // à implémenter
    return nombreDeCarateres;
}

void copyString(char *stringCopied,char *stringToCopy)
{
    int i=0,nombreDeCaracteres=0;
     char caractereActuel=0;
    do
    {   
        caractereActuel=stringToCopy[nombreDeCarateres];
        nombreDeCarateres++;
    } 
    while (caractereActuel!='\0');
    nombreDeCarateres--;
    for(i=0;i<=nombreDeCarateres;++i)
    {
        stringToCopy[i]=stringCopied[i];
    }
    /*Copie stringToCopy dans stringCopied*/
    // à implémenter
}

char *concatString(char *string1,char *string2)
{
    
    /*Ajoute le contenu de string2 à la suite de string1*/
    // à implémenter
    return NULL;
}

int compareString(char *string1,char *string2)
{
    /*Compare string1 et string2, renvoie 0 si diffèrente et 1 si égale*/
    // à implémenter
    return NULL;
}

int isCaracInString(char carac,char *string)
{
    /*Recherche carac dans string, si il est présent il renvoie l'index de la première occurence sinon -1*/
    // à implémenter
    return NULL;
}

int countCaracInString(char carac,char *string)
{
    /*Compte le nombre d'occurence de carac dans string et renvoie le résultat*/
    // à implémenter
    return NULL;
}

int searchStringInString(char *string1,char *string2)
{
    /*Recherche si string2 est contenu dans string1 renvoie 1 si oui sinon 0*/
    // à implémenter
    return NULL;
}