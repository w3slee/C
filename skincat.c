/*
 * Ask user to enter an interger
 * output : number of ways to skin a cat %i
 *
 * */
#include <stdio.h>

int main(){
    int number;
    puts("Enter number of ways to skin a cat : ");
    scanf("%i", &number);
    printf("There are %i ways to skin a cat\n", number);
    return 0;
}

