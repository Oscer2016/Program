#include <stdio.h>
int main(void)
{
	int i=0,j,a[20];
	scanf("%d",&a[i]);
	while (a[i])
		scanf("%d",&a[++i]);
	for (j=0; j<i; j++)
	{
		switch (a[j])
		{
		case 1: puts("January"); break;
		case 2: puts("February"); break;
		case 3: puts("March"); break;
		case 4: puts("April"); break;
		case 5: puts("May"); break;
		case 6: puts("June"); break;
		case 7: puts("July"); break;
		case 8: puts("August"); break;
		case 9: puts("September"); break;
		case 10: puts("October"); break;
		case 11: puts("November"); break;
		case 12: puts("December"); break;
		default: puts("error");break;
		}
	}
	return 0;
}