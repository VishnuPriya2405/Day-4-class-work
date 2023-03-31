#include<stdio.h>
union my_data
{
	int integer;
	float floating_point;
}S1;
int main()
{
	int num;
	printf("enter the integer");
	scanf("%d",&S1.integer);
	printf("enter the floating_point");
	scanf("%d",&S1.floating_point);

    if(integer(num))
    {
	    printf("%d is integer");
    }
    else
    {
	    printf("%d is not integer");
    }
    if(floating_point(num))
    {
	    printf("%d is floating_point");
    }
    else
    {
	    printf("%d is not floating_point");
    }
}