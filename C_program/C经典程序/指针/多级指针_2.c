#include <stdio.h>
void f(int ** q)
{
	//*q����p
	printf("%d\n",**q);
}
void g()
{
	int i = 10;
	int * p = &i;

	f(&p); //p��int *���� , &p��int ** ����
	
}

int main(void)
{
	g();
	return 0;
}