/*
 * 
 * Program to eval face values
 * Released under the Vegas Public License
 * (c)2014 The College BlackJack Team
 * 
 * todo: check if card value is in a particular range
 * * */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    /*
     *
     * strings end in a sentinal character that is why we have to allow for 
     * an extra character in the array
     *
     * */
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;
    if(card_name[0] == 'K' |'Q'|'J'){
        val = 11;
    } else if(card_name[0] == 'A'){
        val = 12;
    } else {
        val = atoi(card_name);
    }
    printf("The card value is: %i\n", val);
    return 0;
}

