//Take input of age of 3 people by user and determine oldest and youngest among them.

#include<stdio.h>

int main(){
	int age1,age2,age3;
	printf("Enter the ages of 3 people:");
	scanf("%d%d%d", &age1,&age2,&age3);
	
	//eldest
	if (age1 > age2){
        if (age1 > age3){
            printf("First person is the eldest among them\n");
        }
        else{
            printf("Third person is the eldest among them\n");
        }
    }
    else if (age2 > age3){
		printf("Second person is the eldest among them\n");
		}
    else{
    	printf("Third person is the eldest among them\n");
	}
	
	//youngest
	if (age1 < age2){
        if (age1 < age3){
            printf("First person is the Youngest among them\n");
        }
        else{
            printf("Third person is the youngest among them\n");
        }
    }
    else if (age2 < age3){
		printf("Second person is the youngest among them\n");
		}
    else{
    	printf("Third person is the youngest among them\n");
	}
	
	return 0;
}
