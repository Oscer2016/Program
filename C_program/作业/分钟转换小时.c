/*
	������ķ�����ת��ΪСʱ���Ӹ�ʽ   
*/
#include <stdio.h>
int main(void)
{
	int i,h,m;
	printf("�������������");
	scanf("%d",&i);
	h = i / 60;
	m = i - 60 * h;
	printf("%d����<=>%dСʱ%d����\n",i,h,m);
	return 0;
}
