#include <stdio.h>
int main(void)
{
	int m,i,flag;
	
	printf("������Ҫ�жϵ�������m��");
	scanf("%d",&m);
	flag = 1;
	if (m < 2)
	{
		printf("%d ��������\n",m);
		return -1;
	}
	for (i = 2; i < m; i++)
		if (m % i == 0)
		{
			flag = 0;
			i = m;			//��iΪm��ʹi<m��������ʹ��������ʱ�˳�ѭ��
		}
	if (flag == 1)
		printf("%d ������\n",m);
	else
		printf("%d ��������\n",m);

	return 0;
}