#include <stdio.h>
int main(void)
{
	int i,j,k,count=0;
	for (i=0;i<=20;i++)
		for (j=0;j<=(100-5*i)/2;j++)
			for (k=0;k<=100-5*i-2*j;k++)
				if (5*i+2*j+k==100)
					count++;
	printf("共有 %d 种换法。\n",count);
	return 0;
}