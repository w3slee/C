#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[80];
    puts("name: ");
    fgets(name, sizeof name, stdin);
    printf("%s\n", name);
    return 0;


}
