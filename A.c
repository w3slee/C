/*
 * A program to check if card > 1 : card = card - 1
 * if card < 7 : print "small card" else print "ace"
 *
 * 
 * */
#include <stdio.h>

int main(int argc, char *argv[]){
    int card;
    if(argc < 2){
        puts("Insert card value: ");
        scanf("%i", &card);
        } else if (argc > 2){
            card = argv[1];
            printf("%d\n", card);
        } 
        if (card > 1){
            card = card - 1;
            if (card < 7){
                puts("small card");
            } else {
                puts("Ace");
            } 
        }
    return 0;
}
