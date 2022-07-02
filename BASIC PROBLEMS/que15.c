#include<stdio.h>

int main(){
	int a,b,ans1,ans2;
	
	printf("Enter a and b respectively:");
	scanf("%d%d", &a, &b);
	
	ans1=(a*a)+(b*b)+(2*a*b);
	ans2=(a*a)+(b*b)-(2*a*b);	
	printf("(a+b)^2 = %d\n(a-b)^2 = %d ",ans1,ans2);
	
	return 0;
}
