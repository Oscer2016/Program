#include <stdio.h>
int main(void)
{
	int m,n,k,count=0;
	m=2;
	while (count<10)
	{
		for (k=2;m%k==0;k++)
		{
			if (k==m)
			{
				n=m+2;
				for (k=2;n%k==0;k++)
					if (k==n)
					{
						printf("%d �� %d ������������\n",m,n);
						count++;
					}
			}
			m++;
		}
	}
	return 0;
}