// factorial ...
#include<stdio.h>
int fact(int);
int main()
{
	int num,val;
	printf("enter the number:");
	scanf("%d",&num);
	val=fact(num);
	printf("factorial of %d = %d",num,val);
	//return 0;
}
int fact(int n)
{
	if (n == 1)
	return 1;
	else
	return(n*fact(n-1));
}
