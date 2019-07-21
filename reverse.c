#include<stdio.h>
#include<string.h>
int main()
{
  char str[100],str1[100],j;
  int len;
  gets(str);
  len=strlen(str);
  j=len;
  for(i=0;i<len;i++)
  {
    str1[i]=str[j];
    j--;
  }
  puts(str1);
  return 0;
  }
