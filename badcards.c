// program to shuffle some cards
// The program contains a memory bug that causes a segfault
// This is because `char* cards = "JQK"` is a pointer variable
// that is immutable ( cannot be changed )
// If we need to modify the content in the literal string
// We need to decalare an array of literal strings
// char* cards[] = "JQK"
#include <stdio.h>

int main()
{
    char* cards[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    printf("%s\n",cards) ;
    return 0;
}
