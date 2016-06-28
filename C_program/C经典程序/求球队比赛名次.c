#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	for(a=1; a<=4; a++)
		for (b=1; b<=4; b++)
		{
			if (b == a)		continue;
			for (c=1; c<=4; c++)
			{
				if (c==a || c==b)
					continue;
				d=10-a-b-c;
				if (((a==1) != (b==2)) && ((c==1) != (d==3)) && ((d==2) != (a==3)))
					printf("A=%d,B=%d,C=%d,D=%d¡£\n",a,b,c,d);
			}
		}
	return 0;
}