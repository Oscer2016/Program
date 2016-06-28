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
	printf("请输入学生的姓名和学号：\n");
	scanf("%s%d",pNew->cName,&pNew->iNumber);
	while (pNew->iNumber != 0)
	{
		iCount++;
		if (iCount == 1)
			pHead=pNew;			//头指针指向首结点
		else
		{
			pEnd->next=pNew;	//原来的结点指向新结点
			pEnd=pNew;			//pEnd指向新结点
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
	printf("**********本名单中有 %d 个学生**********\n",iCount);
	pTemp=pHead;
	while (pTemp != NULL)
	{
		printf("第 %d 个学生是：\n",iIndex);
		printf("姓名：%s\n",pTemp->cName);
		printf("学号：%d\n",pTemp->iNumber);
		pTemp = pTemp->next;
		iIndex++;
	}
}

struct Student *Insert(struct Student *pHead)
{
	struct Student *pNew;
	printf("请输入插入学生的姓名和学号：\n");
	pNew=(struct Student *)malloc(sizeof(struct Student));
	scanf("%s%d",pNew->cName,&pNew->iNumber);
	pNew->next=pHead;			//新结点指针指向原来的首结点
	pHead=pNew;					//头指针指向新结点
	iCount++;					//增加链表结点数量
	return pHead;				//返回头指针
}

int main(void)
{
	struct Student *pHead;

	pHead=Create();
	pHead=Insert(pHead);
	Print(pHead);
	
	return 0;
}
