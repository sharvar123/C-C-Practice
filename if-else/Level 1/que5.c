/*A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.*/
#include<stdio.h>

int main(){
	int m;
	
	printf("Enter Marks:");
	scanf("%d",&m);
	
	if(m<0 || m>100){
		printf("Enter valid marks (Range 0-100)");
	}else if(m>=0 && m<25)
	{
		printf("Your grade is F.");	
	}else if(m>=25 && m<45)
	{
		printf("Your grade is E.");		
	}else if(m>=45 && m<50)
	{
		printf("Your grade is D.");		
	}else if(m>=50 && m<60)
	{
		printf("Your grade is C.");		
	}else if(m>=60 && m<80)
	{
		printf("Your grade is B.");		
	}else if(m>=80 && m<=100)
	{
		printf("Your grade is A");		
	}
	return 0;
}
