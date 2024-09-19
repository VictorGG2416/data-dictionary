#include "dictionary.h"

int initializeDataDictionary(const char *dictionaryName) 
{
    long mainHeader =  EMPTY_POINTER;              //mainHeader es la cabesera.
    printf("Initializing Data Dictionary...\n");
    FILE *dictionary = fopen(dictionaryName,"w+");

    fwrite(&mainHeader, sizeof(mainHeader), 1, dictionary);

    long currentDir = ftell(dictionary);
    return EXIT_SUCCESS;
}