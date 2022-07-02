/* check that user is having correct password or not.
	
step 1: first you have to do the registration of 1 user
	1. username
	2. password
step 2: for login you have to take the input:
	1. username
	2. password
	
	if the username and passwords matches the give a message "you have loged in"
*/
#include<stdio.h>

int main(){
	int user,pw, in_user, in_pw;
	printf("Registration\n");	
	printf("\t\tEnter username:");
	scanf("%d",&user);
	printf("\t\tEnter password:");
	scanf("%d",&pw);
	printf("********************************************************************************\n");
	printf("LOG IN\n");
	printf("\t\tEnter username:");
	scanf("%d",&in_user);
	printf("\t\tEnter password:");
	scanf("%d",&in_pw);	
	
	if(user==in_user&&pw==in_pw)
		printf("\t\t\tLogged in successfully.");
	if(user!=in_user &&pw!=in_pw){
		printf("\t\t\tInvalid username and password");	
	}else if(user!=in_user){
		printf("\t\t\tInvalid username");
	}else if(pw!=in_pw){
		printf("\t\t\tInvalid password");		
	}
		


}
