#include<stdio.h>
union my_union
{
	int(integer);
	float(floating_point);
	
}S[5];
int main()
{
	int i=5;
	for(i=1;i<=5;i++)
	{
	printf("enter the integers");
	scanf("%d",&S[5].integer);
	printf("enter the floating_point");
	scanf("%d",&S[5].floating_point);
    }
}
