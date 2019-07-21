#include<stdio.h>
int main()
{
	int num,i,j,k=0,temp,flag=0;
	scanf("%d",&num);
	if((num >= 1) && (num <= 100000))
	{
		int a[num],arr[num],arr1[num];
		for(i=0;i<num;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<num;i++)
		{
			for(j=i+1;j<num;j++)
			{
				if(a[i] == a[j])
				{
					arr[k] = a[i];
					k++;
					flag=1;

				}
			}
		}
//	k=k-1;
		if(flag == 0)
		{
			printf("unique");
		}
		else
		{
		for(i=0;i<k;i++)
		{
			for(j=i+1;j<k;j++)
			{
				if(arr[i] == arr[j])
				{
					arr[j] = 0;
					k--;
				}
			}
		}
		j=0;
		for(i=0;i<k;i++)
		{
			if(arr[i] != 0)
			{
				arr1[j]=arr[i];
				j++;
			}
		}
		k=j;
		for(i=0;i<k;i++)
		{
			for(j=i+1;j<k;j++)
			{
				if(arr1[i] > arr1[j])
				{
					temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}
			}
		}
		for(i=0;i<k;i++)
		{
			printf("%d ",arr[i]);
		}
	}
	}
		return 0;
}
