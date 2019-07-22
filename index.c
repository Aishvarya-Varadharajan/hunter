#include<stdio.h>
int main()
{
  int N,i,j=0,temp,k;
  scanf("%d",&N);
  if((N >= 1) && (N <= 100000))
  {
  int arr[N],arr1[N];
  for(i=0;i<N;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<N;i++)
  {
    if(arr[i] == i)
    {
      arr1[j]=i;
      j++;
    }
  }
  for(i=0;i<j;i++)
  {
    printf("%d ",arr1[i]);
  }
  }
  return 0;
  }
  
