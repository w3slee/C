#include <stdio.h>
int encrypt(message);

int encrypt(message){
    char c;
    while(message){
        *message = *message ^ 17;
        message++;
    }
    return message;
}

int main(int argc, char *argv[])
{
    FILE* toenc = fopen("total.txt", "r");
    FILE* todec = fopen("totalenc.txt", "w");
    fprintf(todec, "%s", encrypt(toenc));
    fclose(toenc);
    fclose(todec);
    return 0;
}
