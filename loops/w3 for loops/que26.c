#include<stdio.h>

int main(){
	int n,i,j=1,sum=0;
	
	printf("Input the number of terms:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d +",j);
		sum=sum+j;
		j=(j*10)+1;	
	}
	printf("\nThe Sum is :%d",sum);
	
	return 0;
}
