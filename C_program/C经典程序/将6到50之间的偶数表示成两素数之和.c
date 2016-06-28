#include <stdio.h>
int main(void)
{
	int i,j,m,n;
	for (m=6;m<=50;m+=2)
		for (n=2;n<m;n++)
		{				
			for (i=2;n%i!=0;i++)
				if (n==i)
				{				
					for (j=2;(m-n)%j!=0;j++)
						if (m-n==j)
						{
							printf("%d=%d+%d\n",m,n,m-n);
							break;
						}
				}
		}
	return 0;
}