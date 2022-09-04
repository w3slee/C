/* 
 * This program can read a comma-seperated data from the cli and the display
 * JSON format.
 * 
 */

#include <stdio.h>
#include <string.h>
int main(){
    float latitude, longitude;
    char info[80];
    // we need to begin with "started" set to 0 -> which means 'false'
    int started = 0;
    puts("data = [");
    // scanf() needs pointers
    while (scanf("%f, %f, %79[^\n]",&latitude, &longitude, info) == 3){
        if (started)
            printf("\n");
        else
            // set started to 1 which means -> `true`
            started = 1;
    if ((latitude < -90.0 || latitude > 90.0)){
        // update code to use fprintf()
        // printf("Error status 2: bad latitude value %f on line %d\n", latitude, line);
        fprintf(stderr, "Invalid latitude: %f\n", latitude);

        return 2;
    }
    if ((longitude < -180.0 || longitude > 180.0)){
        // update to fprintf()
        // printf("Error status 2: bad longitude value %f \n", longitude);
        fprintf(stderr, "Invalid longitude %f\n", longitude);
        return 2;
    }
    printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
    }
    puts("\n]");
    return 0;
}

