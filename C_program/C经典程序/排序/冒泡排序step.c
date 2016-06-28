#include <stdio.h>
#include <stdlib.h>
void PrintArray(int *a,int n)	//���ÿһ���������
{
	int i;
	for (i=0; i<n; i++)
		printf("%4d",a[i]);
	printf("\n");
}
void BubbleSort(int a[],int n)	//ð������
{
	int i,j,tmp;
	int flag;
	int count=0;	//��¼��������
	printf("initial sorting:");
	PrintArray(a,n);	//�������ǰ������
	for (i=0; i<n-1; i++)
	{
		flag = 0;
		for (j=0; j<n-i-1; j++)
		{
			if (a[j]>a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
				flag = 1;		//���������������־������Ϊ1
			}
		}
		count++;				//��¼�Ѿ��������������
		printf("after %d sorting:",count);
		PrintArray(a,n);		//�����count�ε�������
		if (flag==0)			//ÿ����һ������flag����0�����������ٷ��������������
			return;
	}
}
int main(void)
{
	int *a,n=5,i;
	a = (int *)malloc(n*sizeof(int));	//Ϊ5�����������������ٴ洢�ռ�
	for (i=0; i<n; i++)			//�������������
		scanf("%d",&a[i]);
	BubbleSort(a,n);			//������������������
	free(a);					//����������ͷŴ洢�ռ�
	return 0;
}