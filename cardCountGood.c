#include <stdio.h>
#include <stdlib.h>

int main(){
    // initialize the cards variable with an array of characters
    // the literal string is mutable
    char cards[] = "JQK";
    char a_card = cards[1];
    // switch values
    cards[1] = cards[2];
    cards[2] = cards[0];
    cards[0] = cards[2];
    cards[1] = a_card;
    puts(cards);
    // print cards
    //printf("%s\n", cards);
    return 0;
}
