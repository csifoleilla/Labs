#include "lab2.h"

void testUserFunctionalities(){
    User *user1, *user2, *user3;
    createUser(&user1);
    printUser(user3, "CON");
    BirthDate date1 = {1980, 2, 23};
    BirthDate date2 = {2003, 10, 7};
    BirthDate date3 = {1990, 3, 14};
    setUserData(user1, "Szikla Szilard", STUDENT,MALE, AUTOMATION, date1);
    printUser(user1, "CON");
    createUser(&user2);
    setUserData(user2, "Olcsi Janos", TEACHER ,MALE, AUTOMATION, date2);
    printUser(user2, "CON");
    createUser(&user3);
    setUserData(user3, "Vicces Mari", STUDENT,FEMALE, AUTOMATION, date3);
    deleteUser(&user1);
    deleteUser(&user2);
    deleteUser(&user3);
}

void testProductFUnctionalities() {
    Product* product1, *product2, *product3;

    createProduct(&product1);
    createProduct(&product2);
    createProduct(&product3);

    setProductData(product1, "Apple", FRUIT, 10);
    setProductData(product2, "Book", SCHOOL, 4);
    setProductData(product1, "Tomato", VEGETABLE, 20);

    printProduct(product1, "CON");
    printProduct(product2, "CON");
    printProduct(product3, "CON");

    deleteProduct(&product1);
    deleteProduct(&product2);
    deleteProduct(&product3);
}
