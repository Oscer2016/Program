include <stdio.h>

int f(int x)
{
	return 3*x*x+5*x-7;
}

int main(void)
{
	int (*p)();		//定义p为指向函数的	指针变量
	int a;
	p = f;			//对指向函数的指针进行赋值
	printf("Input x=");
	scanf("%d",&a);
	printf("(*p)(a)=%d\n",(*p)(a));	//用函数指针调用函数，相当于f(a)
	printf("p(2a)=%d\n",p(2*a));	//p(a)以指针变量名代替函数来调用
	return 0;
}
