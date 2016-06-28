#include <stdio.h>
#include <stdlib.h>
#include <assert.h>		//��assert��Ҫ��ͷ�ļ�

typedef struct lnode
{
	int data;				//����Ԫ�أ��������κ����ͣ�����ʹ����������Ԫ��
	struct lnode *next;		//ָ���̽���ָ��
}Lnode;

//�����룬����ָ�������׽���ָ��
Lnode *list_insert(Lnode *first,Lnode *p,int e)
{
	Lnode *q,*s;
	s=(Lnode *)malloc(sizeof(Lnode));	//���½�����ռ�
	s->data=e;
	s->next=0;
	if (first == NULL)			//������
	{
		first=s;
		return first;
	}
	if (p == first)				//p���׽�㣬��s�������������׽��֮ǰ
	{
		s->next=first;
		first=s;
	}
	else
	{
		q=first;
		while (q->next != p)	//����p��ǰ�����q
			q=q->next;
		q->next=s;				//��������q���֮�����s���
		s->next=p;
	}
	return first;
}

//������a[0:n-1]�е����ݹ�����������������ָ��
Lnode *list_create(Lnode *first,int a[],int n)
{
	int i;
	for (i=0; i<n; i++)
		first=list_insert(first,first,a[n-1-i]);	//����ǰ�巨��������
	return first;
}

//������first�У�����ֵΪe�Ľ�㣬����ָ��ֵΪe�Ľ���ָ��
Lnode *list_find(Lnode *first,int e)
{
	Lnode *p;
	p=first;
	if (first == NULL)
		return NULL;		//firstΪ0����ʾ�ǿ�����
	while (p)
	{
		if (p->data==e)
			return p;		//���p��ֵ��e��ȣ�ֱ�ӷ���ָ��p
		p=p->next;			//����������
	}
	return NULL;
}


//������first�У�ɾ��ֵΪe�Ľ�㣬����ҵ���㣬����ɾ��������������ָ��
Lnode *list_delete(Lnode *first,int e)
{
	Lnode *q,*p;
	q=p=first;
	if (first == NULL)		//������
		return NULL;
	if (first->data == e)	//��ɾ���Ľ�����׽��
	{
		p=first;
		first=first->next;
		free(p);
		return first;
	}
	for (q=first; q->next; q=q->next)	//��ɾ���Ľ�����м�ĳ�����
	{
		p=q->next;
		if (p->data == e)			//�ҵ�ֵΪe�Ľ��
		{
			q->next=p->next;		//���������ɾ�����p
			free(p);
			break;
		}
	}
	return first;
}

//���������������first�У����δ�ӡÿ������ֵ
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

//��������firstÿ������ڴ�ռ�
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
	first=list_create(first,a,n);		//������a��������
	list_print(first);					//�������ԭʼ����
	first=list_insert(first,first,100);
	list_print(first);					//�������ǰ����100�������
	p=list_find(first,11);				//����ֵΪ11�Ľ��
	p=list_insert(first,p,200);			//��ֵΪ11�Ľ��ǰ����ֵΪ200�Ľ��
	list_print(first);					//��ֵΪ11�Ľ��ǰ����200���������
	first=list_delete(first,54);		//ɾ��ֵΪ54�Ľ��
	list_print(first);					//ɾ��54���������
	list_destroy(first);				//������������

	return 0;
}
