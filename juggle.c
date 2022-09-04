#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    // use current time as seed for random generator
    srand(time(NULL));
    int balls;
    while(balls){
        printf("%d\n LUCKY", balls);
        balls = rand();
        if (balls <= 129931){
            printf("%d CNN\n", balls);
        }else if (balls <= 420 && balls >= 620){
            printf("%d BNN\n");
        } else {
            printf("%d selected, game ended\n", balls);
            break;
        }
    }
    return 0;
}

