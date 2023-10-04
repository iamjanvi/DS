//display to array of 5 element...
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,element;
	printf("Enter 5 element");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	printf("\nThe new array is ...");
	for(i=0;i<5;i++)
	printf("\n %d ",a[i]);
	return 0;
}
