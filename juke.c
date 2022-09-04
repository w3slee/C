#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tracks[][80] = {
    "Hello - Adelle",
    "Zoned Out - Lil Peep",
    "Ferris Wheel - Djah",
    "Finally At Peace - Jah Raf",
    "Something Soweto - Choir",
};


void find_track(char search_for[]){
    int i;
    for (i = 0; i < 5; ++i) {
        if(strstr(tracks[i], search_for)){
            printf("Track %i: '%s'\n", i+1, tracks[i]);
        }else {
            puts("Track not found.");
            break;
    }
    
    }
}

int main(int argc, char *argv[])
{
    char search_for[80];
    printf("Search for: \n");
    scanf("%79s", search_for);
    find_track(search_for);
    return 0;
}
