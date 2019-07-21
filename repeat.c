#include<stdio.h>
int main()
{
  int num,i,j,k=0,l;
  scanf("%d",&num);
  int arr[num],arr1[num];
  for(i=0;i<num;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<num;i++)
  {
    for(j=i+1;j<num;j++)
    {
      if(arr[i] == arr[j])
      {
        for(l=0;l<k;l++)
        {
          if(arr1[k] != arr[i])
          {
             arr1[k] = arr[i];
           }
           k++;
         }
       }  
    }
  }
  for(i=0;i<k-1;i++)
  {
    for(j=0;j<k-1;j++)
    {
      if(arr1[i] == arr1[j])
      {
        temp=arr1[i];
        arr1[i]=arr1[j];
        arr1[j] = temp;
      }
  }
  for(i=0;i<k-1;i++)
  {
    printf("%d",arr1[i]);
  }
  return 0;
}
