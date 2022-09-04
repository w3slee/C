#include <stdio.h>

int main(){
    int val;
    char card_name;
    puts("Enter card name (K, Q, J, A)");
    scanf("%2c", &card_name);
    switch(card_name) {
        case 'K':
            val = 10;
            printf("%d\n", val);
            break;
        case 'Q':
            val = 10;
            printf("%d\n", val);
            break;
        case 'J':
            val = 10;
            printf("%d\n", val);
            break;
        case 'A':
            val = 11;
            printf("%d\n", val);
            break;
       default:
            atoi(&card_name);
            // printf("%d\n"),atoi(card_name);
            printf("%c invalid state hit, exiting ...", card_name);
            break;
    }
    return 0;
}   
