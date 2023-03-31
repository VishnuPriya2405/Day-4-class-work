#include <stdio.h>
struct student
{
	char name[10];
	int id;
	float gpa;
}S1;
int main()
{
	printf("enter the name");
	scanf("%s",&S1.name);
	printf("enter the id");
	scanf("%d",&S1.id);
	printf("enter the gpa");
	scanf("%d",&S1.gpa);
}
