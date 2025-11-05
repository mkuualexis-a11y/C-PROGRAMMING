//
/*
name:Alex Mwangi
reg:CT101/G/26432/25
Description:number guessing games
*/ss

#include <stdio.h>
#include <stdlib.h>


int main() {
    int random_number,guess,attempts =0;
    
    random_number= rand() % 20 + 1;
    
    printf("welcome to the number guessing game!\n");
    printf("think of a number between 1 and 20.\n");
    
    guess = 0;
    
    while (guess != random_number) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess < 1 , guess > 20) {
            printf("Enter a number between 1 and 20.\n");
        } else if (guess > random_number) {
            printf("Too high!\n");
        } else if (guess < random_number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!you gueesed the correct number in %d attempts\n", attempts);
        }
        
    } while (guess != random_number);
    
    return 0;
}
