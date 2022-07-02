#include<stdio.h>

int main(){
	int i,sum=0,n;
	float avg=0;
	printf("Input 10 numbers:\n");
	for (i=1;i<=10;i++){
		printf("Number-%d:",i);
		scanf("%d",&n);
		sum+=n;
		avg+=n;
	}
	printf("The sum of 10 numbers:%d\n",sum);
	avg=avg/10;
	printf("The average:%f",avg);
	return 0;
}
