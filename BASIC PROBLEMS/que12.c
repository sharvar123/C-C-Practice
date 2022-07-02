#include<stdio.h>

int main(){
	int num,rev,u,t,h;
	
	printf("enter three digit number:");
	scanf("%d",&num);
	
	u=num%10;
	t=(num%100)/10;
	h=num/100;
	rev=(100*u)+(10*t)+h;
	printf("%d\n", u);	
	printf("%d\n", t);	
	printf("%d\n", h);	

	printf("Reversed number:%d", rev);
	return 0;
}
