/*
 *<<折半插入排序>>
 *    与直接插入排序不同的是，折半插入排序不是边比较边移动，而是将比较和移
 *动操作分离出来，即先折半查找出元素的待插入位置，然后再统一地移动待插入位
 *置之后的所有元素。不难看出折半插入排序仅仅是减少了比较的次数。
 *****时间复杂度：O(n^2)
 *****空间复杂度：O(1)
 *****稳定性：稳定
 */
#include <stdio.h>
int main(void)
{
	int A[7] = {1,4,5,8,9,6,3};
    int i, j, t, low, high, mid;

	for(i=1; i<7; ++i)
    {
        t = A[i];
        low = 0; high = i-1;  // 设置折半查找的范围
        while(low <= high)
        {
            mid = (low+high)/2;  // 取中间点
            if(A[mid] > t)
                high = mid-1;
            else
                low = mid+1;
        }
		for(j=i-1; j>=high+1; --j) // 统一后移
            A[j+1] = A[j];
        A[high+1] = t;    // 插入
    }
	
	 for (i=0; i<7; i++)
		printf("%-2d",A[i]);
	printf("\n");
	
	return 0;
}
