#include <stdio.h>
#if(0)
int main(void)
{
	int i,count = 0;
	printf("��������ж�������");
	scanf("%d",&i);		 
    while(i)
    {
        count += i&0x01;
        i >>= 1;
    }
    if(count < 2)
        printf("YES\n");    //��count = 0 ����   count =1������ i �� 2 ��n�η�
    else
         printf("NO\n");
	return 0;
}
#endif
#if(1)
int main(void)
{
	int i,count = 0;
	printf("��������ж�������");
	scanf("%d",&i);	
	if (!(i&(i-1)))
		printf("YES!\n");
	else
		printf("NO!\n");
	return 0;
}
#endif
