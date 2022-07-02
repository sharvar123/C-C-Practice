#include<stdio.h>

int main(){
	int n,i;
	printf("Input number of terms:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("Number is:%d Cube is:%d\n",i,(i*i*i));
	}
	
	return 0;
}
