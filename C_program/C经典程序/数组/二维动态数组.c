#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n1,n2;
	int **array,i,j;
	puts("����һά���鳤�ȣ�");
	scanf("%d",&n1);
	puts("�����ά���鳤�ȣ�");
	scanf("%d",&n2);
	//����ѭ����㵽��㣬��������ԭ��
	//��һά������Ԫ�ظ���Ϊn1��ָ�����飬������Ŷ�ά����ÿ���׵�ַ
	array = (int **)malloc(sizeof(int *)*n1);
	if (array == NULL)	//�ڴ�����ʧ�ܣ���ʾ�˳�
	{
		printf("out of memory,press any key to quit...\n");
		exit(0);	//��ֹ�������У����ز���ϵͳ
	}
	for (i=0; i<n1; i++)
	{
		array[i]=(int *)malloc(sizeof(int)*n2);
		if (array == NULL)	//�ڴ�����ʧ�ܣ���ʾ�˳�
		{
			printf("out of memory,press any key to quit...\n");
			exit(0);	//��ֹ�������У����ز���ϵͳ
		}
		for (j=0; j<n2; j++)
		{
			array[i][j]=i+j+1;
			printf("%d\t",array[i][j]);
		}
		puts("");
	}
	//�ͷ��ڴ棬��ѭ���������㣬����ͷŵ�ԭ��
	for (i=0; i<n1; i++)
		free(array[i]);	//�ͷŵڶ�άָ��
	free(array);	//�ͷ�һάָ��
	return 0;

}