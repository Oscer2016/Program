/*
 *<<������>>
 *    ��������һ������ѡ�����򷽷�������������У���L[n]������һ����ȫ����
 *����˳��洢�ṹ��������ȫ��������˫�׽ڵ�ͺ��ӽڵ�֮������ڹ�ϵ���ڵ�
 *ǰ��������ѡ��ؼ�����󣨻���С����Ԫ�ء��������˼·�ǣ����Ƚ�����L[n]
 *��n��Ԫ�ؽ��ɳ�ʼ�ѣ����ڶѱ�����ص㣨�Դ����Ϊ�������Ѷ�Ԫ�ؾ������
 *ֵ������Ѷ�Ԫ�غ�ͨ�����ѵ�Ԫ������Ѷ�����ʱ������Ѳ��������ѵ���
 *�ʣ��ѱ��ƻ������Ѷ�Ԫ�����µ���ʹ��������ִ���ѵ����ʣ�������Ѷ�Ԫ�ء�
 *����ظ���ֱ�����н�ʣ��һ��Ԫ��Ϊֹ��
 *****ʱ�临�Ӷȣ�O(nlogn)
 *****�ռ临�Ӷȣ�O(1)
 *****�ȶ��ԣ����ȶ�
 */
 
void AdjustDown(int *A, int i, int len)
{
	int temp;
	int largest;
	temp = A[i];  // �ݴ�A[i]
     
    for(largest=2*i+1; largest<len; largest=2*largest+1)
    {
        if(largest!=len-1 && A[largest+1]>A[largest])
            ++largest;         // ������ӽ���
        if(temp < A[largest])
        {
            A[i] = A[largest];
            i = largest;         // ��¼�������λ��
        }
        else
            break;
    }
    A[i] = temp;    // ��ɸѡ����ֵ��������λ��
}
void BuildMaxHeap(int *A, int len)
{
	int i;
    for(i=len/2-1; i>=0; --i)  // ��i=[n/2]~1������������
        AdjustDown(A, i, len);
}
void HeapSort(int *A, int n)
{
	int i;
    BuildMaxHeap(A, n);       // ��ʼ����
    for(i=n-1; i>0; --i)  // n-1�˵Ľ����ͽ��ѹ��� 
    {
        // ������ĶѶ�Ԫ�أ��Ͷѵ�Ԫ�ؽ�����
        A[0] = A[0]^A[i];
        A[i] = A[0]^A[i];
        A[0] = A[0]^A[i];
        // ��������ʣ���n-1��Ԫ������ɶ�
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