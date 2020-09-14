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

char *concatString(char *string1,char *string2)
{
    int nombreDeCarateres1=0;
    char caractereActuel=0;
    //on compte le nombre de caractere dans string1 et string2
    /*----------------------------*/
    do
    {   
        caractereActuel=string1[nombreDeCarateres1];
        nombreDeCarateres1++;
    } 
    while (caractereActuel!='\0');
    nombreDeCarateres1--;
    int nombreDeCarateres2=0;
    char caractereActuel=0;
    do
    {   
        caractereActuel=string2[nombreDeCarateres2];
        nombreDeCarateres2++;
    } 
    while (caractereActuel!='\0');
    nombreDeCarateres2--;
    /*---------------------------*/
    //une fois compte, on incremente string 2 dans string 1 a partir du dernier caractere de string 1
    int a=0,i=0;
    for(i=nombreDeCarateres1+1;i<=nombreDeCarateres2+1;i++)
    {
        string1[i]=string2[a];
        a=a+1;
    }
    
    /*Ajoute le contenu de string2 à la suite de string1*/
    // à implémenter
    return *string1;
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
{    int i=0,nombreDeCaracteres=0;
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

char *concatString(char *string1,char *string2)
{
    int nombreDeCarateres1=0;
    char caractereActuel=0;
    //on compte le nombre de caractere dans string1 et string2
    /*----------------------------*/
    do
    {   
        caractereActuel=string1[nombreDeCarateres1];
        nombreDeCarateres1++;
    } 
    while (caractereActuel!='\0');
    nombreDeCarateres1--;
    int nombreDeCarateres2=0;
    char caractereActuel=0;
    do
    {   
        caractereActuel=string2[nombreDeCarateres2];
        nombreDeCarateres2++;
    } 
    while (caractereActuel!='\0');
    nombreDeCarateres2--;
    /*---------------------------*/
    //une fois compte, on incremente string 2 dans string 1 a partir du dernier caractere de string 1
    int a=0,i=0;
    for(i=nombreDeCarateres1+1;i<=nombreDeCarateres2+1;i++)
    {
        string1[i]=string2[a];
        a=a+1;
    }
    
    /*Ajoute le contenu de string2 à la suite de string1*/
    // à implémenter
    return *string1;
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
                a+=1;
            }
        }
    /*Compte le nombre d'occurence de carac dans string et renvoie le résultat*/
    // à implémenter
    return a;
}

int searchStringInString(char *string1,char *string2)
{
    /*Recherche si string2 est contenu dans string1 renvoie 1 si oui sinon 0*/
    // à implémenter
    return NULL;
}