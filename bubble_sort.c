#include<stdio.h>
void main()
{
int n;
printf("enter no of elements:");
scanf("%d",&n);
int array[n];
for(int i=0;i<n;i+=1)
	{
	printf("enter array numbers:");
	scanf("%d",&array[i]);
	}
int j,temp;
for(int i=0;i<n;i+=1)
{
	for(j=0;j<n-1;j=j+1)
		{if(array[j]>array[j+1])
		{
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
			}
		}
	}
printf("array rearranged to:");
for(int i=0;i<n;i+=1)
{
	printf("%d",array[i]);
	}
}
