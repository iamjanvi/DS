//selection sort....
#include <stdio.h>
int main() {
   int arr[10]={6,12,0,18,11,99,55,45,34,2};
   int n=10;
   int i, j, position, swap;
   for (i = 0; i < n; i++) {
     
      for (j = i + 1; j < n; j++) {
         if (arr[i] > arr[j])
           {
		 swap = arr[i];
         arr[i] = arr[j];
         arr[j] = swap;
         	}
         else
         continue;
      }
     
      }
   
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}
