#include <stdio.h>
int main(void)
{
	int score, n=0, sum=0;
	float ave;
	
	printf("����������ѧ���ɼ����ÿո��������");
	scanf("%d",&score);
	printf("����60�ֵ�ѧ���ɼ���");
	while (score>=0)
	{
		if (score<60)
			printf("%3d",score);
		sum += score;
		n++;
		scanf("%d",&score);
	}
	printf("\n");
	ave = sum * 1.0 / n;
	printf("��Щѧ����ƽ���ɼ�Ϊ��%f\n",ave);

	return 0;
}