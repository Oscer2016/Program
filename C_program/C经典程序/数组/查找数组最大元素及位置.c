#include <stdio.h>
int main(void)
{
	int i,s,pi,a[10];

	printf("input 10 numbers:\n");
	for (i=0; i<10; i++)
		scanf("%d",&a[i]);
	s = a[0];
	pi = 0;
	for (i=1; i<10; i++)
		if (a[i]>s)
		{
			s = a[i];
			pi = i;
		}
	printf("���Ԫ���ǣ�%d,λ���ǣ��� %d ������\n",s,pi+1);
	
	return 0;
}