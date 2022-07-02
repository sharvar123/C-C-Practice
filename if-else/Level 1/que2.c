//Take values of length and breadth of a rectangle from user and check if it is square or not.
#include<stdio.h>

int main(){
	int l,b;
	printf("Enter length:");
	scanf("%d", &l);
	printf("Enter breadth:");
	scanf("%d", &b);
	
	if(l==b){
		printf("The given rectangle is a square.");
	}else
	{
		printf("Not a square.");
	}
	
	return 0;
}
