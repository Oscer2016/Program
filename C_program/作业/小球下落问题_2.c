#include <stdio.h>
int main(void)
{
	int n;
	float sum=100,i=50;
	for (n=2; n<=10; n++)
	{
		sum += 2 * i;
		i /= 2;
	}
	printf("�ܹ������� %f �ס�\n",sum);
	printf("��10�η��� %f �ס�\n",i);
	return 0;
}