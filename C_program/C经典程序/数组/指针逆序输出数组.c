#include <stdio.h>
int main(void)
{
	int a[10],*p,*q,i,t;
	p = a;
	q = &a[9];
	printf("������ʮ����:\n");
	for (i=0; i<10; i++)
		scanf("%d",p+i);
	while (p<q)
	{
		t = *p;
		*p = *q;
		*q = t;
		p++;
		q--;
	}
	p = a;
	printf("����������Ϊ:\n");
	for (i=0; i<10; i++)
		printf("%d ",*(p+i));
	printf("\n");
	return 0;
}
