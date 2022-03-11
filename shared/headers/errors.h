#include <stdio.h>

#ifndef LABS_ERRORS_H
#define LABS_ERRORS_H
enum ErrorType {
    MEMORY_ALLOCATION,
    FILE_NOT_FOUND,
    NULL_POINTER_EXCEPTION
};
void printErrorMessage(enum ErrorType error);

#endif //LABS_ERRORS_H
