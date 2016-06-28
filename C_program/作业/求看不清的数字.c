/*雨水淋湿了算术书的一道题，8个数字只能看清3个，第一个数字虽然看不清，
但可看出不是1。编程求其余数字是什么？
				[□*(□3+□)]**2 = 8□□9
*/
#include <stdio.h>
int main(void)
{
	int A,B,C,D,E;
	for (A=2;A<=9;A++)
		for (B=0;B<=9;B++)
			for (C=0;C<=9;C++)
				for (D=0;D<=9;D++)
					for (E=0;E<=9;E++)
						if (A*(B*10+3+C)*A*(B*10+3+C) == 8009+D*100+E*10)
							printf("%2d%2d%2d%2d%2d\n",A,B,C,D,E);
	return 0;
}