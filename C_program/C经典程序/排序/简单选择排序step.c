#include <stdio.h>
#include <stdlib.h>
void PrintArray(int *a,int n)	//输出每一步结果函数
{
	int i;
	for (i=0; i<n; i++)
		printf("%4d",a[i]);
	printf("\n");
}
void SelectSort(int a[],int n)	//选择法排序的函数实现
{
	int i,j,temp;		//temp为中间变量，用来临时存储交换数据
	int min;			//保存当时参加排序的序列中的最小值
	int count=0;		//记录交换次数
	printf("initial sorting:");
	PrintArray(a,n);	//输出当前的结果序列
	for (i=0; i<n-1; i++)			//开始排序
	{
		min = i;					//基准元素的下标，其他元素与该下标的元素比较
		for (j=i+1; j<n; j++)
		{
			if (a[j]<a[min])		//与基准元素进行比较，如果小的话，需要进行交换
				min = j;			//把需要交换的位置告诉min
		}
		if (min != i)				//如果min的值不是原来的i，说明要交换位置
		{
			temp = a[i];				//与基准元素进行位置交换
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
	a = (int *)malloc(n*sizeof(int));	//为5个待排序整型数开辟存储空间
	for (i=0; i<n; i++)			//输入待排序数据
		scanf("%d",&a[i]);
	SelectSort(a,n);			//调用排序函数进行排序
	free(a);					//排序结束，释放存储空间
	return 0;
}
