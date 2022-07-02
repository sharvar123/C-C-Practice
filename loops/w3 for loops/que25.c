//que 25
#include<stdio.h>

int main(){
	int n,i,sum=0;
	
	printf("Input the number of terms:");
	scanf("%d",&n);
	printf("The square natural upto 5 terms are :");
	
	for (i=1;i<=n;i++){
		printf("%d ",i*i);
		sum=sum+(i*i);
	}
	printf("\nThe Sum of Square Natural Number upto %d terms = %d",n,sum);
	
	return 0;
}
