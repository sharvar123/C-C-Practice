#include<stdio.h>

int main(){
	int n,i,j,k,p=1;
	
	printf("Input the no. of rows:");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		for(k=1;k<=(n-i);k++){
				printf(" ");
			}
		for(j=1;j<=i;j++){
			printf("%d ",p);
			p++;
			
		}
		printf("\n");
	}
	return 0;
}

