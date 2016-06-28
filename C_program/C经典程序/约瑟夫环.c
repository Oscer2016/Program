#include <stdio.h>
#include <stdlib.h>
void josephus(int man[],int n,int m)
{
	int i,k,pos;	//i��ʾ��������������k��ʾ��ɱ˳��pos��ʾԼɪ���±�
	for (i=0;i<n;i++)	//��ʼ������ʾ�����˻�û����ɱ
		man[i]=0;
	i=0;k=0;
	for (pos=0;k<n;pos=(pos+1)%n)	//ѭ������pos��һ��Բ��ѭ������
	{
		if (man[pos]==0)	//man[pos]��δ��ɱ
			i++;
		if (i==m)
		{
			i=0;
			k++;		//��ɱ������1
			man[pos]=k;	//man[pos]�ǵ�k����ɱ����
		}
	}
}
int find_seq(int a[],int n,int key)
{
	int i;
	for (i=0; i<n; i++)
		if (key == a[i])
			return i;		//���ҳɹ�������key�����±�
	return -1;				//����ʧ�ܣ���key��������a��
}
int main(void)
{
	int i,m,n,c,x;
	int man[50]={0};
	printf("�������ͱ��������");
	scanf("%d%d",&n,&m);
	josephus(man,n,m);			//����Լɪ�򻷹��캯��
	printf("Լɪ�򻷣�\n");
	for (i=0; i<n; i++)
	{
		printf("%4d",man[i]);
		if ((i+1)%20==0)		//ÿ�����20������
			printf("\n");
	}
	printf("\n");
	printf("���뱣����������");
	scanf("%d",&c);
	printf("����������Ӧ�����ڣ�");
	for (i=0; i<c; i++)
	{
		x = 1 + find_seq(man,n,(n-i));
		printf("%5d",x);
	}
	printf("\n");
	return 0;
}
