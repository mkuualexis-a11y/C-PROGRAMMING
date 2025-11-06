/*
Name:Alex Mwangi
Reg:CT101/G/26432/25
Description:Daily sales transactions
*/

#include <stdio.h>

int main() {
    FILE *fp;
    float amount, total;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error: I cannot open the file.\n");
        return 1;
    }


    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(fp);

    printf("The total Sales for the Day: %.2f\n", total);

    return 0;
}
