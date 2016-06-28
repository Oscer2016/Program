#include <stdio.h>
int main(void)
{
	int a[10],*p,*q,i,t;
	p = a;
	q = &a[9];
	printf("请输入十个数:\n");
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
	printf("逆序后的数组为:\n");
	for (i=0; i<10; i++)
		printf("%d ",*(p+i));
	printf("\n");
	return 0;
}
