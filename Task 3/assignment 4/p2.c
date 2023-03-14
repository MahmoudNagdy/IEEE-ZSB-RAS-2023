#include <stdio.h>

struct database{
    struct shops{
        char* name;
        char* address;
    };

    struct product_info{
        int id;
        double price;
        int quantity;
    };

    struct category{
        int id_product;
        int products_num;
    };
};

void main(){
    printf("The Size Of Parent Struct: %d", sizeof(struct database));

//Union Size equal to size of bigger element in it so that its size was equal to size of product_info = 24.
//Struct Size equal to total Sum of size of elements inside it so that its size was 24 + 16 + 8 = 48.
}