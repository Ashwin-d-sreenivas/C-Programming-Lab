#include<stdio.h>
void main()
{
struct employee{
char name[50];
int id;
int salary;};

int n;
printf("emter num of employees:\n");
scanf("%d",&n);
struct employee data[n];
int i;
for(i=0;i<n;i++)
{
	printf("enter the name:\n");
	scanf("%s",data[i].name);
	printf("enter the id:\n");
	scanf("%d",&data[i].id);
	printf("enter salary:\n");
	scanf("%d",&data[i].salary);
	}
printf("employee details:\n");
for(i=0;i<n;i++)
{
	printf("employee name:%s, id:%d, salary:%d\n",data[i].name,data[i].id,data[i].salary);
	}
}
	
