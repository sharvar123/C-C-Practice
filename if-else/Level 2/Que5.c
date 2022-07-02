/* Write a Python program that reads one integers representing a day and a srting representing month and prints the season of that month and day.	
	input:
		month - 12
		date - 5
	output:
		season - Winter

	season chart	:  December, January, February 	- winter
			   March, April, May		- Spring
			   June, July, August   	- Summer
			   september, october, november - Autumn

	note** All the validation should be under considaration */
#include<stdio.h>

int main(){
	int mon, day, flag=1;
	printf("Enter month:");
	scanf("%d",&mon);
	printf("Enter day:");
	scanf("%d",&day);
	
	
	if (mon<0||mon>12){
			printf("Invalid month");
		    flag--;
		}else{
			if (mon==2){
				if(day<0||day>28){
					printf("Invalid day");
					flag--;

				}
			}else if (mon==4||mon==6||mon==9||mon==11){
				if (day<0||day>30){
					printf("Invalid day");
					flag--;
				}
			}else{
				if (day<0||day>31){
					printf("Invalid day");
					flag--;
				}
			}
		}		
	if(flag){
			if(mon==12||mon==1||mon==2){
			printf("\n\t\tSeason-Winter");
		}else if(mon==3||mon==4||mon==5){
			printf("\n\t\tSeason-Spring");	
		}else if(mon==6||mon==7||mon==8){
			printf("\n\t\tSeason-Summer");
		}else{
			printf("\n\t\tSeason-Autumn");	
		}
	}

	
	
	return 0;
}
