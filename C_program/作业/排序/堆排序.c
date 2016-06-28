/*
 *<<堆排序>>
 *    堆排序是一种树形选择排序方法，在排序过程中，将L[n]看成是一棵完全二叉
 *树的顺序存储结构，利用完全二叉树中双亲节点和孩子节点之间的内在关系，在当
 *前无序区中选择关键字最大（或最小）的元素。堆排序的思路是：首先将序列L[n]
 *的n个元素建成初始堆，由于堆本身的特点（以大根堆为例），堆顶元素就是最大
 *值。输出堆顶元素后，通常将堆底元素送入堆顶，此时根结点已不满足大根堆的性
 *质，堆被破坏，将堆顶元素向下调整使其继续保持大根堆的性质，再输出堆顶元素。
 *如此重复，直到堆中仅剩下一个元素为止。
 *****时间复杂度：O(nlogn)
 *****空间复杂度：O(1)
 *****稳定性：不稳定
 */
 
void AdjustDown(int *A, int i, int len)
{
	int temp;
	int largest;
	temp = A[i];  // 暂存A[i]
     
    for(largest=2*i+1; largest<len; largest=2*largest+1)
    {
        if(largest!=len-1 && A[largest+1]>A[largest])
            ++largest;         // 如果右子结点大
        if(temp < A[largest])
        {
            A[i] = A[largest];
            i = largest;         // 记录交换后的位置
        }
        else
            break;
    }
    A[i] = temp;    // 被筛选结点的值放入最终位置
}
void BuildMaxHeap(int *A, int len)
{
	int i;
    for(i=len/2-1; i>=0; --i)  // 从i=[n/2]~1，反复调整堆
        AdjustDown(A, i, len);
}
void HeapSort(int *A, int n)
{
	int i;
    BuildMaxHeap(A, n);       // 初始建堆
    for(i=n-1; i>0; --i)  // n-1趟的交换和建堆过程 
    {
        // 输出最大的堆顶元素（和堆底元素交换）
        A[0] = A[0]^A[i];
        A[i] = A[0]^A[i];
        A[0] = A[0]^A[i];
        // 调整，把剩余的n-1个元素整理成堆
        AdjustDown(A, 0, i);   
    }
}
int main(void)
{
	int i;
	int A[7] = {1,0,2,4,3,5,7};
	HeapSort(A,7);
	for (i=0; i<7; i++)
		printf("%-2d",A[i]);
	printf("\n");
	return 0;
}