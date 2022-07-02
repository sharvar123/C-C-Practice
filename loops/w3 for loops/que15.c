#include<stdio.h>
//factorial

int main(){
	int n, fac=1,i=1;
	
	printf("Enter Number:");
	scanf("%d",&n);
	
	while (i<=n){
		fac=fac*i;
		i++;
	}
	printf("Factorial of %d : %d",n,fac);
	return 0;
}
