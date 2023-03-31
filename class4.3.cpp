#include<stdio.h>
struct book
{
	char title[20];
	char author[10];
	float price;
}S[5];
  int main()
{
  
  
  	int i=5;
  	for(i=1;i<=5;i++)
  	{
  	printf("enter the title");
  	scanf("%s",&S[5].title);
  	printf("enter the author");
  	scanf("%s",&S[5].author);
  	printf("enter the price");
  	scanf("%d",&S[5].price);
    }
}