/*
	�������������Сֵ
*/
#include <stdio.h>
int main(void)
{
	int x,y,z,min;
	printf("�����������������ÿո��������");
	scanf("%d%d%d",&x,&y,&z);
	min = x;
	if (y < min)		min = y;
	if (z < min)		min = z;
	printf("��СֵΪ%d\n",min);
	return 0;
}
