#include <stdio.h>
/*
 *
 * The main function is the starting point of all the code
 * in your program
 *
 * If you don't have a function called main, your program will
 * not be able to start
 *
 * The main function has a return type of int
 * When the computer runs our program it will need to know if it ran
 * successfully or not.
 *
 * return value of 0 if successfull
 * return value of non-zero if an error occured
 *
 *
 * */

int main(int argc, char *argv[])
{
    int card_count = 11;
    if (card_count > 10)
        puts("The deck is hot. Increase bet.");
    return 0;
}
