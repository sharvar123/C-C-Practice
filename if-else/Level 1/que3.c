// Take two int values from user and print greatest among them.
#include<stdio.h>

int main(){
	int a, b;
	printf("Enter two integers:");
	scanf("%d%d",&a,&b);
	
	if (a>b){
		printf("The greatest integer is %d.", a);
	}else if (a==b){
		printf("The given two integers are equal.");
	}else{
		printf("The greatest integer is %d.", b);
	}
	
	return 0;
}
