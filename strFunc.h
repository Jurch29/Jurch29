#ifndef STR_FUNC
#define STR_FUNC

char *createString(char *string);
int sizeString(char *string);
void copyString(char *stringCopied,char *stringToCopy);
void concatString(char *string1,char *string2,char *result);
int compareString(char *string1,char *string2);
int isCaracInString(char carac,char *string);
int countCaracInString(char carac,char *string);
int searchStringInString(char *string1,char *string2);

#endif