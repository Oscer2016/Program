#include <stdio.h>
int main(void)
{
	int i,k;	//��ʾ���͵�λ�����
	float d,d1;	//dΪ�ۼ��յ�����ǰ���͵�ľ��룬d1Ϊi=n��ʼ��ľ���
	float oil[10],dis[10];
	printf("���	���루km��	����(L)\n");
	dis[0]=1000;
	oil[0]=0;
	for (k=1;;k++)
	{
		dis[k]=dis[k-1]-500.0/(2*k-1);
		oil[k]=oil[k-1]+500;
		if (dis[k]<0)
			break;
	}
	dis[k]=0;	//�˵㴦��
	oil[k]=oil[k-1]+dis[k-1]*(2*(k-1)+1);
	for (i=k;i>=0;i--)	//������
		printf("%-2d	%-5.0f	\t%5.0f\n",k-i,dis[i],oil[i]);
	return 0;
}