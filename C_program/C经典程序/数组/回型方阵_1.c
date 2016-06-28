#include <stdio.h>
int main(void)
{
	int i,j,n,k;
	printf("请输入表示回型方阵的大小的整数n:");
	scanf("%d",&n);
	printf("大小为%d的回型方阵如下：\n",n);
	for (i=1,k=1; i<=n; i++)
	{
		for (j=1; j<k; j++)		//k为当前行中间要输出的数字
			printf("%4d",j);
		for (j=1; j<=n - 2 * k + 2; j++)
			printf("%4d",k);
		for (j=k-1; j>=1; j--)
			printf("%4d",j);
		printf("\n");
		if (i<=n/2)
			k++;
		else
			k--;
		if (i == n/2 && n%2==0)		//n为偶数时要对k进行修正
			k--;
	}
	return 0;
}