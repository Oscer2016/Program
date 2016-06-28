/*
 *<<��������>>
 *    ���������Ƕ�ð�������һ�ָĽ��������˼���ǻ��ڷ��η����ڴ������L[n]
 *����ȡһ��Ԫ��pivot��Ϊ��׼��ͨ��һ���������л���Ϊ������L[1...K-1]��
 *L[k+1...n]���ǵ�L[1...k-1]�е�����Ԫ�ض�С��pivot����L[k+1...n]������Ԫ��
 *�����ڻ����pivot����pivot������������λ��L(k)�ϡ�Ȼ�󣬷ֱ�ݹ�ض�������
 *�����ظ��������̣�ֱ��ÿ������ֻ��һ��Ԫ�ػ��Ϊֹ��������Ԫ�ط�����������
 *λ���ϡ�
 *****ʱ�临�Ӷȣ����ŵ�����ʱ���뻮���Ƿ�Գ��йأ�����O(n^2),������
 *****O(nlogn),ƽ�����ΪO(nlogn)
 *****�ռ临�Ӷȣ�������Ҫ�ݹ鹤��ջ������ΪO(n)��ƽ�����ΪO(logn)
 *****�ȶ��ԣ����ȶ�
 */
int Partition(int *A, int low, int high)
{
    // ���ֲ����кܶ�汾����������Ե�ǰ���е�һ��Ԫ����Ϊ��Ŧ/��׼
	int pivot;
    pivot = A[low];
    while(low < high)
    {
        while(low<high && A[high]>=pivot)
            --high;
        A[low] = A[high];  // ������ŦֵС��Ԫ���Ƶ����
        while(low<high && A[low]<=pivot)
            ++low;
        A[high] = A[low];  // ������Ŧֵ���Ԫ���Ƶ��Ҷ�
    }
 
    A[low] = pivot;  // ��ŦԪ�طŵ�����λ��
    return low;      // ������ŦԪ�ص�λ��
}
 
void QuickSort(int *A, int low, int high)
{
    if(low < high)  // �ݹ�����������
    {
        int pivotPos = Partition(A, low, high); // ���ֲ��������ػ�׼Ԫ�ص�����λ��
        QuickSort(A, low, pivotPos-1);  // �ݹ�
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