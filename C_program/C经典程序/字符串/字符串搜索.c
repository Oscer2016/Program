#include <stdio.h>
#include <string.h>
int main(void)
{
	char strsource[50],straim[50];		//���������ַ�������
	int sign,i,j,point;
	printf("input the source str:\n");	//����ԭ��
	scanf("%s",strsource);
	printf("input the aim str:\n");		//�����ƥ��Ĵ�
	scanf("%s",straim);
	for (i=0; i<=(strlen(strsource)-strlen(straim)); i++)
	{
		point = i;
		sign = 1;
		for (j=0; j<strlen(straim); j++,point++)	//���ƥ��
		{
			if (strsource[point] != straim[j])		//��ƥ��ʧ��
			{
				sign=0;
				break;
			}
		}
		if (sign==1)					//ƥ��ɹ�
		{
			printf("find!the location is %d\n",i+1);
			break;
		}
		
	}
	if (!sign)						//�Ҳ���ƥ���ַ���
			printf("No find!\n");
	return 0;
}