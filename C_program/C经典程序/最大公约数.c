#include <stdio.h>
int main(void)
{
	int m, n, r;	//r��ʾ����
	
	printf("��������������m,n:");
	scanf("%d%d",&m,&n);
	r = m % n;
	while (r != 0)
	{
		m = n;
		n = r;
		r = m % n;	//��m��n���������
	}
	printf("���Լ����%d\n",n);
	
	return 0;
}