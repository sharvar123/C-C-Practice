#include<stdio.h>

void my_strlwr(char *s){
	while(*s!='\0'){
		if((int)*s>=65 && (int)*s<=90){
			*s=*s+32;
			s++;
		}
		else{
			s++;
		}
	}
}

int main(){
	char str[30];
	printf("\nEnter String:");
	gets(str);
	my_strlwr(str);
	printf("\nLowercase:");
	puts(str);
	
	return 0;
}
