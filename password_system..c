/*
name:Alex Mwangi
reg:CT101/G/26432/25
Description:password system
*/
int main()
{
	int password;
	const int correct_password=1234;
	do {
		printf("Enter password:\n");
		scanf("%d",&password);
		
	if(password != correct_password){
		printf("incorrect password.Please try again.\n");
		}	
	}while(password != correct_password);
	
		printf("Access granted\n");
	
	
	return 0;
}