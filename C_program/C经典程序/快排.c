#include <stdio.h>
int partion(int *a, int low, int high)
{
    int  value = a[low];
    int  t;

    while (low < high)
    {
       while( high > low && a[high] >= value)
		  high--;  //会跳到8行的while去执行，而不是转到10行去执行if语句
       if(high != low)
       {
	       t = a[low];
	       a[low] = a[high];
	       a[high] = t;
       }

       while(low < high && a[low] <= value)
		 low++;
      
	   if(low != high)
       {
       	  t = a[low];
      	  a[low] = a[high];
      	  a[high] = t;
       }
	}  
   return low;
}
int main(void)
{
	int i;
	int a[7]={1,3,2,4,9,5,7};
	partion(a,0,6);
	for (i=0; i<7; i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}