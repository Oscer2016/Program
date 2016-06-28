#include <stdio.h>
#include <stdlib.h>
void josephus(int man[],int n,int m)
{
	int i,k,pos;	//i表示报数计数变量，k表示自杀顺序，pos表示约瑟夫环下标
	for (i=0;i<n;i++)	//初始化，表示所有人还没有自杀
		man[i]=0;
	i=0;k=0;
	for (pos=0;k<n;pos=(pos+1)%n)	//循环变量pos对一个圆环循环遍历
	{
		if (man[pos]==0)	//man[pos]还未自杀
			i++;
		if (i==m)
		{
			i=0;
			k++;		//自杀人数加1
			man[pos]=k;	//man[pos]是第k个自杀的人
		}
	}
}
int find_seq(int a[],int n,int key)
{
	int i;
	for (i=0; i<n; i++)
		if (key == a[i])
			return i;		//查找成功，返回key所在下标
	return -1;				//查找失败，即key不在数组a中
}
int main(void)
{
	int i,m,n,c,x;
	int man[50]={0};
	printf("总人数和报数间隔：");
	scanf("%d%d",&n,&m);
	josephus(man,n,m);			//调用约瑟夫环构造函数
	printf("约瑟夫环：\n");
	for (i=0; i<n; i++)
	{
		printf("%4d",man[i]);
		if ((i+1)%20==0)		//每行输出20个数据
			printf("\n");
	}
	printf("\n");
	printf("你想保护的人数：");
	scanf("%d",&c);
	printf("被保护的人应该排在：");
	for (i=0; i<c; i++)
	{
		x = 1 + find_seq(man,n,(n-i));
		printf("%5d",x);
	}
	printf("\n");
	return 0;
}
