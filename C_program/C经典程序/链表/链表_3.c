#include <stdio.h>
#include <stdlib.h>
#include <assert.h>		//宏assert需要的头文件

typedef struct lnode
{
	int data;				//数据元素，可以是任何类型，这里使用整型数据元素
	struct lnode *next;		//指向后继结点的指针
}Lnode;

//结点插入，返回指向链表首结点的指针
Lnode *list_insert(Lnode *first,Lnode *p,int e)
{
	Lnode *q,*s;
	s=(Lnode *)malloc(sizeof(Lnode));	//给新结点分配空间
	s->data=e;
	s->next=0;
	if (first == NULL)			//空链表
	{
		first=s;
		return first;
	}
	if (p == first)				//p是首结点，将s结点插入在链表首结点之前
	{
		s->next=first;
		first=s;
	}
	else
	{
		q=first;
		while (q->next != p)	//查找p的前驱结点q
			q=q->next;
		q->next=s;				//在链表中q结点之后插入s结点
		s->next=p;
	}
	return first;
}

//用数组a[0:n-1]中的数据构造链表，返回链表首指针
Lnode *list_create(Lnode *first,int a[],int n)
{
	int i;
	for (i=0; i<n; i++)
		first=list_insert(first,first,a[n-1-i]);	//利用前插法建立链表
	return first;
}

//在链表first中，查找值为e的结点，返回指向值为e的结点的指针
Lnode *list_find(Lnode *first,int e)
{
	Lnode *p;
	p=first;
	if (first == NULL)
		return NULL;		//first为0，表示是空链表
	while (p)
	{
		if (p->data==e)
			return p;		//结点p的值与e相等，直接返回指针p
		p=p->next;			//继续向后查找
	}
	return NULL;
}


//在链表first中，删除值为e的结点，如果找到结点，物理删除，返回链表首指针
Lnode *list_delete(Lnode *first,int e)
{
	Lnode *q,*p;
	q=p=first;
	if (first == NULL)		//空链表
		return NULL;
	if (first->data == e)	//被删除的结点是首结点
	{
		p=first;
		first=first->next;
		free(p);
		return first;
	}
	for (q=first; q->next; q=q->next)	//被删除的结点是中间某个结点
	{
		p=q->next;
		if (p->data == e)			//找到值为e的结点
		{
			q->next=p->next;		//这两条语句删除结点p
			free(p);
			break;
		}
	}
	return first;
}

//链表遍历，在链表first中，依次打印每个结点的值
void list_print(Lnode *first)
{
	Lnode *p;
	p=first;
	while (p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("\n");
}

//销毁链表first每个结点内存空间
void list_destroy(Lnode *first)
{
	Lnode *p=first;
	first = first->next;
	free(p);
	while (first)
	{
		p=first;
		first = first->next;
		free(p);
	}
}
int main(void)
{
	int n=7,a[]={12,34,21,11,56,54,65};
	Lnode *first=0,*p=0;
	first=list_create(first,a,n);		//用数组a创建链表
	list_print(first);					//输出链表原始数据
	first=list_insert(first,first,100);
	list_print(first);					//输出表首前插入100后的链表
	p=list_find(first,11);				//查找值为11的结点
	p=list_insert(first,p,200);			//在值为11的结点前插入值为200的结点
	list_print(first);					//在值为11的结点前插入200后的输出结果
	first=list_delete(first,54);		//删除值为54的结点
	list_print(first);					//删除54后的输出结果
	list_destroy(first);				//销毁整个链表

	return 0;
}
