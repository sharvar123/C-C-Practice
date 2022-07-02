//que 18
//[ 1-X^2/2!+X^4/4!- .........]
#include<stdio.h>

int factorial(int n){
	int fac=1,i=1;
	
	while (i<=n){
		fac=fac*i;
		i++;
	}
	return fac;
}

int numerator(float x,int k){
	int num=1,i;
	for(i=1;i<=k;i++){
		num=num*x;
	}
	return num;
}

int main(){
	int n,i,j,k=1;
	float x,term=1,sum=1,deno=1;
	
	printf("Input the Value of x :");
	scanf("%f",&x);
	
	printf("Input the number of terms :");
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
		k=k*2;
		printf("\n%d",k);
		printf("\n%d",factorial(k));
		printf("\n%d",numerator(x,k));
		
		term =(float)(numerator(x,k))/(float)factorial(k);
		if(i%2!=0){
			term=-1*term;
		}
		printf("\n%f",term);
		printf("\n_______--------\n");
		sum=sum+term;
		printf("\n%f",sum);
	}
	
//	printf("\n%d",k);
//	printf("\n%f",deno);
	printf("\nThe Sum of %d terms is %f",n,sum);
	
	return 0;
}
