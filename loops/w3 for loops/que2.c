#include<stdio.h>

int main(){
	int i,sum=0;
	printf("First 10 natural numbers:");
	for(i=1;i<=10;i++){
		printf("%d ",i);
		sum+=i;
	}
	printf("\nSum is:%d",sum);	
	return 0;
}
