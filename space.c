#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    // maximum storage space for an int
    printf("size of int (bytes) : %i\n",sizeof(int));
    printf("Max size of int (decimal): %i\n",INT_MAX);
    puts("---------------------------------");
    printf("Min size of int (decimal): %i\n",INT_MIN);

    return 0;
}