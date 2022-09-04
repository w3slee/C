#include <stdio.h>
#include <stdlib.h>
// to use the strstr("haystack", "needle");
#include <string.h>

// some tracks
// char tracks[][80]
char tracks[][80] = {
    "Somebody to love - Anon",
    "Trust no one - Chale",
    "Pride - Grugier",
    "Tamale Land Oat - Crystal",
    "Executive Trash= - Glover",
};

// function to find track based on search term
// param : search_for[]
void findTrack(char searchFor[]){
    //
    int i;
    for(i=0; i<5; i++){
        if(strstr(tracks[i], searchFor)){
            printf("Found track: %i : %s\n", i+1, tracks[i]);
            break;
        }
    }
}

// main function
int main(){
    // ask user for input
    char searchFor[80];
    puts("Welcome to neon lights juke.\nPlease insert song to search for:");
    scanf("%79s", searchFor);
    findTrack(searchFor);
    return 0;
}
