/*
	һ��Ҫ���׸ó���Ϊʲô�Ǵ����
	һ��Ҫ���׸ó����8����Ч֮�����Ϊʲô����ȷ��
*/

# include <stdio.h>

//void f(void);  //8��

void g(void)
{
	f();  //��Ϊ����f�Ķ�������˵���f���ĺ��棬�����﷨����
}

void f(void)
{
	printf("����!\n");
}

int main(void)
{
	g();

	return 0;
}


