//que 16
#include<stdio.h>

int main(){
	int n,odd=2,i,sum=0;
	
	printf("Input number of terms : ");
	scanf("%d",&n);
	printf("The even numbers are : ");
	for(i=1;i<=n;i++){
		printf("%d ",odd);
		sum+=odd;
		odd+=2;
		
	}
	printf("\nThe Sum of even Natural Number upto %d terms :%d",n,sum);
	return 0;
}
