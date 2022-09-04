#include <stdio.h>

int main(int argc, char *argv[])
{
    // ask user for input
    puts("Enter a letter C, D, H, S");
    char suit = 'H';
    scanf("%c", &suit);
    switch(suit){
        case 'C':
            puts("Clubs");
            break;
        case 'D':
            puts("Diamonds");
            break;
        case 'H':
            puts("Hearts");
            break;
        default:
            puts("Spades");
    }
    return 0;
}
