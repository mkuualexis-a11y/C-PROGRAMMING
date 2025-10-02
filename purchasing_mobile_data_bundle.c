/*
NAME:Alex mwangi
REG NO:CT101/G/26432/25
DESCRIPTION:Purchasing mobile data bundles
*/
#include <stdio.h>

int main(){
int choice;
	
	printf("1:100mbs @ 50KES\n");
	printf("2:500mbs @ 200KES\n");
	printf("3:1gb @ 350KES\n");
	printf("4:2gb @ 600KES\n");
	
	printf("Enter your choice(1-4):");
	scanf("%d",& choice);
	
	switch(choice) {
	case 1:
		printf("selected option 1: 100mbs bundle,cost: 50KES\n");
		break;
	case 2:
	   printf("select option2:  500mbs bundle,cost: 200KES\n");
	break;
  case 3 :
    	printf("select option 3:1gb  bundle,cost: 350KES\n");
    	break;
    case 4:
    	printf("select option 4:2gb bundle,cost: 600KES\n");
	default:
		printf("invalid input!please enter a number between 1 and 4.\n");
		break;
	}
	return 0;
}