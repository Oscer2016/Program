#include <stdio.h>
#include <stdlib.h>

struct stu
{
	int num;
	float score;
	struct stu *next;
};

struct stu *create(int n)
{
	struct stu *mylist,*tempnode,*cursor;
	mylist=(struct stu *)malloc(sizeof(struct stu));	//分配表头结点的存储空间
	if (mylist == NULL)		//判断表头结点的内存分配是否成功，不成功则结束程序
	{
		printf("\n错误：内存分配失败！程序结束");
		exit(1);
	}
	mylist->next=NULL;		//现在的链表为空状态
	cursor=mylist;
	for (int i=0; i<n; i++)
	{
		tempnode=(struct stu *)malloc(sizeof(struct stu));	//开辟结点的存储空间
		if (!tempnode)		//如果开辟存储空间失败，下面的语句就做出报告
		{
			printf("\n错误：内存分配失败！程序结束");
			exit(1);
		}
		tempnode->next=NULL;		//使之成为尾指针
		tempnode->num=10*i;
		tempnode->score=20.5*i+10;
		cursor->next=tempnode;		//将结点连接到链表上
		cursor=cursor->next;		//将链表的光标移动到下一个结点上
		printf("num=%d,score=%f\n",tempnode->num,tempnode->score);
	}
	printf("\n");
	return mylist;
}

int main(void)
