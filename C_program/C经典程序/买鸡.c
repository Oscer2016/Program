/*
	编程计算：（百元买百鸡）用一百元钱买一百只鸡。已知公鸡每只5元，
	母鸡每只3元，小鸡1元买3只，试问公鸡，母鸡，小鸡各多少只？
*/
/*
#include <stdio.h>
int main(void)
{
	int x,y,z;
	for (x=0;x<=100;x++)
		for (y=0;y<=100;y++)
			for (z=0;z<=100;z++)
				if (x+y+z==100 && 5*x+3*y+z/3.0==100)
					printf("cocks=%d,hens=%d,chickens=%d\n",x,y,z);

	return 0;
}
*/

#include <stdio.h>
int main(void)
{
	int x,y,z;
	for (x=0;x<=19;x++)
		for (y=0;y<=33;y++)
		{
			z=100-x-y;
			if (5*x+3*y+z/3.0 == 100)
			printf("cocks=%d,hens=%d,chicken=%d\n",x,y,z);
		}
	return 0;
}