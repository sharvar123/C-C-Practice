//password check using function
#include<stdio.h>
#include<string.h>

int main(){
	char arr[50];//Python@123
	int i,digit=0,lwr_case=0,upr_case=0,ch=0,spl=0;
	
	printf("Enter your password:");
	
	scanf("%s",arr);
	printf("\n---------------------------------------------------------\n");
	
//	printf("")
		
	for(i=0;i<strlen(arr);i++)
	{
		if((int)arr[i]>=65 && (int)arr[i]<=90)
		{
			upr_case++;
		}
		else if((int)arr[i]>=97 && (int)arr[i]<=122)
		{
			lwr_case++;
		}
		else if((int)arr[i]>=48 && (int)arr[i]<=57)
		{
			digit++;
		}
		else
		{
			spl++;
		}
	}
	
	if(strlen(arr)>=8)
	{
	
	if(digit!=0 && lwr_case!=0 && upr_case!=0 && spl!=0)
	{
		printf("Valid");
		}	
	else
	{
		printf("Not Valid");
	}
}
else
{
	printf("Not Valid");
}
	
	
	
	
	return 0;
}
