#include <malloc.h>
#include "../../headers/models/product.h"

char* getProductType(enum ProductType type){
    switch (type) {
        case VEGETABLE:
            return "VEGETABLE";
        case FRUIT:
            return "FRUIT";
        case SCHOOL:
            return "SCHOOL";
        case OBJECT:
            return "OBJECT";
        default:
            return "Undefined";
    }
}

void createProduct(Product **product) {
    *product = malloc(sizeof(Product));
    if(!(*product)) {
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*product)->id= ++numberOfProducts;
}

void setProductData(Product *product, char *name, enum ProductType type, unsigned int amount){
    if(!product) {
        printErrorMessage(NULL_POINTER_EXCEPTION);
    }
    strcpy(product->name, name);
    product->type =type;
    product->amount = amount;
    product->creationDate = time(NULL);
}

void printProduct(Product* product, char* destination) {
    if (product) {
        freopen(destination, "w", stdout);
        printf("%s details:\n"
               "\t - ID: %i\n"
               "\t - TYPE: %s\n"
               "\t - AMOUNT: %u\n"
               "\t - CREATION DATE: %lli\n",
               product->name,
               product->id,
               getProductType(product->type),
               product->amount,
               product->creationDate);
        freopen("CON", "w", stdout);
    }
}

void deleteProduct(Product **product){
    if(*product != NULL) {
        free(*product);
        *product = NULL;
        printf("A termek nincs.");
    }
}