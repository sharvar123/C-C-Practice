//Program to calculate the tables of the given number n till the table of 10
#include<stdio.h>

int main(){
	int n,i;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	while(n<11){
		for(i=1;i<11;i++){
			printf("%d\n",n*i);
		}
		printf("--------------------------------------------------\n");
		n++;
	}
	
	return 0;
	
}
