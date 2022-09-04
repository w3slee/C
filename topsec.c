#include <stdio.h>

int main(){
    // 9c + \0
    char word[10];
    int i = 0;
    // input worth 9c long to word var
    while(scanf("%9s", word) == 1){
        i = i + 1;
        // modulus op (%) -> i % 2 -> remainder left after dividing by 2
        if (i % 2)
            fprintf(stdout, "%s\n", word);
        else
            fprintf(stderr, "%s\n", word);
    }
    return 0;
}
