/*
 *<<2-路归并排序>>
 *    顾名思义，2-路归并就是将2个有序表组合成一个新的有序表。假定待排序表
 *有n个元素，则可以看成是n个有序的子表，每个子表长度为1，然后两两归并...不
 *停重复，直到合成一个长度为n的有序序列为止。Merge()函数是将前后相邻的两个
 *有序表归并为一个有序表，设A[low...mid]和A[mid+1...high]存放在同一顺序表的
 *相邻位置上，先将它们复制到辅助数组B中。每次从对应B中的两个段取出一个元素
 *进行比较，将较小者放入A中。
 *****时间复杂度：每一趟归并为O(n),共log2n趟，所以时间为O(nlog2n)
 *****空间复杂度：O(n)
 *****稳定性：稳定
 */
#include <stdio.h>
#include <malloc.h> 
void Merge(int *A, int low, int mid, int high)
{
    int i, j, k;
	int *B = (int *)malloc(13*sizeof(int));  // 和数组A一样大
    for(k=low; k<=high; ++k)
        B[k] = A[k];             // 将A中所有元素复制到B
    for(i=low,j=mid+1,k=i; i<=mid&&j<=high; ++k)
    {
        if(B[i] <= B[j])      // 比较B的左右两段序列中的元素
            A[k] = B[i++];    // 将较小值复制到A中
        else
            A[k] = B[j++];
    }
    while(i<=mid)  A[k++] = B[i++];   // 若第一个表未检测完，复制
    while(j<=high) A[k++] = B[j++];   // 若第二个表未检测完，复制
}
 
void MergeSort(int *A, int low, int high)
{
    if(low < high)
    {
        int mid = (low + high)/2;
        MergeSort(A, low, mid);       // 对左侧子序列进行递归排序
        MergeSort(A, mid+1, high);    // 对右侧子序列进行递归排序
        Merge(A, low, mid, high);     // 归并
    }
}
int main(void)
{
	int i;
	int A[7] = {1,2,9,8,7,4,5};
	
	MergeSort(A,0,6);
	for (i=0; i<7; i++)
		printf("%-2d",A[i]);
	printf("\n");
	
	return 0;
}