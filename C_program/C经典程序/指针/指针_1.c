#include <stdio.h>
swap(int *p1,int *p2)	//不能完成交换
{
	int *p;
	p = p1;
	p1 = p2;
	p2 = p;
}
int main(void)
{
	int a, b;
	int *pointer_1, *pointer_2;

	printf("请输入a，b：");
	scanf("%d%d",&a,&b);
	pointer_1 = &a;
	pointer_2 = &b;
	swap(pointer_1,pointer_2);
	printf("a = %d,b = %d\n",*pointer_1,*pointer_2);
	
	return 0;
}