#include<stdio.h>
int main()
{
  int N,M,i,j,flag=0;
  scanf("%d %d",&N,&M);
  int A[N],B[M];
  for(i=0;i<N;i++)
  {
    scanf("%d",&A[i]);
  }
  for(i=0;i<M;i++)
  {
    scanf("%d",&B[i]);
  }
  for(i=0;i<N;i++)
  {
    for(j=0;j<M;j++)
    {
      if(A[i] == B[j])
      {
        flag++;
      }
    }
 }
 if(flag == M)
 {
    printf("yes");
 }
 else
 {
    printf("No");
 }
 return 0;
}
