#ifndef LABS_PRODUCT_H
#define LABS_PRODUCT_H



#include <sys/types.h>
#include "errors.h"
#include "useful.h"
#include "messages.h"
#include <string.h>
#include <time.h>

enum ProductType{
    VEGETABLE,
    FRUIT,
    SCHOOL,
    OBJECT,
};

typedef struct Product{
    int id;
    char name[20];
    enum ProductType type;
    unsigned int amount;
    time_t creationDate;
}Product;

char* getProductType(enum ProductType type);
void createProduct(Product **product);
void setProductData(
        Product *product,
        char name[20],
        enum ProductType type,
        unsigned int amount
        );
void  printProduct(Product* product, char* destination);
void deleteProduct(Product** product);
#endif //LABS_PRODUCT_H