#include <stdio.h>
int main(void)
{
	int i,val;
	printf("������һ��������:");
	scanf("%d",&val);
	for (i=2;i<val;i++)
	{
		if (val%i==0)
			break;
	}
	if (i==val)
		printf("%d��������\n",val);
	else
		printf("%d����������\n",val);
	return 0;
}