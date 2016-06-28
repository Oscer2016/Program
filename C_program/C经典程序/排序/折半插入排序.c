#include <stdio.h>
#define SIZE  10
int main(void)
{
	int i, j, t;
	int low, mid, high;
	int a[SIZE];
	
	printf("请输入 %d 个整数：",SIZE);
	for (i=0; i<SIZE; i++)
		scanf("%d",&a[i]);

	//折半插入排序
	for (i=1; i<SIZE; i++)
	{
        t = a[i];
        low = 0; high = i-1;  // 设置折半查找的范围
        while(low <= high)
        {
            mid = (low+high)/2;  // 取中间点
            if(a[mid] > t)
                high = mid-1;
            else
                low = mid+1;
        }

        for(j=i-1; j>=high+1; --j) // 统一后移
            a[j+1] = a[j];
        a[high+1] = t;    // 插入
    }
	
	//输出排序结果
	printf("按升序排列结果为：");
	for (i=0; i<SIZE; i++)
		printf("%d ",a[i]);
	printf("\n");

	return 0;
}
