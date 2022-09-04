#include <stdio.h>
#include <stdlib.h>

int main(){
    // declare username variable 
    char username[10];
    // ask user to enter username
    puts("Enter username: ");
    scanf("%8s", username);
    printf("size:%x\n", sizeof(username));
    // output username entered
    printf("Your username is %s\n", username);
    // return
    return 0;
}
