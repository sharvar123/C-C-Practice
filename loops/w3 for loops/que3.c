#include<stdio.h>

int main(){
	int n,i,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("The first %d natural no. are: ",n);
	for(i=1;i<=n;i++){
		printf("%d ",i);
		sum+=i;
	}
	printf("\nSum is:%d",sum);	
	return 0;
}
