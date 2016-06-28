#include <stdio.h>
#include <malloc.h>
#define N 5
typedef struct employee
{
	int number;
	char name[10];
	struct employee *next;
}em;
em *creat()
{
	em *head,*p,*r;
	int i;
	p = (em*)malloc(sizeof(em));
	head=p;
	p->next=NULL;
	r=p;
	for (i=0;i<N;i++)
	{
		printf("请输入第 %d 个员工信息：",i+1);
		scanf("%d%s",&p->number,&p->name);
		p=(em*)malloc(sizeof(em));
		p->next=NULL;
		r->next=p;
		r=r->next;
	}
	return head;
}
int main(void)
{
	em *head,*p,*pre;
	int i,no,flag=0;
	head=creat();
	p=head;
	printf("请输入辞职员工编号：");
	scanf("%d",&no);
	for (i=0; i<N; i++)
	{
		if (p->number==no)
		{
			flag=1;
			if (p==head)
				head = head->next;
			else
				pre->next=p->next;
			free(p);
			break;
		}
		pre = p;
		p=p->next;
	}
		if (flag==0)
			printf("没有此员工。\n");
		else
		{
			p=head;
			printf("现有员工信息为：\n");
			for (i=0; i<N-1; i++)
			{
				printf("%d %s\n",p->number,p->name);
				p=p->next;
			}
		}
	return 0;
}