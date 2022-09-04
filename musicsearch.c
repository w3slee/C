#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;

void search(char const* str, char const* substr){
    char* track = strstr(str, substr);
    if(track){
        printf("Found the search term '%s' in '%s'", substr, str);
    }
}

int main(int argc, char *argv[])
{
    // list of tracks
    char tracks[][81] = {
    "Radio Active - Imagine Dragons",
    "Pompei - Bastille",
    "Hello - Adelle",
    "Call me when sober - Lil Peep",
    };

    char search_term[20];
    // ask user for input
    puts("Music to search for :");
    scanf("%s", search_term);
    for(i; i < sizeof(tracks); i++){
        char* track = strstr(tracks, search_term);
        if(search_term){
            printf("search term '%s' found in track '%s'\n", search_term, track);
            break;
        } else {
            printf("The track '%s' was not found in the list", search_term);
            break;
        }
    }

  //  printf("%s\n", search_term);
    return 0;
}
