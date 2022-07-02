/*Write a Python program to get next day of a given date.
Expected Output:
Input a year: 2016 Input a month [1-12]: 08 Input a day [1-31]: 23 The next date is [yyyy-mm-dd] 2016-8-24*/
//months last date//month limit 28 (2)31 (1,3,5,7,8,10,12) 30(4,6,9,11)
//year last date//
//Ignoring leap years
#include<stdio.h>

int main(){
	int year, mon, day;
	
	printf("Input a year:");
	scanf("%d",&year);
	printf("Input a Month[1-12]:");
	scanf("%d",&mon);	
	printf("Input a day[1-31]:");
	scanf("%d",&day);
		
	if(mon<0||mon>12){
		printf("Invalid Month.");
	}
	
	else if(mon==12 && day==31){
		mon=1;
		day=1;
		year++;
	}
	else{
		if(mon==2){
			if (day<0 || day>29){
				printf("Invalid Date.");
			}
			else if(day==28){
				mon++;
				day=1;	
			}else{
				day++;
			}
		}
		else if(mon==4||mon==6||mon==9||mon==11){
			if (day<0||day>30){
				printf("Invalid Date.");	
			}
			else if(day==30){
				mon++;
				day=1;
			}else
			{
				day++;
			}
		}
		else{
			if (day<0||day>31){
				printf("Invalid Date.");
			}
			else if(day==31){
				mon++;
				day=1;
			}
			else{
				day++;
			}
		}
		
	}
	printf("The next day is [yyyy-mm-dd] : %d-%d-%d",year, mon, day);
	
	return 0;
}

