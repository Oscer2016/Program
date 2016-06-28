/*
 *<<快速排序>>
 *    快速排序是对冒泡排序的一种改进。其基本思想是基于分治法：在待排序表L[n]
 *中任取一个元素pivot作为基准，通过一趟排序将序列划分为两部分L[1...K-1]和
 *L[k+1...n]，是的L[1...k-1]中的所有元素都小于pivot，而L[k+1...n]中所有元素
 *都大于或等于pivot。则pivot放在了其最终位置L(k)上。然后，分别递归地对两个子
 *序列重复上述过程，直至每部分内只有一个元素或空为止，即所有元素放在了其最终
 *位置上。
 *****时间复杂度：快排的运行时间与划分是否对称有关，最坏情况O(n^2),最好情况
 *****O(nlogn),平均情况为O(nlogn)
 *****空间复杂度：由于需要递归工作栈，最坏情况为O(n)，平均情况为O(logn)
 *****稳定性：不稳定
 */
int Partition(int *A, int low, int high)
{
    // 划分操作有很多版本，这里就总以当前表中第一个元素作为枢纽/基准
	int pivot;
    pivot = A[low];
    while(low < high)
    {
        while(low<high && A[high]>=pivot)
            --high;
        A[low] = A[high];  // 将比枢纽值小的元素移到左端
        while(low<high && A[low]<=pivot)
            ++low;
        A[high] = A[low];  // 将比枢纽值大的元素移到右端
    }
 
    A[low] = pivot;  // 枢纽元素放到最终位置
    return low;      // 返回枢纽元素的位置
}
 
void QuickSort(int *A, int low, int high)
{
    if(low < high)  // 递归跳出的条件
    {
        int pivotPos = Partition(A, low, high); // 划分操作，返回基准元素的最终位置
        QuickSort(A, low, pivotPos-1);  // 递归
        QuickSort(A, pivotPos+1, high);
    }
}
int main(void)
{
	int i;
	int A[7] = {1,2,7,6,4,8,9};
	
	QuickSort(A,0,6);
	for (i=0; i<7; i++)
		printf("%-2d",A[i]);
	printf("\n");
	
	return 0;
}