//que8
#include<stdio.h>

int main(){
	int n,odd=1,i,sum=0;
	
	printf("Input number of terms : ");
	scanf("%d",&n);
	printf("The odd numbers are : ");
	for(i=1;i<=n;i++){
		printf("%d ",odd);
		sum+=odd;
		odd+=2;
		
	}
	printf("\nThe Sum of odd Natural Number upto %d terms :%d",n,sum);
	return 0;
}
