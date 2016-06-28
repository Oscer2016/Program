#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

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

//将结点s按有序方式插入到首指针为first的链表中
Lnode *list_insert_order(Lnode *first,Lnode *s)
{
	Lnode *p=NULL,*q=NULL;
	if (first==NULL)		//空链表，s成为首结点且也是尾结点
	{
		first=s;
		first->next=NULL;
		return first;
	}
	if (s->data<first->data)	//新结点s的值小于首结点的值
	{
		s->next=first;
		first=s;
		return first;
	}
	p=first;
	while (p->next != NULL)		//寻找插入位置
	{
		if (s->data>=p->data && s->data<p->next->data)
		{	//找到p所指向的位置，将s插入到指针p所指向的结点之后
			s->next=p->next;
			p->next=s;
			return first;
		}
		else
			p=p->next;		//当前p指向的结点不是合适的插入位置，向后寻找
	}
	/*
	   到链表结束都未找到合适的插入位置，说明s的值大于尾结点的值，将s插
	   入到尾结点之后。注意p当前指向链表的尾部
	*/
	p->next=s;
	s->next=NULL;
	return first;
}

//取出first指向的链表首结点，链表新的首结点是原来首节点的后继结点
Lnode *get_front(Lnode **first)
{
	Lnode *p=0;
	if (*first == NULL)	//空链表
		return NULL;
	else
	{
		p=*first;				//指向要取出的首节点
		*first=(*first)->next;	//新的首指针指向原来首指针的后继结点
		return p;
	}
}

//将first所指向的链表进行排序
Lnode *list_sort(Lnode *first)
{
	Lnode *p=0,*q=0;
	//下面的代码中，first始终指向未排序部分（链表）的首结点
	while (first != NULL)
	{
		q=get_front(&first);			//取出first为首指针的链表中的首结点
		p=list_insert_order(p,q);	//将取出的首结点q插入到有序链表p中
	}
	return p;
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
	int a[]={12,34,21,11,56,54,65};
	Lnode *first=0,*p=0;
	first = list_create(first,a,7);		//用数组a创建链表
	list_print(first);					//输出原始链表
	first=list_sort(first);				//对链表进行排序
	list_print(first);					//输出排序后的链表
	list_destroy(first);
	return 0;
}

//将链表first的结点逆置
Lnode *list_rev(Lnode *first)
{
	Lnode *p,*q;
	//如果是空链表或只有一个结点的链表，无需处理
	if (first==NULL || first->next==NULL)
		return first;
	p=first->next;
	first->next=NULL;
	while (p!=NULL)
	{
		q=p->next;
		p->next=first;
		first=p;
		p=q;
	}
	return first;
}
