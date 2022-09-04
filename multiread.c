#include <stdio.h>
#include <stdlib.h>

int main(){
    // decalre FirstName and LastName
    char FirstName[50];
    char LastName[50];
    puts("Please enter your First and Last Name");
    // ask for multiple inputs (both F/LastName)
    // let scanf accept input upto 50 chars long
    scanf("%50s %50s", FirstName, LastName);
    
    // print entered details
    printf("FirstName : %s\nLastName: %s\n", FirstName, LastName);
    
    // return
    return 0;

}


