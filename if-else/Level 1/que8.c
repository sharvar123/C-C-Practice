/*A student will not be allowed to sit in exam if his/her attendance is less than 75%.
Take following input from user
Number of classes held			-		7856
Number of classes attended.		-		856			80%
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/
#include<stdio.h>

int main(){
	float held, att,per;
	printf("\tEnter the number of classes held:\t");
	scanf("%f",&held);
	printf("\tEnter the number of classes attended:\t");
	scanf("%f",&att);
	
	per=(100*att)/held;
	printf("\tPercentage of classes attended:\t\t%f %\n",per);
	if(per>75){
		printf("\t\tAllowed To sit in the exam.");
	}else{
		printf("\t\tNot Allowed To sit in the exam.");
	}
	return 0;
}
