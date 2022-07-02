//km to m
#include<stdio.h>

int main(){
	int km,m;
	
	printf("Enter km:");
	scanf("%d",&km);

	m=km*1000;
	printf("%d kilometers in meters is %d meter",km,m);
	return 0;
}
