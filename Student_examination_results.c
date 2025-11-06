/*
Name:Alex Mwangi
Reg:CT101/G/26432/25
Description:University Students examination results
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int reg_no;
    float marks;
};

int main() {
    FILE *fptr;
    struct Student s;
    
    fptr = fopen("results.dat", "rb");
    if (fptr == NULL) {
        printf("Enter your name.\n");
        return 1;
    }

    printf("Student Results:\n");
    printf("______\n");


    // iii. Read and display student records
    while (fread(&s, sizeof(s), 1, fptr) == 1) {
        printf("Name: %s\n", s.name);
        printf("Total Marks: %.2f\n", s.marks);
        printf("_____\n");
    }

    fclose(fptr);

	
	return 0;
}