#include <stdio.h>
int main(void)
{
	int age;

	printf("请输入孩子的年龄：");
	scanf("%d",&age);
	switch (age)
	{
	case 2:
	case 3: printf("age:%d,enter Lower class。\n",age); break;
	case 4: printf("age:%d,enter Middle class。\n",age); break;
	case 5:
	case 6: printf("age:%d,enter Higher class。\n",age); break;
	default: printf("不符合要求。\n");
	}
	
	return 0;
}
