//binary search ...
#include<stdio.h>

int main()
{
	
	int key,size,top,bottom,middle;
	size=5;
	top=0;
	bottom=4;

int	a[5]={12,10,34,56,89};
	printf("enter value u want to search");
	scanf("%d",&key);
	for(int i=0;i<5;i++)
	{
		middle=(top+bottom)/2;
		if(key==a[middle])
		{
		
		printf("element found");
		break;
    	}
    	else{
		 if(key<a[middle])
    	{
    		bottom=middle-1;
   		}
   		else{
   			top=middle+1;
		   }
   	}
		
	}
	return 0;
}
