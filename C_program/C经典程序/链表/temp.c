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
    printf("please input the information:\n");
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
	//printf("**********本名单中有 %d 个学生**********\n",iCount);
	pTemp=pHead;
	while (pTemp != NULL)
	{
		printf("%d\n",iIndex);
        printf("name:%s\n",pTemp->cName);
        printf("number:%d\n",pTemp->iNumber);
		pTemp = pTemp->next;
		iIndex++;
	}
}

struct Student *Delete(struct Student *pHead)
{
	struct Student *pTemp;

	pTemp=pHead->next;					
    pHead=pTemp->next;
	free(pTemp);
    iCount--;
}

int main(void)
{
	struct Student *pHead;
	pHead=Create();
	Delete(pHead);
	Print(pHead);
	return 0;
}
