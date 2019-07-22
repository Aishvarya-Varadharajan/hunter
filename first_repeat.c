#include<stdio.h>
int main()
{
  int n,flag=0,i,j;
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
    for(j=0;j<n;j++)
    {
    	if(i == j)
    	{
    		continue;
    	}
      if(arr[i] == arr[j])
      {
        printf("%d",arr[i]);
        flag=1;
      }
    }
    if(flag == 1)
    {
      break;
    }
  }
    if(flag == 0)
    {
      printf("unique");
    
  }
  }
}
  
