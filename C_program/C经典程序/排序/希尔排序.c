#include <stdio.h>
#define SIZE  10
int main(void)
{
	int i, j, d, t;
	int a[SIZE];
	
	printf("请输入 %d 个整数：",SIZE);
	for (i=0; i<SIZE; i++)
		scanf("%d",&a[i]);

	//希尔排序
	for(d=SIZE/2; d>0; d/=2)  // 增量变化
    {
        for(i=d; i<SIZE; ++i)  // 每个分组序列进行直接插入排序
        {
            t = a[i];
            for(j=i-d; j>=0 && a[j]>t; j-=d)
                a[j+d] = a[j];  // 后移
            a[j+d] = t;
        }
    }
	//输出排序结果
	printf("按升序排列结果为：");
	for (i=0; i<SIZE; i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}
