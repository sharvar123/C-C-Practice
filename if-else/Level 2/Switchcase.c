#include<stdio.h>
#define pi 3.14159

int main(){
	int ch,ch1, num1, num2,num3,num4,ans, s,ar,temp,num,rev,u,t,hu,km,m;
	float f1,f2,f3,f4,ans1,l,h,b, area,r,vol,c,fl;
	
	printf("\n1addition\n2.multiplication\n3.division\n4.multiplication");
	printf("\n5.Area of a Triangle ");//
	printf("\n6.Area of Rectangle ");//
	printf("\n7.Area of Square");	//
	printf("\n8.Area of Circle");//
	printf("\n9.Volume of cuboid ");//
	printf("\n10.Volume of cube");//
	printf("\n11.Volume of cone");//
	printf("\n12.Volume of cylinder");//
	printf("\n13.swap two variables");//
	printf("\n14.reverse a three digit number");//
	printf("\n15.convert kilometre to meter");
	printf("\n16.convert Celsius to Fahrenheit");
	printf("\n17.Calculate (a+b)2");
	printf("\n18.Calculate (a-b)2");
	printf("\t\nChoose an operation:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: {
			printf("\n1.2 digit Addition\n2.3 digit addition\n3.4 digit addition");
			printf("\t\nChoice:");
			scanf("%d",&ch1);


			switch(ch1){
				case 1:{
					printf("Enter two numbers for addition:");
					scanf("%d%d",&num1,&num2);
				
					ans=num1+num2;
	
					printf("Answer:%d",ans);
					break;
				}
				case 2:{
					printf("Enter three numbers for addition:");
					scanf("%d%d%d",&num1,&num2,&num3);
				
					ans=num1+num2+num3;
					printf("Answer:%d",ans);
					break;
				}
				case 3:{
					printf("Enter four numbers for addition:");
					scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
				
					ans=num1+num2+num3+num4;
					printf("Answer:%d",ans);
					break;
				}
				default:{
					printf("Wrong input");
					break;
				}
				
			}break;
		}
		
		case 2:{
			printf("\n1.2 digit Subtraction\n2.3 digit Subtraction\n3.4 digit Subtraction");
			printf("\t\nChoice:");
			scanf("%d",&ch1);
		

			switch(ch1){
				case 1:{
					printf("Enter two numbers for Subtraction:");
					scanf("%d%d",&num1,&num2);
				
					ans=num1-num2;
	
					printf("Answer:%d",ans);
					break;
				}
				case 2:{
					printf("Enter three numbers for Subtraction:");
					scanf("%d%d%d",&num1,&num2,&num3);
				
					ans=num1-num2-num3;
					printf("Answer:%d",ans);
					break;
				}
				case 3:{
					printf("Enter four numbers for Subtraction:");
					scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
				
					ans=num1-num2-num3-num4;
					printf("Answer:%d",ans);
					break;
				}
				default:{
					printf("Wrong input");
					break;
				}
				
			}break;
		}
		case 3:{
			printf("\n1.2 digit multiplication\n2.3 digit multiplication\n3.4 digit multiplication");
			printf("\t\nChoice:");
			scanf("%d",&ch1);
			

			switch(ch1){
				case 1:{
					printf("Enter two numbers for multiplication:");
					scanf("%d%d",&num1,&num2);
				
					ans=num1*num2;
	
					printf("Answer:%d",ans);
					break;
				}
				case 2:{
					printf("Enter three numbers for multiplication:");
					scanf("%d%d%d",&num1,&num2,&num3);
				
					ans=num1*num2*num3;
					printf("Answer:%d",ans);
					break;
				}
				case 3:{
					printf("Enter four numbers for multiplication:");
					scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
				
					ans=num1*num2*num3*num4;
					printf("Answer:%d",ans);
					break;
				}
				default:{
					printf("Wrong input");
					break;
				}
				
			}break;
		}
		case 4:{
			printf("\n1.2 digit Division\n2.3 digit Division\n3.4 digit Division");
			printf("\t\nChoice:");

			scanf("%d",&ch1);

			switch(ch1){
				case 1:{
					printf("Enter two numbers for Division:");
					scanf("%f%f",&f1,&f2);
				
					ans1=f1/f2;
	
					printf("Answer:%f",ans1);
					break;
				}
				case 2:{
					printf("Enter three numbers for Division:");
					scanf("%f%f%f",&f1,&f2,&f3);
				
					ans1=(f1/f2)/f3;
					printf("Answer:%f",ans1);
					break;
				}
				case 3:{
					printf("Enter four numbers for Division:");
					scanf("%f%f%f%f",&f1,&f2,&f3,&f4);
				
					ans1=((f1/f2)/f3)/f4;
					printf("Answer:%f",ans1);
					break;
				}
				default:{
					printf("Wrong input");
					break;
				}
				
			}break;
		}
		case 5:{
			printf("Enter base and height respectively:");
			scanf("%f%f",&h,&b);
		
			area=(h*b)/2;
			printf("Area of triangle:%f\n",area);
			break;
		}
		case 6:{
			printf("Enter length and width respectively:");
			scanf("%f%f",&l,&b);
	
			area=(l*b);
			printf("Area of Rectangle:%f",area);	
			
			break;
		}
		case 7:{
			printf("Enter length of side:");
			scanf("%d",&s);
			
			ar=(s*s);
			printf("Area of square:%d",ar);
			break;
		}	
		case 8:{
			printf("Enter radius:");
			scanf("%f",&r);
			
			area=pi*r*r;
			printf("Area of circle:%f",area);
			break;
		}
		case 9:{
			printf("Enter length, width and height respectively:");
			scanf("%f%f%f",&l,&b,&h);
			
			vol=l*b*h;
			printf("Volume of cuboid:%f",vol);
			break;
		}	
		case 10:{
			printf("Enter length of edge:");
			scanf("%d",&s);
			
			vol=s*s*s;
			printf("Volume of cube:%f",vol);
			
			break;
		}
		case 11:{
			printf("Enter radius and height of cone respectively:");
			scanf("%f%f",&r,&h);
			
			vol=(pi*r*r*h)/3;
			printf("Volume of cone:%f",vol);
			break;
		}
		case 12:{
			printf("Enter radius and height of cylinder respectively:");
			scanf("%f%f",&r,&h);
			
			vol=(pi*r*r*h);
			printf("Volume of cylinder:%f",vol);
			break;
		}
		case 13:{
			printf("Enter a:");
			scanf("%d",&num1);
			printf("Enter b:");
			scanf("%d",&num2);
			
			temp=num2;
			num2=num1;
			num1=temp;
			printf("Swapped :%d %d",num1,num2);
			break;
		}
		case 14:{
			printf("enter three digit number:");
			scanf("%d",&num);
			
			u=num%10;
			t=(num%100)/10;
			hu=num/100;
			rev=(100*u)+(10*t)+hu;
//			printf("%d\n", u);	
//			printf("%d\n", t);	
//			printf("%d\n", hu);	
			
			printf("Reversed number:%d", rev);
			break;
		}
		case 15:{
			printf("Enter km:");
			scanf("%d",&km);
			m=km*1000;
			printf("%d kilometers in meters is %d meter",km,m);
			break;
		}
		case 16:{
			printf("Enter temperature in celcius:");
			scanf("%f",&c);
	
			fl=((9*c)/5)+32;
			printf("%f celcius in fahrenheit is %f",c,fl);
			break;
		}
		case 17:{
			printf("Enter a and b respectively:");
			scanf("%d%d", &num1, &num2);
			
			ans=(num1*num1)+(num2*num2)+(2*num1*num2);
			printf("(a+b)^2 = %d ",ans);
			break;
		}
		case 18:{
			printf("Enter a and b respectively:");
			scanf("%d%d", &num1, &num2);
			
			ans=(num1*num1)+(num2*num2)-(2*num1*num2);
			printf("(a-b)^2 = %d ",ans);
			break;
			}
		default:{
			printf("\nWrong input.");
			break;
		}	
	}	
	
	return 0;
}
