//Prograom to check if the given number is a palindrome
#include<stdio.h>

int main(){
	int n,rev=0,d,i;
	printf("Enter Number:");
	scanf("%d",&n);
	i=n;
	while(n>0){
		d=n%10;
		n=n/10;
		rev=rev*10+d;	
	}
	if(rev==i){
		printf("The given number is a palindrome");
	}
	else{
		printf("The given number is NOT a palindrome");
	}
	
	return 0;
	
}
