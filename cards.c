/*
 *
 * Program to calculate the number of cards in the shoe
 * This code is released inder the Vegas Public License.
 * (c)2014, The college BlackJack team
 *
 * */
#include <stdio.h>

void greeter(){
    puts("Calculate the number of cards in the shoe.");
}

int main(int argc, char *argv[])
{
    greeter();
    int decks;
    puts("Enter a number of decks");
    scanf("%i", &decks);

    if(decks < 1){
        puts("That is not a valid number of decks");
        return 1;
    }
    printf("There are %i cards\n", (decks * 52));
    return 0;
}
