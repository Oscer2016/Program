#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char cName[20];		//����
	int iNumber;		//ѧ��
	struct Student *next;		//next��������ָ�򱾽ṹ�����͵�ָ������
};

int iCount;						//ȫ�ֱ�����ʾ������
struct Student *Create()
{
	struct Student *pHead = NULL;		//��ʼ������ͷָ��Ϊ��
	struct Student *pEnd, *pNew;
	iCount = 0;						//��ʼ��������
	pEnd = pNew = (struct Student *)malloc(sizeof(struct Student));
	printf("������ѧ����������ѧ�ţ�\n");
	scanf("%s",pNew->cName);
	scanf("%d",&pNew->iNumber);
	while (pNew->iNumber != 0)
	{
		iCount++;
		if (iCount == 1)
		{
			pNew->next=pHead;			//ʹ��ָ��ָ��Ϊ��
			pEnd=pNew;					//�����¼���Ľ��
			pHead=pNew;					//ͷָ��ָ���׽��
		}
		else 
		{
			pNew->next=NULL;			//�µĽ��ָ��Ϊ��
			pEnd->next=pNew;			//ԭ���Ľ��ָ���½��
			pEnd=pNew;					//pEndָ���½��
		}
		pNew=(struct Student *)malloc(sizeof(struct Student));	//�ٴη�������ڴ�ռ�
		scanf("%s",pNew->cName);
		scanf("%d",&pNew->iNumber);
	}
	free(pNew);			//�ͷŽ��ռ�
	return pHead;
}
void print(struct Student *pHead)
{
	struct Student *pTemp;		//ѭ�����õ���ʱָ��
	int iIndex=1;				//��ʾ�����н������
	printf("**********���������� %d ��ѧ��***********\n",iCount);
	pTemp=pHead;				//ָ��õ��׽��ĵ�ַ
	while (pTemp != NULL)
	{
		printf("�� %d ��ѧ����:\n",iIndex);		
		printf("������%s\n",pTemp->cName);		//�������
		printf("ѧ�ţ�%d\n",pTemp->iNumber);	//���ѧ��
		pTemp=pTemp->next;						//�ƶ���ʱָ�뵽��һ�����
		iIndex++;								//�����Լ�����
	}
}
int main(void)
{
	struct Student *pHead;			//����ͷ���
	pHead=Create();					//�������
	print(pHead);					//�������
	
	return 0;
}
