#include <stdlib.h>
#include "errors.h"
#include "useful.h"
#include <string.h>

#ifndef LABS_USER_H
#define LABS_USER_H

enum UserType {
    STUDENT,
    TEACHER,
    EMPLOYEE
};

enum GenderType {
    FEMALE,
    MALE
};

enum SpecializationType {
    AUTOMATION,
    INFORMATICS,
    COMPUTER_SCIENCE,
    TELECOMMUNICATION

};

typedef struct {
    unsigned int year;
    unsigned int month;
    unsigned int day;
}BirthDate;
typedef struct {
    unsigned int id;
    char name[30];
    enum UserType type;
    enum GenderType gender;
    enum SpecializationType specialization;
    BirthDate birthDate;
} User;

char *getUserType(enum UserType type);

char *getGenderType(enum GenderType type);

char *getSpecializationType(enum SpecializationType type);

void createUser(User **user);

void setUserData(User *user, char *name, enum UserType type, enum GenderType gender, enum SpecializationType specialization,
                 BirthDate birthDate);

void printUser(User *user, char* destination);

void deleteUser(User **user);


#endif //LABS_USER_H
