/*
	��1��ĳ������֮��(����������)���е����������������
	��1���������ж�һ�������Ƿ�������
	����������Ȼ���Ƿǳ��ߣ�
	������1000�����֣�������ÿ�����ִ�1�������������
	��
			for (i=2; i<=val; ++i)
			{
				if ( IsPrime(i) )
					printf("%d\n", i);
			}
	Ҫд1000��
	
*/

#include <stdio.h>
int IsPrime(int m)
{
	int i;
		
	for (i=2; i<m; ++i)
	{
		if (0 == m%i)
			break;
	}
	if (i == m)
		return 1;
	else
		return 0;

}

int main(void)
{
	int val;
	int i;
 
	scanf("%d", &val);
	for (i=2; i<=val; ++i)
	{
		if ( IsPrime(i) )
			printf("%d\n", i);
	}

	return 0;
}