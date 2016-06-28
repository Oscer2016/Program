#include <stdio.h>
int main(void)
{
	int i,x,m,l,h,a[10];

	printf("input 10 numbers:\n");
	for (i=0; i<10; i++)
		scanf("%d",&a[i]);
	printf("输入待查找的数：");
	scanf("%d",&x);
	
	l=0;
	h=9;
	do{
		m = (l+h) / 2;
		if (x == a[m])
		{
			printf("查找成功，%d 在数组中的位置是: %d\n",x,m+1);
			break;
		}
		else if (x>a[m])
			l = m + 1;
		else
			h = m - 1;
	}while (l<=h);
	
	if (l>h)
		printf("查找失败！%d 不在此数组中。",x);
	
	return 0;
}