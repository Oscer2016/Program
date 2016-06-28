#include <stdio.h>
int main(void)
{
	char str1[10],str2[10];		//存放输入的两个字符串
	char str3[10];				//存放输入的两个字符串的交集
	int count1=0,count2=0;		//分别记录两个字符数组的长度
	int count3=0;				//交集字符数组的长度
	scanf("%s",str1);
	scanf("%s",str2);
	while (str1[count1] != '\0')	//逐一考查str1中的每一个字符
	{
		count2=0;
		while (str2[count2] != '\0')			//在str2中搜索相同的字符
		{
			if (str1[count1] == str2[count2])	//若找到相同字符
			{
				str3[count3]=str1[count1];		//将当前字符存入交集数组中
				count3++;
				break;
			}
			count2++;
		}
		count1++;
	}
	str3[count3]='\0';
	if (str3[0] != '\0')
		printf("%s\n",str3);
	return 0;
}