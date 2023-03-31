#include<stdio.h>
struct student
{
	char name[10];
	int id;
	float gpa;
}S[3];
int main()
{
	int i=3;
	for(i=1;i<=3;i++)
	{
	
	printf("enter the name");
	scanf("%s",&S[3].name);
	printf("enter the id");
	scanf("%d",&S[3].id);
	printf("enter the gpa");
	scanf("%d",&S[3].gpa);
    }
}