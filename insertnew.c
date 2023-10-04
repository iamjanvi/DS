// insert a new element ....
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6]={1,2,3,4,5},i;
	printf("Enter new element...");
	scanf("%d",&a[5]);
	
	printf("\nBefore adding element..");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nafter adding element..");
	for(i=0;i<6;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
