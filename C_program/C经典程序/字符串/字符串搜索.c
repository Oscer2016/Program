#include <stdio.h>
#include <string.h>
int main(void)
{
	char strsource[50],straim[50];		//定义两个字符型数组
	int sign,i,j,point;
	printf("input the source str:\n");	//输入原串
	scanf("%s",strsource);
	printf("input the aim str:\n");		//输入待匹配的串
	scanf("%s",straim);
	for (i=0; i<=(strlen(strsource)-strlen(straim)); i++)
	{
		point = i;
		sign = 1;
		for (j=0; j<strlen(straim); j++,point++)	//向后匹配
		{
			if (strsource[point] != straim[j])		//若匹配失败
			{
				sign=0;
				break;
			}
		}
		if (sign==1)					//匹配成功
		{
			printf("find!the location is %d\n",i+1);
			break;
		}
		
	}
	if (!sign)						//找不到匹配字符串
			printf("No find!\n");
	return 0;
}