#include <stdio.h>
#include <stdlib.h>

int main(){
    // username
    char username[256];
    char username2[256];
    char username3[256];
    char username4[256];
    puts("input with space:");
    scanf("%50s", username);
    puts("----------------------");
    printf("username1: %s\n", username);
    puts("----------------------");
    scanf("%50s", username2);
    printf("username2: %s\n", username2);
    scanf("%50s", username3);
    puts("----------------------");
    printf("username3: %s\n", username3);
    puts("----------------------");
    scanf("%50s", username4);
    printf("username4: %s\n", username4);
    puts("----------------------");
    return 0;

}
