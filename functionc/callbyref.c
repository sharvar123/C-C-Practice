#include<stdio.h>

void operations(float *a,float *b,float *ans1,float *ans2,float *ans3,float *ans4);

int main(){
	float num1,num2,sum,diff,prod,div;
	float *p1,*p2,*ans1,*ans2,*ans3,*ans4;
	printf("Enter two numbers:");
	scanf("%f%f",&num1,&num2);
	p1=&num1;
	p2=&num2;
	ans1=&sum;
	ans2=&diff;
	ans3=&prod;
	ans4=&div;
	operations(p1,p2,ans1,ans2,ans3,ans4);
	printf("\tAddition :\t%f\n",sum);
	printf("\tSubtraction:\t%f\n",diff);
	printf("\tMultiplication:\t%f\n",prod);
	printf("\tDivision:\t%f\n",div);
	
	
	return 0;
}

void operations(float *a, float *b,float *ans1,float *ans2,float *ans3,float *ans4){
	*ans1=*a+*b;
	*ans2=*a-*b;
	*ans3=(*a)*(*b);
	*ans4=(*a)/(*b);
}
