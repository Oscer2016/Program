#include <stdio.h>
int main(void)
{
	char str1[10],str2[10];		//�������������ַ���
	char str3[10];				//�������������ַ����Ľ���
	int count1=0,count2=0;		//�ֱ��¼�����ַ�����ĳ���
	int count3=0;				//�����ַ�����ĳ���
	scanf("%s",str1);
	scanf("%s",str2);
	while (str1[count1] != '\0')	//��һ����str1�е�ÿһ���ַ�
	{
		count2=0;
		while (str2[count2] != '\0')			//��str2��������ͬ���ַ�
		{
			if (str1[count1] == str2[count2])	//���ҵ���ͬ�ַ�
			{
				str3[count3]=str1[count1];		//����ǰ�ַ����뽻��������
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