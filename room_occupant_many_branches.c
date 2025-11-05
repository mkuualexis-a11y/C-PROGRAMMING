/*
NAME:Alex Mwangi
REG NO: CT101/G/26432/25
DESCRIPTION:room occupation in many branches
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
int chain[3][5][10];
int branch,floor,room;
    srand(time(NULL));  

    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; 
            }
        }
    }

    
    printf("\nOccupancy summary for multiple branches:\n");
    for (branch = 0; branch < 3; branch++) {
        printf("Branch %d:\n", branch + 1);
        for (floor = 0; floor < 5; floor++) {
            int occupiedCount = 0, vacantCount = 0;
            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    occupiedCount++;
                else
                    vacantCount++;
            }
            printf("Floor %d - Occupied: %d, Vacant: %d\n", floor + 1, occupiedCount, vacantCount);
        }
    }

    return 0;
	
	}
