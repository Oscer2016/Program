#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char cName[20];
	int iNumber;
	struct Student *next;
};

int iCount;
struct Student *Create(void)
{
	struct Student *pHead=NULL;
	struct Student *pNew,*pEnd;
	iCount=0;
	pNew=pEnd=(struct Student *)malloc(sizeof(struct Student));
	printf("������ѧ����������ѧ�ţ�\n");
	scanf("%s%d",pNew->cName,&pNew->iNumber);
	while (pNew->iNumber != 0)
	{
		iCount++;
		if (iCount == 1)
			pHead=pNew;			//ͷָ��ָ���׽��
		else
		{
			pEnd->next=pNew;	//ԭ���Ľ��ָ���½��
			pEnd=pNew;			//pEndָ���½��
		}
		pNew=(struct Student *)malloc(sizeof(struct Student));
		scanf("%s%d",pNew->cName,&pNew->iNumber);
		pEnd->next=NULL;
	}
	free(pNew);
	return pHead;
}

void Print(struct Student *pHead)
{
	struct Student *pTemp;
	int iIndex = 1;
	printf("**********���������� %d ��ѧ��**********\n",iCount);
	pTemp=pHead;
	while (pTemp != NULL)
	{
		printf("�� %d ��ѧ���ǣ�\n",iIndex);
		printf("������%s\n",pTemp->cName);
		printf("ѧ�ţ�%d\n",pTemp->iNumber);
		pTemp = pTemp->next;
		iIndex++;
	}
}

struct Student *Insert(struct Student *pHead)
{
	struct Student *pNew;
	printf("���������ѧ����������ѧ�ţ�\n");
	pNew=(struct Student *)malloc(sizeof(struct Student));
	scanf("%s%d",pNew->cName,&pNew->iNumber);
	pNew->next=pHead;			//�½��ָ��ָ��ԭ�����׽��
	pHead=pNew;					//ͷָ��ָ���½��
	iCount++;					//��������������
	return pHead;				//����ͷָ��
}

int main(void)
{
	struct Student *pHead;

	pHead=Create();
	pHead=Insert(pHead);
	Print(pHead);
	
	return 0;
}
