#include<stdio.h>
union my_union
{
	int integer;
	float floating_point;
}s1;
 int main()
 {
 	printf("enter the integer");
 	scanf("%d",&s1.integer);
 	printf("enter the floating_point");
 	scanf("%d",&s1.floating_point);
 }
