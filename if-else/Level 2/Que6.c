/*after passing 12th everyone is confused that which domin they shoud select.
    we will design a councelling exam which will guide the student in which domin the student should go.
    for now we are considering only 3 major domians 1. Science 2. Commerce 3. Arts */
#include<stdio.h>

int main(){
	
	int invalid=0,sc_flag=0,com_flag=0,a_flag=0, ch1,ch2,ch3,ch4,ch5;
	printf("\t\t\t***********CAREER TEST***************\n");
	
	printf("Question 1:What are you interested in?\n Options\n\t1.Science\n\t2.Commerce\n\t3.Arts\n");
	printf("Choice:");
	scanf("%d",&ch1);
	
	if(ch1<0||ch1>3){
		printf("\tInvalid choice\n");
		invalid++;
	}else if(ch1==1){
		sc_flag++;
	}else if(ch1==2){
		com_flag++;
	}else if(ch1==3){
		a_flag++;
	}
	
	printf("********************************************************************************\n");
	printf("Question 2:\n Options\n\t1.commerce\n\t2.Science\n\t3.Arts\n");
	printf("Choice:");
	scanf("%d",&ch2);
	
	if(ch2<0||ch2>3){
		printf("\tInvalid choice\n");
		invalid++;
	}else if(ch2==2){
		sc_flag++;
	}else if(ch2==1){
		com_flag++;
	}else if(ch2==3){
		a_flag++;
	}
	
	printf("********************************************************************************\n");
	printf("Question 3:\n Options\n\t1.Arts\n\t2.Science\n\t3.Commerce\n");
	printf("Choice:");
	scanf("%d",&ch3);
	
	if(ch3<0||ch3>3){
		printf("\tInvalid choice\n");
		invalid++;
	}else if(ch3==2){
		sc_flag++;
	}else if(ch3==1){
		a_flag++;
	}else if(ch3==3){
		com_flag++;	
	
	}printf("********************************************************************************\n");
	printf("Question 4:\n Options\n\t1.commerce\n\t2.Science\n\t3.Arts\n");
	printf("Choice:");
	scanf("%d",&ch4);
	
	if(ch4<0||ch4>3){
		printf("\tInvalid choice\n");
		invalid++;
	}else if(ch4==2){
		sc_flag++;
	}else if(ch4==1){
		com_flag++;
	}else if(ch4==3){
		a_flag++;
	}
	
	printf("********************************************************************************\n");
	printf("Question 5:\n Options\n\t1.commerce\n\t2.Arts\n\t3.Science\n");
	printf("Choice:");
	scanf("%d",&ch5);
	
	if(ch5<0||ch5>3){
		printf("\tInvalid choice\n");
		invalid++;
	}else if(ch5==2){
		a_flag++;
	}else if(ch5==1){
		com_flag++;
	}else if(ch5==3){
		sc_flag++;
	}
	

	printf("\n*****************Result****************\n");
	
	if(a_flag==com_flag){
		if(a_flag>sc_flag){
			printf("\nAccording to the choices, the candidate should choose Arts and Commerce.");
		}else {
			printf("\nAccording to the choices, the candidate should choose Science");
		}	
	}else if(com_flag==sc_flag){
		if(com_flag>a_flag){
			printf("\nAccording to the choices, the candidate should choose commerce and Science.");
		}else
		{
			printf("\nAccording to the choices, the candidate should choose Arts");
		}
	}else if(sc_flag==a_flag){
		if(com_flag<a_flag){
			printf("\nAccording to the choices, the candidate should choose Arts and Science.");
		}else
		{
			printf("\nAccording to the choices, the candidate should choose Commerce");
		}	
	}else{
		if(sc_flag>com_flag&&sc_flag>a_flag){
			printf("\nAccording to the choices, the candidate should choose Science");
		}else if(a_flag>com_flag&&sc_flag<a_flag){
			printf("\nAccording to the choices, the candidate should choose Arts");
		}else if(a_flag<com_flag&&sc_flag<com_flag){
			printf("\nAccording to the choices, the candidate should choose Commerce");
		}		
	}
	
	
	
	printf("\n\nSummary:\n\tInvalid choices:%d\n\tScience:%d\n\tCommerce:%d\n\tArts:%d",invalid,sc_flag,com_flag,a_flag );
	return 0;
}	
	
	
