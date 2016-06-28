#include <stdio.h>
#include <stdlib.h>

//输出每一步结果的函数
void PrintArray(int a[],int n)
{
	int i;
	for (i=0; i<n; i++)			//通过循环输出元素
		printf("%4d",a[i]);
	printf("\n");
}

//SHELL算法排序函数
void shell(int a[],int count)
{
	int i,j,gap=count,k,x;
	for (k=0; k<count; k++)		//控制循环次数
	{
		gap=gap/2;
		for (i=gap; i<count; i++)		//进行排序
		{
			x=a[i];
			for (j=i-gap; (x<a[j]) && (j>=0); j=j-gap)
				a[j+gap]=a[j];
			a[j+gap]=x;
		}
		if (gap==0)
			break;
		printf("gap=%d:\n",gap);
		PrintArray(a,count);		//输出每次排序结果
	}
}

int main(void)
{
	int i,n,*a;
	printf("Input the n:");			//提示输入要排序元素的个数
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));	//在内存中开辟存储空间
	for (i=0; i<n; i++)
		scanf("%d",a+i);			//输入待排序数据
	shell(a,n);						//调用排序函数
	free(a);						//释放存储空间

	return 0;
}
