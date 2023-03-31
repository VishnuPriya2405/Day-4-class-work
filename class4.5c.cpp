#include<stdio.h>
struct rectangle
{
	float width;
	float height;
	float area;
}S1;
 int main()
{
 	printf("enter the width of the rectangle");
 	scanf("%f",&S1.width);
 	printf("enter the height of the rectangle");
 	scanf("%f",&S1.height);
 	
 	S1.area=S1.width*S1.height;
 	printf("the area of the rectangle=%2f",S1.area);
}