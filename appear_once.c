#include<stdio.h>
int main()
{
  int n,flag,i,j;
  scanf("%d",&n);
  if((n >= 1) && (n <= 100000))
  {
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    flag=0;
    for(j=0;j<n;j++)
    {
    	if(i == j)
    	{
    		continue;
    	}
      if(arr[i] == arr[j])
      {
        flag=1;
      }
    }
    if(flag == 0)
    {
      printf("%d",arr[i]);
    }
  }
  }
}
  
