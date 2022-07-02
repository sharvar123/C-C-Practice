#include <stdio.h>  
int my_strcmp(char *s1,char *s2);  
int main()  
{  
   char str1[20];  
   char str2[20]; 
   printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2);  
   int c= my_strcmp(str1,str2); 
   if(c==0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
  
    return 0;  
}  
  
int my_strcmp(char *a,char *b)  
{  
    int flag=0;  
    while(*a!='\0' &&*b!='\0')  
    {  
       if(*a!=*b)  
       {  
           flag=1;  
           break;  
       }  
       a++;
	   b++;  
    }  
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  
