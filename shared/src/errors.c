#include "../headers/errors.h"

void printErrorMessage(enum ErrorType error){
    switch (error){
        case MEMORY_ALLOCATION:
            printf("MEMORY_ALLOCATION");

        case FILE_NOT_FOUND:
            printf("FILE_NOT_FOUND");

        case NULL_POINTER_EXCEPTION:
            printf("NULL_POINTER_EXCEPTION");
        default:
            printf("UNDEFINED");
    }
}