#include <stdio.h>
#if(0)
int main(void)
{
	int i,count = 0;
	printf("请输入待判断整数：");
	scanf("%d",&i);		 
    while(i)
    {
        count += i&0x01;
        i >>= 1;
    }
    if(count < 2)
        printf("YES\n");    //若count = 0 或者   count =1，表明 i 是 2 的n次方
    else
         printf("NO\n");
	return 0;
}
#endif
#if(1)
int main(void)
{
	int i,count = 0;
	printf("请输入待判断整数：");
	scanf("%d",&i);	
	if (!(i&(i-1)))
		printf("YES!\n");
	else
		printf("NO!\n");
	return 0;
}
#endif
