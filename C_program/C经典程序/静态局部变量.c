#include <stdio.h>
int n=1;
func()
{
	static int a=2;		//��̬�ֲ���������main()�����е�a��ͬ
	a+=2;
	++n;
	printf("func:n=%d a=%d\n",n,a);
}
int main(void)
{
	static int a;	//��̬�ֲ���������ʼ��Ϊ0
	printf("main:n=%d a=%d\n",n,a);
	func();
	a+=10;
	printf("main:n=%d a=%d\n",n,a);
	func();
	printf("main:n=%d a=%d\n",n,a);
	return 0;
}