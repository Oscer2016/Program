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
		printf("������� %d ��Ա����Ϣ��",i+1);
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
	printf("�������ְԱ����ţ�");
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
			printf("û�д�Ա����\n");
		else
		{
			p=head;
			printf("����Ա����ϢΪ��\n");
			for (i=0; i<N-1; i++)
			{
				printf("%d %s\n",p->number,p->name);
				p=p->next;
			}
		}
	return 0;
}