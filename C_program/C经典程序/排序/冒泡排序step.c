#include <stdio.h>
#include <stdlib.h>
void PrintArray(int *a,int n)	//输出每一步结果函数
{
	int i;
	for (i=0; i<n; i++)
		printf("%4d",a[i]);
	printf("\n");
}
void BubbleSort(int a[],int n)	//冒泡排序
{
	int i,j,tmp;
	int flag;
	int count=0;	//记录交换次数
	printf("initial sorting:");
	PrintArray(a,n);	//输出排序前的序列
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
				flag = 1;		//如果发生交换，标志变量设为1
			}
		}
		count++;				//记录已经发生的排序次数
		printf("after %d sorting:",count);
		PrintArray(a,n);		//输出第count次的排序结果
		if (flag==0)			//每进行一次排序，flag都清0，若交换不再发生，则排序完成
			return;
	}
}
int main(void)
{
	int *a,n=5,i;
	a = (int *)malloc(n*sizeof(int));	//为5个待排序整型数开辟存储空间
	for (i=0; i<n; i++)			//输入待排序数据
		scanf("%d",&a[i]);
	BubbleSort(a,n);			//调用排序函数进行排序
	free(a);					//排序结束，释放存储空间
	return 0;
}