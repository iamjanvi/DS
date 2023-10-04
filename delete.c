// delete the element of existing array....
#include<stdio.h>
#include<conio.h>
int main()
{
     int n,i,a[5]={1,2,3,4,5};
     for(i=0;i<5;i++)
     {
     	printf("\n%d",a[i]);
	 }
	 printf("\nEnter the element wants to delete ..");
	 scanf("%d",&n);
	 for(i=n-1;i<6-1;i++)
	 {
	 	a[i]=a[i+1];
	 }

	 printf("\nthe after deletion one element..");
	 for(i=0;i<4;i++)
	 {
	 	printf("\n%d",a[i]);
	 }
 	return 0;
}
