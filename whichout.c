/*
 *
 * y = x - y;               = 00 11 21 32 42
 *
 * y = y + x;               = 00 11 23 36 410 
 *
 * y = y + 2;
 * if (y > 4);
 *      y = y - 1;
 *
 * x = x + 1;               = 11 34 59
 * y = y + x;
 *
 * if (y < 5) {
 *      x = x + 1;
 *      if (y < 3)
 *        x = x - 1; 
 * }
 * y = y + 2;
 *                          = 02 14 36 48
 *
 * 
 *
 * */

#include <stdio.h>

int main(){
    
    int x = 0;
    int y = 0;
    
    while (x < 5){
        
        //printf("y = y - x = %d\n", y = y + x);
        
        // y = y + 2;
        // if (y > 4){
        //     y = y - 1; 
        // }

        // x = x + 1; 
        // y = y + x;

        if (y < 5){
            x = x + 1;
            if (y < 3){
                x = x - 1;
            }
        }
        y = y + 2;
        printf("xy: %d%d \n", x, y, x, y);
        x = x + 1;
   }
    return 0;
}
