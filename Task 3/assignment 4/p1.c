#include <stdio.h>

union database{
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
    
}p;


void main(){
    printf("The Size Of Union: %d\n",sizeof(union database));
    printf("The Size Of Shops: %d\n",sizeof(struct shops));
    printf("The Size Of Produc_info: %d\n",sizeof(struct product_info));
    printf("The Size Of Category: %d\n",sizeof(struct category));
}