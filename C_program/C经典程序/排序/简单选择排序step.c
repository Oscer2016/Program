#include <stdio.h>
#include <stdlib.h>
void PrintArray(int *a,int n)	//���ÿһ���������
{
	int i;
	for (i=0; i<n; i++)
		printf("%4d",a[i]);
	printf("\n");
}
void SelectSort(int a[],int n)	//ѡ������ĺ���ʵ��
{
	int i,j,temp;		//tempΪ�м������������ʱ�洢��������
	int min;			//���浱ʱ�μ�����������е���Сֵ
	int count=0;		//��¼��������
	printf("initial sorting:");
	PrintArray(a,n);	//�����ǰ�Ľ������
	for (i=0; i<n-1; i++)			//��ʼ����
	{
		min = i;					//��׼Ԫ�ص��±꣬����Ԫ������±��Ԫ�رȽ�
		for (j=i+1; j<n; j++)
		{
			if (a[j]<a[min])		//���׼Ԫ�ؽ��бȽϣ����С�Ļ�����Ҫ���н���
				min = j;			//����Ҫ������λ�ø���min
		}
		if (min != i)				//���min��ֵ����ԭ����i��˵��Ҫ����λ��
		{
			temp = a[i];				//���׼Ԫ�ؽ���λ�ý���
			a[i] = a[min];
			a[min] = temp;
		}
		count++;
		printf("after %d sorting:",count);
		PrintArray(a,n);
	}
}
int main(void)
{
	int *a,n=5,i;
	a = (int *)malloc(n*sizeof(int));	//Ϊ5�����������������ٴ洢�ռ�
	for (i=0; i<n; i++)			//�������������
		scanf("%d",&a[i]);
	SelectSort(a,n);			//������������������
	free(a);					//����������ͷŴ洢�ռ�
	return 0;
}
