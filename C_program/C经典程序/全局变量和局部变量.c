/*
	一定要明白该程序为什么是错的，
	也要明白把8到11行代码放在13行后面，为什么程序就OK了
*/

# include <stdio.h>

void g()  //8
{
	printf("k = %d\n", k);
} //11

int k = 1000;  //13行

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