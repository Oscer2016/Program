#include <stdio.h>
func(int n)
{
	auto int a=2;	//�Զ�����a��ÿ����һ�ζ�Ҫ���¸���ֵ
	a+=2;
	++n;
	printf("func:n=%d a=%d\n",n,a);
}

int main(void)
{
	int a=0;	//�Զ���������func()��ͬ
	func(1);
	printf("main:n=1 a=%d\n",a);
	a+=10;
	func(2);
	printf("main:n=1 a=%d\n",a);
	return 0;

}