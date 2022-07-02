#include<stdio.h>
#include<string.h>

void main(void)
{
  char str1[25],str2[25];
  int i=0,pos;
  printf("\t\tEnter First String:");
  gets(str1);
  printf("\t\tEnter Second String:");
  gets(str2);
  pos=strlen(str1);
  while(str2[i]!='\0')
  {
    str1[pos]=str2[i];
    pos++;
    i++;
  }
  str1[pos]='\0';
  printf("\nvgbhjn\t\t------------------------------------------\n");
  printf("\n\t\tConcatenated String: %s",str1);
}
