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
	int iIndex=1;
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

struct Student *Delete(struct Student *pHead,int iIndex)
{
	int i;
	struct Student *pTemp;			//临时指针
	struct Student *pPre;			//表示要删除结点前的结点
	pTemp=pHead;					//得到链表的头结点
	pPre=pTemp;
	printf("------删除第 %d 个学生------\n",iIndex);
	for (i=1; i<iIndex; i++)		//通过for循环使pTemp指向要删除的结点
	{
		pPre=pTemp;
		pTemp=pTemp->next;
	}
	pPre->next=pTemp->next;			//连接删除结点两边的结点
	free(pTemp);					//释放要删除结点的内存空间
	iCount--;
}

int main(void)
{
	struct Student *pHead;
	pHead=Create();
	Delete(pHead,2);
	Print(pHead);
	return 0;
}