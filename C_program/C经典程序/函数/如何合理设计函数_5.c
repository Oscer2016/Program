/*
	������������ʵ����1��ĳ������֮�����е����������������

	���������٣��������Ը���
*/


# include <stdio.h>

//�������Ĺ�����: �ж�m�Ƿ����������Ƿ���1�����Ƿ���0
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

//�������Ĺ����ǰ�1��n֮�����е���������ʾ�������
void TraverseVal(int n)
{
	int i;

	for (i=2; i<=n; ++i)
	{
		if ( IsPrime(i) )
			printf("%d\n", i);
	}
}

int main(void)
{
	int val;
 
	scanf("%d", &val);
	TraverseVal(val);

	return 0;
}