#include "../../headers/models/user.h"
#include <stdlib.h>
#include "errors.h"
#include "useful.h"
#include <string.h>


char *getUserType(enum UserType type){
    switch(type){
        case STUDENT:
            return "STUDENT";
        case TEACHER:
            return "TEACHER";

        case EMPLOYEE:
            return "EMPLOYEE";

        default:
            return "UNDEFINED";
    }
}

char *getGenderType(enum GenderType gender){
    switch(gender){
        case MALE:
            return "MALE";
        case FEMALE:
            return "FEMALE";
        default:
            return "UNDEFINED";
    }
}

char *getSpecializationType(enum SpecializationType specialization){
    switch(specialization){
        case AUTOMATION:
            return "AUTOMATION";
        case INFORMATICS:
            return "INFORMATICS";
        case COMPUTER_SCIENCE:
            return "COMPUTER_SCIENCE";
        case TELECOMMUNICATION:
            return "TELECOMMUNICATION";
        default:
            return "UNDEFINED";
    }

}

void createUser(User **user){
    (*user) = (User*) malloc(1* sizeof(User));
    if(!(*user)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*user) -> id = ++numberOfUsers;
}

void setUserData(User *user, char *name, enum UserType type, enum GenderType gender, enum SpecializationType specialization, BirthDate birthDate){
    if(!user) {
        printErrorMessage(NULL_POINTER_EXCEPTION);
    }
    strcpy(user->name, name);
    user->type = type;
    user->gender = gender;
    user->specialization = specialization;
    user->birthDate = birthDate;
}

void printUser(User *user, char* destination){
    if(user) {
       // freopen(destination, "w", stdout);
        printf("%s details:\n"
            "\t - ID: %i\n"
            "\t - TYPE: %s\n"
            "\t - GENDER: %s\n"
            "\t - SPECIALIZATION: %s\n"
            "\t - Birth Date: %4i%2i%2i\n",
            user -> name,
            user -> id,
            getUserType(user->type),
            getGender(user->gender),
            getSpecialization(user->specialization),
            user->birthDate.year, user->birthDate.month, user->birthDate.day);
       // printMyProducts(user, destination);
        printf("\n");
        freopen("CON", "w", stdout);
    }
}

void deleteUser(User **user){
    free(*user);
    (*user) = NULL;
}
