#include<stdio.h>

int main(){
	int i,n,j;
	printf("Input upto the table number starting from 1 :");
	scanf("%d",&n);
	
	for(j=1;j<=n;j++){
			for(i=1;i<=10;i++){
			printf("%d X %d = %d\n",j,i,(j*i));
			
		}
		printf("--------------------------------------------------\n");
	}
	return 0;
}
