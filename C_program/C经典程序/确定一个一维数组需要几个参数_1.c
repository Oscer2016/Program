# include <stdio.h>
void f(int * pArr, int len)
{
	int i;

	for (i=0; i<len; ++i)
		printf("%d  ", *(pArr+i) );  
	printf("\n");
}

int main(void)
{
	int a[5] = {1,2,3,4,5};
	int b[6] = {-1,-2,-3,4,5,-6};
	int c[100] = {1, 99, 22, 33};

	f(a, 5);  //aÊÇ int *
	f(b, 6);
	f(c, 100);

	return 0;
}