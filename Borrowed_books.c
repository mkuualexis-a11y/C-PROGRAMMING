/*
Name:Alex Mwangi
Reg:CT101/G/26432/25
Description:Borrowed books
*/

#include <stdio.h>

int main() {
    FILE *file;
    char title[200];
    char choice;

    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("Please enter the book title: ");
        
        getchar();
        fgets(title, sizeof(title), stdin);


        fprintf(file, "%s", title);

        printf("The book title successfully stored.\n");

        printf("Do you want to any other another book? (yes/no): ");
        scanf(" %c", &choice);

    } while (choice == 'yes' || choice == 'Yes');

    fclose(file);
    printf("All book titles have been saved in borrowed_books.txt\n");

    return 0;
}
