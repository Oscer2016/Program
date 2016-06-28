/*
 *<<2-·�鲢����>>
 *    ����˼�壬2-·�鲢���ǽ�2���������ϳ�һ���µ�������ٶ��������
 *��n��Ԫ�أ�����Կ�����n��������ӱ�ÿ���ӱ���Ϊ1��Ȼ�������鲢...��
 *ͣ�ظ���ֱ���ϳ�һ������Ϊn����������Ϊֹ��Merge()�����ǽ�ǰ�����ڵ�����
 *�����鲢Ϊһ���������A[low...mid]��A[mid+1...high]�����ͬһ˳����
 *����λ���ϣ��Ƚ����Ǹ��Ƶ���������B�С�ÿ�δӶ�ӦB�е�������ȡ��һ��Ԫ��
 *���бȽϣ�����С�߷���A�С�
 *****ʱ�临�Ӷȣ�ÿһ�˹鲢ΪO(n),��log2n�ˣ�����ʱ��ΪO(nlog2n)
 *****�ռ临�Ӷȣ�O(n)
 *****�ȶ��ԣ��ȶ�
 */
#include <stdio.h>
#include <malloc.h> 
void Merge(int *A, int low, int mid, int high)
{
    int i, j, k;
	int *B = (int *)malloc(13*sizeof(int));  // ������Aһ����
    for(k=low; k<=high; ++k)
        B[k] = A[k];             // ��A������Ԫ�ظ��Ƶ�B
    for(i=low,j=mid+1,k=i; i<=mid&&j<=high; ++k)
    {
        if(B[i] <= B[j])      // �Ƚ�B���������������е�Ԫ��
            A[k] = B[i++];    // ����Сֵ���Ƶ�A��
        else
            A[k] = B[j++];
    }
    while(i<=mid)  A[k++] = B[i++];   // ����һ����δ����꣬����
    while(j<=high) A[k++] = B[j++];   // ���ڶ�����δ����꣬����
}
 
void MergeSort(int *A, int low, int high)
{
    if(low < high)
    {
        int mid = (low + high)/2;
        MergeSort(A, low, mid);       // ����������н��еݹ�����
        MergeSort(A, mid+1, high);    // ���Ҳ������н��еݹ�����
        Merge(A, low, mid, high);     // �鲢
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