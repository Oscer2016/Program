#include <stdio.h>
int main(void)
{
	int i,t,a[10];
	printf("������10������");
	for (i=0; i<10; i++)
		scanf("%d",&a[i]);
	printf("�������ɾ��Ԫ�ص�λ�ã�");
	scanf("%d",&t);
	if (t<1 || t>10)
	{
		printf("ɾ��λ������\n");
		return -1;
	}
	
	for (i=t; i<10; i++)
		a[i-1]=a[i];
	
	for (i=0; i<9; i++)
		printf("%d ",a[i]);
	printf("\n");
	
	return 0;
}