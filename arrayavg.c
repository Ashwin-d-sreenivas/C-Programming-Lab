#include <stdio.h>
void main()
{
int n;
printf("enter no of elements");
scanf("%d",&n);
int array[n];
int i;
int sum=0;
for(i=0;i<n;i+=1)
{printf("enter number");
scanf("%d",&array[i]);
}
for(i=0;i<n;i=i+1)
{
	sum=sum+array[i];
}
float avg=(float)sum/n;
printf("sum of the given %d numberes = %d\n",n,sum);
printf("average of the given %d numbers =%f",n,avg);
}
