#include<stdio.h>
#define pi 3.14159

int add();
int sub();
int mul();
float div();
float ar_tri();
float ar_cir();
float ar_rec();
int ar_sq();
float vol_cuboid();
int vol_cube();
float vol_cone();
float vol_cyl();
void swap();
int reverse();


int main(){
	int ch,ans;
	float ans1;
	printf("\n1addition\n2.subtraction\n3.multiplication\n4.division");
	printf("\n5.Area of a Triangle ");//
	printf("\n6.Area of Rectangle ");//
	printf("\n7.Area of Square");	//
	printf("\n8.Area of Circle");//
	printf("\n9.Volume of cuboid ");//
	printf("\n10.Volume of cube");//
	printf("\n11.Volume of cone");//
	printf("\n12.Volume of cylinder");//
	printf("\n13.swap two variables");//
	printf("\n14.reverse a number");//
	printf("\t\nChoose an operation:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:{
			ans=add();
			printf("%d",ans);
			break;
		}
		case 2:{
			ans=sub();
			printf("%d",ans);
			break;
		}
		case 3:{
			ans=mul();
			printf("%d",ans);
			break;
		}
		case 4:{
			ans1=div();
			printf("%f",ans1);
			break;
		}
		case 5:{
			ans1=ar_tri();
			printf("Area of triangle:%f\n",ans1);
			break;
		}
		case 6:{
			ans1=ar_rec();
			printf("Area of rectangle:%f\n",ans1);
			break;
		}
		case 7:{
			ans=ar_sq();
			printf("Area of square:%d",ans);
			break;
		}	
		case 8:{
			ans1=ar_cir();
			printf("Area of circle:%f\n",ans1);
			break;
		}
		case 9:{
			ans1=vol_cuboid();
			printf("Volume of cuboid:%f\n",ans1);
			break;
		}	
		case 10:{
			ans=vol_cube();
			printf("Volume of cube:%f",ans);		
			break;
		}
		case 11:{
			ans1=vol_cone();
			printf("Volume of cone:%f",ans1);
			break;
		}
		case 12:{
			ans1=vol_cyl();
			printf("Volume of cylinder:%f",ans1);
			break;
		}
		case 13:{
			swap();
			break;
		}
		case 14:{
			ans=reverse();			
			printf("Reversed number:%d", ans);
			break;
		}
	}
		
}
int reverse(){
	int n,rev=0,d,i;
	printf("Enter Number:");
	scanf("%d",&n);
	i=n;
	while(n>0){
		d=n%10;
		n=n/10;
		rev=rev*10+d;	
	}
	return rev;
}
void swap(){
	int num1,num2,temp;
	printf("Enter a:");
	scanf("%d",&num1);
	printf("Enter b:");
	scanf("%d",&num2);
	
	temp=num2;
    num2=num1;
	num1=temp;
	printf("Swapped :%d %d",num1,num2);	
}
float vol_cyl(){
	float r,h,vol;
	printf("Enter radius and height of cylinder respectively:");
	scanf("%f%f",&r,&h);
			
	vol=(pi*r*r*h);
	return vol;
}
float vol_cone(){
	float r,h,vol;
	printf("Enter radius and height of cone respectively:");
	scanf("%f%f",&r,&h);
			
	vol=(pi*r*r*h)/3;
	return vol;
	
}
int vol_cube(){
	int s,vol;
	printf("Enter length of edge:");
	scanf("%d",&s);
			
	vol=s*s*s;
	return vol;
	
}
float vol_cuboid(){
	float l,b,h,vol;
	printf("Enter length, width and height respectively:");
	scanf("%f%f%f",&l,&b,&h);
		
	vol=l*b*h;
	return vol;
}
float ar_cir(){
	float r,area;
	printf("Enter radius:");
	scanf("%f",&r);
		
	area=pi*r*r;
	return area;	
}
int ar_sq(){
	int s,ar;
	printf("Enter length of side:");
	scanf("%d",&s);
	
	ar=(s*s);
	return ar;
}
float ar_rec(){
	float l,b,area;
	printf("Enter length and width respectively:");
	scanf("%f%f",&l,&b);
	
	area=(l*b);
	return area;
}
float ar_tri(){
	float h,b,area;
	printf("Enter base and height respectively:");
	scanf("%f%f",&h,&b);

	area=(h*b)/2;
	return area;
}
int add(){
	int ans,num1,num2;
	printf("Enter two numbers for addition:");
	scanf("%d%d",&num1,&num2);
				
	ans=num1+num2;
	return ans;
	
}
int sub(){
	int ans,num1,num2;
	printf("Enter two numbers for addition:");
	scanf("%d%d",&num1,&num2);
				
	ans=num1-num2;
	return ans;
	
}
int mul(){
	int ans,num1,num2;
	printf("Enter two numbers for addition:");
	scanf("%d%d",&num1,&num2);
				
	ans=num1*num2;
	return ans;
	
}
float div(){
	float ans,f1,f2;
	printf("Enter two numbers for Division:");
	scanf("%f%f",&f1,&f2);
				
	ans=f1/f2;
	return ans;
	
}

