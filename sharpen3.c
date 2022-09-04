#include <stdio.h>
#include <limits.h>

void greeter(){
    puts("Welcome to the ex shaming game");
}
int main(int argc, char *argv[])
{
    greeter();
    char * ex[];
    puts("Enter ex's name: ");
    scanf("%s", &ex);
    printf("Dear %s.\n\n\tYou're history\n", ex);
    return 0;
}
// assume name shorter than 20 char
