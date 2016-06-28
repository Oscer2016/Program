# include <stdio.h>

void sort(int * a, int len)
{
	int i, j, t;

	for (i=0; i<len-1; ++i)
	{
		for (j=0; j<len-1-i; ++j)
		{
			if (a[j] > a[j+1])  // >表示升序 <表示降序
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t; 
			}
		}
	}
}

int main(void)
{
	int a[10] = {10, 2, 8, -8, 11, 0, 6, 9, 5, 21};
	int i = 0;

	sort(a, 10);

	for (i=0; i<10; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}