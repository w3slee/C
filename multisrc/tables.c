#include <stdio.h>

float total = 0.0;
int count = 0;
int tax_percent = 6;

float add_with_tax(float f){
    float tax_rate = 1 + tax_percent / 100.0;
    total = total + (f * tax_rate);
    count = count + 1;
    return total;
}

int main(int argc, char *argv[])
{
    float val;
    FILE* totalfile = fopen("total.txt", "w");
    printf("Price of item: \n");
    while (scanf("%f", &val) == 1){
        printf("Total so far: %.2f\n", add_with_tax(val));
        fprintf(totalfile, "Total : %.2f\n", total);
        printf("Price of item: \n");
        fclose(totalfile);
    }
    printf("\nFinal total: %.2f\n", total);
    printf("Number of items: %i\n", count);
    return 0;
}

