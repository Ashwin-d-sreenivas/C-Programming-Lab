#include<stdio.h>
void main()
{
	int n;
	printf("enter no of elements:");
	scanf("%d",&n);
	int num;
	int array[n];
	printf("enter num to be searched:");
	scanf("%d",&num);
	for(int i=0;i<n;i+=1)
	{
		printf("enter array numbers:");
		scanf("%d",&array[i]);
		}
	for(int j=0;j<n;j+=1)
	{
		if(array[j]==num)
		{
			printf("%d is present in position %d\n",num,j+1);
			}
	}
	}
