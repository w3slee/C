#include <stdio.h>
#include <stdlib.h>

int main(){
    int stock = 180;
    //char order_string[3];
    int order;
    while (stock > 0){
        printf("%i glasses left\n", stock);
        puts("How many glasses do you need ?");
        scanf("%i", &order);
        printf("address of order %08x\n", &order);
        //order = atoi(order_string);
        stock = stock - order;
        printf("You ordered %i glasses\n", order);
    }
    puts("We're out of stock!");
    return 0;

}
