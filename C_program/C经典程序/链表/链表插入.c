#include <stdio.h>
typedef struct node 
{
	int data;
	struct node *next;
}linklist;

int main(void)
{
	linklist l[6],*head,*insert,*p=l,*pre;
	int i;
	printf("按升序输入5个数，以空格隔开：\n");
	for (i=0; i<5; i++)
	{
		scanf("%d",&p->data);
		p->next=&l[i+1];
		p = p->next;
	}
	printf("请输入插入的数：\n");
	scanf("%d",&p->data);
	insert = p;
	head = l;
	p = head;
	for (i=0; i<5; i++)
	{
		if (p->data>insert->data)
		{
			if (p == head)
				head = insert;
			else 
				pre->next=insert;
			insert->next=p;
			break;
		}
		pre=p;
		p=p->next;
	}
	p=head;
	printf("插入后数的排列是：\n");
	for (i=0; i<6; i++)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	puts("");
	return 0;
}