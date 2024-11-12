#include "main.h"

int main(int argc, char** argv) {
    char name[50];

    printf("\nEnter a Datra Dicctionari Name: ");

    fgets(name,sizeof(name),stdin);

    FILE* dataDictionary = initializeDataDictionary(name);

    ENTITY newEntity;

    printf("\nEnter the Entity name: ");

    fgets(newEntity.name,sizeof(newEntity.name),stdin);
    newEntity.dataPointer= EMPTY_POINTER;
    newEntity.atributesPointer= EMPTY_POINTER;
    newEntity.nextEntity= EMPTY_POINTER;
    
    appendEntity(dataDictionary,newEntity);
    
    fclose(dataDictionary);

    return 0;
}