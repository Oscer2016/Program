/*
	��̼��㣺����Ԫ��ټ�����һ��ԪǮ��һ��ֻ������֪����ÿֻ5Ԫ��
	ĸ��ÿֻ3Ԫ��С��1Ԫ��3ֻ�����ʹ�����ĸ����С��������ֻ��
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