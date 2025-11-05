/*
NAME: Alex Mwangi
REG NO: CT101/G/26432/25
DESCRIPTION: Room occupancy in one branch
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    const int FLOORS = 5;
const int ROOMS_PER_FLOOR = 10;
    int occupancy[5][10];
    int floor, room;

    printf("Enter occupancy data for one branch (1 = occupied, 0 = vacant):\n");

    for (floor = 0; floor < FLOORS; floor++) {
        for (room = 0; room < ROOMS_PER_FLOOR; room++) {
            do {
                printf("Floor %d, Room %d (1 = occupied, 0 = vacant): ", floor + 1, room + 1);
                if (scanf("%d", &occupancy[floor][room]) != 1) {
                    printf("Invalid input! Please enter 1 or 0.\n");
                    
                    while (getchar() != '\n');
                    occupancy[floor][room] = -1;
                    continue;
                }
                if (occupancy[floor][room] != 0 && occupancy[floor][room] != 1) {
                    printf("Invalid entry! Please enter 1 (occupied) or 0 (vacant).\n");
                }
            } while (occupancy[floor][room] != 0 && occupancy[floor][room] != 1);
        }
    }

    printf("\nRoom occupancy per floor:\n");

    for ( floor = 0; floor < FLOORS; floor++) {
        int occupiedCount = 0, vacantCount = 0;
        for ( room = 0; room < ROOMS_PER_FLOOR; room++) {
            if (occupancy[floor][room] == 1)
                occupiedCount++;
            else
                vacantCount++;
        }
        printf("Floor %d - Occupied: %d, Vacant: %d\n", floor + 1, occupiedCount, vacantCount);
    }


    printf("Press Enter to exit...");
    getchar();

    return 0;
}
