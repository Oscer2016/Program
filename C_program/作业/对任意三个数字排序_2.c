/* 
	�������������ֽ�������
*/
# include <stdio.h>
int main(void)
{
	int a,b,c,x,y,z; 
	printf("��������������(�м��Կո�ָ�): ");
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
	printf("��С�����˳��Ϊ%d,%d,%d\n", x, y, z);

	return 0;
}