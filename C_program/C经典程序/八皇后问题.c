#include <stdio.h>
#include <math.h>

void queen(int i,int n,int x[]);
void output(int x[],int n);
int constraint(int i,int x[]);
static int ct = 0;				//ct表示满足要求的皇后的摆法的个数

int main(void)
{
	int n,x[50];
	printf("请输入皇后个数：");
	scanf("%d",&n);
	queen(1,n,x);
	printf("count=%d\n",ct);
	return 0;
}

//皇后问题主算法
void queen(int i,int n,int x[])
{
	int j=0;
	if (i>n)		//已经生成一个解
	{
		output(x,n);	//输出解
		ct++;			//解的个数加1
		return ;
	}
	for (j=1; j<=n; j++)
	{
		x[i]=j;			//将第i个皇后放置在第j列
		if (constraint(i,x)==1)	//当前皇后放置成功
			queen(i+1,n,x);		//继续放置下一个
		else
			x[i]=0;		//放置不成功，回溯
	}
}

//以向量形式输出一个解
void output(int x[],int n)
{
	int i;
	printf("(");
	for (i=1; i<n; i++)
		printf("%3d,",x[i]);
	printf(")\n");
}

//检查放置是否满足约束，满足返回1,不满足返回0
int constraint(int i,int x[])
{
	int k;
	for (k=1; k<i; k++)		//检查皇后放置是否满足要求
		if ( x[k] == x[i] || abs(x[k]-x[i]) == abs(k-i) )
			return 0;
	return 1;
}
