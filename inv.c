/* 
 * A game that reverse a string entered by the user
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_reverse(char* s){
    // size_t is just an integer used for storing the sizes of things
    size_t len = strlen(s); // strlen("ABC") == 3
    printf("input : %s\n", s); // debug
    printf("size_t len = %i\n", len); // debug
    char* t = s + len - 1;
    printf("char* t = %i\n", t); // debug
    while(t >= s){
        printf("%c", *t);

        t = t - 1; // calculating addresses like this is called pointer arithmetic
    }
}

int main(int argc, char *argv[])
{
    char* juices[] = {
        "dragonFruit", "waterBerry", "sharonFruit", "ugliFruit", "rumBerry",
        "kiwiFruit", "mulBerry", "strawBerry", "blueBerry", "blackBerry", "starFruit"
    };
    char* a;
    puts(juices[6]);
    print_reverse(juices[7]);
    a = juices[2];
    juices[2] = juices[8];
    juices[8] = a;
    puts(juices[8]);
    print_reverse(juices[(18 + 7) / 5]);
    puts(juices[2]);
    print_reverse(juices[9]);
    juices[1] = juices[3];
    puts(juices[10]);
    print_reverse(juices[1]);
    //print_reverse("ABC");
    return 0;
}
