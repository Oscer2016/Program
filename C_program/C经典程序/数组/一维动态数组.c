#include <stdio.h>
#include <malloc.h>
int main(void)
{
	int *array = NULL,num,i;
	printf("please input the number of element:");
	scanf("%d",&num);		//���붯̬����ʹ�õ��ڴ��
	array = (int *)malloc(sizeof(int)*num);
	if (array == NULL)
	{
		printf("out of memory,press any key to quit...\n");
		return -1;
	}
	//��ʾ��������
	printf("please input %d elements:",num);
	for (i=0; i<num; i++)
		scanf("%d",&array[i]);
	//�������
	printf("%d elements are :\n",num);
	for (i=0; i<num; i++)
		printf("%d ",array[i]);
	free(array);
	puts("");
	return 0;
} 