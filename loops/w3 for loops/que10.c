#include<stdio.h>

int main(){
	int i,n,j;
	printf("Input number of rows:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for (j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
