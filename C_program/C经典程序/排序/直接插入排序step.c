#include <stdio.h>
#include <stdlib.h>
void PrintArray(int *a,int n)	//输出每一步结果函数
{
	int i;
	for (i=0; i<n; i++)
		printf("%4d",a[i]);
	printf("\n");
}
void InsertSort(int a[],int n)	//插入排序
{
	int i,j,tmp;
	printf("initial sorting:");
	PrintArray(a,n);	//输出排序前的序列
	for (i=1; i<n; i++)
	{
		tmp = a[i];
		//如果当前元素比前面已经排序过的元素序列的某个元素大的话，其余元素后移，
		//a[i]就插在这个位置
		for (j=i-1; (j>=0) && (tmp<a[j]); j--)
			a[j+1] = a[j];
		a[j+1] = tmp;
		printf("after %d sorting:",i);
		PrintArray(a,i+1);		//输出当前结果
	}
}
int main(void)
{
	int *a,n=5,i;
	a = (int *)malloc(n*sizeof(int));	//为5个待排序整型数开辟存储空间
	for (i=0; i<n; i++)			//输入待排序数据
		scanf("%d",&a[i]);
	InsertSort(a,n);			//调用排序函数进行排序
	free(a);					//排序结束，释放存储空间
	return 0;
}