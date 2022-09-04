#include <stdio.h>
#include <stdlib.h>

int main(){
    int stock = 180;
    char order_string[3];
    int order;
    
    while (stock > 0){
        // glasses left
        printf("[+] %i glasses left\n", stock);
        // number of glasses to order
        puts("[+] Enter number of glasses to order: ");
        // %2s matches a sequence of non-whitespace characters (a string) upto specified width if so.
        // allow only 3 character sequence
        scanf("%3s", &order_string);
        order = atoi(order_string);
        stock = stock - order;
        printf("[+] You ordered %i glasses\n", order);
    }
    puts("[x] We're out of stock !");
    return 0;
}