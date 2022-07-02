#include<stdio.h>

int main(){
	int ch,ch1,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
	int flag=1,prod,quan;
	float dis,cost,tax;
	printf("\n1.Admin\n2.user\n\tChoice:");
	scanf("%d",&ch);
	switch(ch){
		case 1://admin
		{
			printf("\n____________________________________________________________________________\n\n");
			printf("\n\n\tAdd 10 products:\n");
			
			printf("Product name:");
			scanf("%d",&p1);
			printf("Product cost:");
			scanf("%d",&c1);
			
			printf("Product name:");
			scanf("%d",&p2);
			printf("Product cost:");
			scanf("%d",&c2);
			
			printf("Product name:");
			scanf("%d",&p3);
			printf("Product cost:");
			scanf("%d",&c3);
			
			printf("Product name:");
			scanf("%d",&p4);
			printf("Product cost:");
			scanf("%d",&c4);
			
			printf("Product name:");
			scanf("%d",&p5);
			printf("Product cost:");
			scanf("%d",&c5);
			
			printf("Product name:");
			scanf("%d",&p6);
			printf("Product cost:");
			scanf("%d",&c6);
			
			printf("Product name:");
			scanf("%d",&p7);
			printf("Product cost:");
			scanf("%d",&c7);
			
			printf("Product name:");
			scanf("%d",&p8);
			printf("Product cost:");
			scanf("%d",&c8);
			
			printf("Product name:");
			scanf("%d",&p9);
			printf("Product cost:");
			scanf("%d",&c9);
			
			printf("Product name:");
			scanf("%d",&p10);
			printf("Product cost:");
			scanf("%d",&c10);
			
			
			printf("\n\t\tProducts Added Successfully!!!!");
			break;
		}
		case 2://user
		{
			printf("\n____________________________________________________________________________\n\n");
			printf("No products Added.");
			flag--;
			break;
		}
		default:{
			printf("\n____________________________________________________________________________\n\n");
			printf("Invalid Choice.");
			flag--;
			break;
		}
	}	
	
	if(flag){
		printf("\n1.Admin\n2.user\n\tChoice:");
		scanf("%d",&ch1);
		switch(ch1){
			case 1:{
				printf("\n____________________________________________________________________________\n\n");
				printf("Products already added");
				break;
			}
			case 2:{
				printf("\n\n\t\t**************Products List**************\n");
				printf("Product Name\t\tCost\n");
				printf("1.%d\t\t\t%d\n",p1,c1);
				printf("2.%d\t\t\t%d\n",p2,c2);
				printf("3.%d\t\t\t%d\n",p3,c3);
				printf("4.%d\t\t\t%d\n",p4,c4);
				printf("5.%d\t\t\t%d\n",p5,c5);
				printf("6.%d\t\t\t%d\n",p6,c6);
				printf("7.%d\t\t\t%d\n",p7,c7);
				printf("8.%d\t\t\t%d\n",p8,c8);
				printf("9.%d\t\t\t%d\n",p9,c9);
				printf("10%d\t\t\t%d\n",p10,c10);	
				printf("\n____________________________________________________________________________\n\n");
				printf("Choose a product:");
				scanf("%d",&prod);
				printf("Quantity:");
				scanf("%d",&quan);
				
				switch(prod){
					case 1:{
						cost=quan*c1;
						break;
					}
					case 2:{
						cost=quan*c2;
						break;
					}
					case 3:{
						cost=quan*c3;
						break;
					}
					case 4:{
						cost=quan*c4;
						break;
					}
					case 5:{
						cost=quan*c5;
						break;
					}
					case 6:{
						cost=quan*c6;
						break;
					}
					case 7:{
						cost=quan*c7;
						break;
					}
					case 8:{
						cost=quan*c8;
						break;
					}
					case 9:{
						cost=quan*c9;
						break;
					}
					case 10:{
						cost=quan*c10;
						break;
					}
					default:{
						printf("Invalid Choice");
						
						break;
					}
					
				}
				printf("\n\t\t\t**************Bill***********\n");
				printf("\n\t\tCost:\t\t\t%f",cost);			
				if(cost<1000){
					printf("\n\t\tDiscount(0%%):\t\t0.0000",dis);
					printf("\n\t\tCost after discount:\t%f",cost);
				}
				else if(cost>=1000&&cost<2000){
					dis=cost/20;
					printf("\n\t\tDiscount(5%%):\t\t%f",dis);
					cost=cost-dis;
					printf("\n\t\tCost after discount:\t%f",cost);
				}else if(cost>=2000&&cost<3000){
					dis=cost/10;
					printf("\n\t\tDiscount(10%%):\t\t%f",dis);
					cost=cost-dis;
					printf("\n\t\tCost after discount:\t%f",cost);
				}else{
					dis=(3*cost)/10;
					printf("\n\t\tDiscount(15%%):\t\t%f",dis);
					cost=cost-dis;
					printf("\n\t\tCost after discount:\t%f",cost);
				}
				
				tax=(18*cost)/100;
				printf("\n\t\tTax(18%%):\t\t%f",tax);
				cost=cost+tax;
				printf("\n\t\tFinal Cost:\t\t%f",cost);
				
				
				break;
			}
			
			
		}
	}
	
	
	
	
	
	return 0;
}
