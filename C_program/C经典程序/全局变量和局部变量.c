/*
	һ��Ҫ���׸ó���Ϊʲô�Ǵ�ģ�
	ҲҪ���װ�8��11�д������13�к��棬Ϊʲô�����OK��
*/

# include <stdio.h>

void g()  //8
{
	printf("k = %d\n", k);
} //11

int k = 1000;  //13��

void f(void)
{
	g();
	printf("k = %d\n", k);
}

int main(void)
{
	f();
	return 0;
}