/* 
	对任意三个数字进行排序
*/
# include <stdio.h>
int main(void)
{
	int a,b,c,x,y,z; 
	printf("请输入三个整数(中间以空格分隔): ");
	scanf("%d %d %d", &a, &b, &c);
	x = a;
	if (b<x)
		x = b;
	if (c<x)
		x = c;
	z = a;
	if (b>z)
		z = b;
	if (c>z)
		z = c;
	y = a + b + c - x - z;
	printf("从小到大的顺序为%d,%d,%d\n", x, y, z);

	return 0;
}