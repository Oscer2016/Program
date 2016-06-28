#include <stdio.h>
int main(void)
{
	int x,y,z,k;
	
	scanf("%d%d%d",&x,&y,&z);
	k = x>y ? (x>z?x:z) : (y>z?y:z);
	printf("%d\n",k);
	
	return 0;
}
