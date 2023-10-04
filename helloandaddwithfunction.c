// print hello wolrd and add two number  by user define function..
#include<stdio.h>
#include<conio.h>
void display();
void add();
int main()
{
	int n;
	printf("\nEnter your choice ... ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1: display();
		        break;
		case 2: add();
		        break;
		default: printf("\ninvalid choice....");
	}
	return 0;
}

void display()
{
printf("Hello world");	
}

void add()
{
	int a,b,c;
	printf("Enter the a:");
	scanf("%d",&a);
	printf("Enter the b:");
	scanf("%d",&b);
	
	c=a+b;
	printf("Sum = %d",c);
}






