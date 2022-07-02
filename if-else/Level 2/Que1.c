/*write a python program which accepts one input

input: "hii"
output:"bye"

input: "bye"
output: "hii*/
#include<stdio.h>

int main(){
	int a;
	printf("Enter your choice:\n\t1-hii\n\t2.bye\n");
	scanf("%d",&a);
	if(a!=1&&a!=2){
		printf("Invalid Input");
	}else{
			if(a==1){
		printf("bye");
		}
		else{
			printf("hii");
		}
	}
}
