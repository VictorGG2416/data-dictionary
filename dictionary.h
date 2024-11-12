#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdio.h>
#include <stdlib.h>
#define EMPTY_POINTER -1
#define DATA_BLOCK_NAME 50
typedef struct Entity
{
    char name[DATA_BLOCK_NAME];
    long dataPointer;
    long atributesPointer;
    long nextEntity;
}ENTITY;

int initializeDataDictionary(const char *dictionaryName) 

#endif