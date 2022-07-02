//5% bonus on salary if years of service>5
#include<stdio.h>

int main(){
	int sal, y, bonus;
	printf("Enter salary:");
	scanf("%d", &sal);
	
	printf("Enter years of service:");
	scanf("%d", &y);
	
	if(y>5){
		bonus=sal/20;
		printf("Bonus: %d", bonus);
	}else
	{
		printf("Bonus:0");
	}
	return 0;
}
