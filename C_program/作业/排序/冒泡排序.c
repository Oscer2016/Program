/*
 *<<冒泡排序>>
 *冒泡排序的基本思想是从后往前（或从前往后）两两比较相邻元素的值，若为
 *逆序，则交换它们，直到序列比较完。我们称它为一趟冒泡。每一趟冒泡都会将一
 *个元素放置到其最终位置上。
 *****时间复杂度：最好情况O(n)，最坏情况O(n^2)，平均情况O(n^2)
 *****空间复杂度：O(1)
 *****稳定性：稳定
 */
#include <stdio.h>
int main(void)
{
	int i, j, flag;
	int A[9] = {1,4,5,8,9,6,3,0,2};

    for(i=0; i<8; ++i)
    {
        flag = 0;		 // 表示本次冒泡是否发生交换的标志
        for(j=8; j>i; --j) // 从后往前
        {
            if(A[j-1] > A[j]) 
            {
                flag = 1;	 // 交换
                A[j-1] = A[j-1]^A[j];
                A[j] = A[j-1]^A[j];
                A[j-1] = A[j-1]^A[j];
            }
        }
 
        if(flag == 0)
            break;
    }
	for (i=0; i<9; i++)
		printf("%-2d",A[i]);
	printf("\n");
	
	return 0;
}