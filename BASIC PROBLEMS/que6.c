//Volume of cuboid
#include<stdio.h>

int main(){
	int l, b,h,vol;
	printf("Enter length, width and height respectively:");
	scanf("%d%d%d",&l,&b,&h);
	
	vol=l*b*h;
	printf("Volume of cuboid:%d",vol);
	
	
	return 0;
}
