#include <stdio.h>
#include <stdlib.h>
void PrintArray(int *a,int n)	//���ÿһ���������
{
	int i;
	for (i=0; i<n; i++)
		printf("%4d",a[i]);
	printf("\n");
}
void InsertSort(int a[],int n)	//��������
{
	int i,j,tmp;
	printf("initial sorting:");
	PrintArray(a,n);	//�������ǰ������
	for (i=1; i<n; i++)
	{
		tmp = a[i];
		//�����ǰԪ�ر�ǰ���Ѿ��������Ԫ�����е�ĳ��Ԫ�ش�Ļ�������Ԫ�غ��ƣ�
		//a[i]�Ͳ������λ��
		for (j=i-1; (j>=0) && (tmp<a[j]); j--)
			a[j+1] = a[j];
		a[j+1] = tmp;
		printf("after %d sorting:",i);
		PrintArray(a,i+1);		//�����ǰ���
	}
}
int main(void)
{
	int *a,n=5,i;
	a = (int *)malloc(n*sizeof(int));	//Ϊ5�����������������ٴ洢�ռ�
	for (i=0; i<n; i++)			//�������������
		scanf("%d",&a[i]);
	InsertSort(a,n);			//������������������
	free(a);					//����������ͷŴ洢�ռ�
	return 0;
}