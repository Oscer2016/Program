#include <stdio.h> 
#include <stdlib.h>
struct node  
{  
    int num;  
    struct node *next;  
};  

struct node *creat();   
void print();  

int main(void)
{  
    struct node *head = NULL;  //��һ��������     
    head=creat(head);	/*����������*/  
    print(head);		/*��ӡ������*/ 
	return 0;
}  
 
struct node *creat(struct node *head)/*���ص�����ڵ���ͬ���͵�ָ��*/  
{  
    struct node *p1,*p2;  
    int i=1;    
    p1=p2=(struct node*)malloc(sizeof(struct node));/*�½ڵ�*/   
    printf("������ֵ��ֵС�ڵ���0������ֵ��ŵ�ַΪ��p1_ADDR= %p\n",p1);  
    scanf("%d",&p1->num);/*����ڵ��ֵ*/  
    p1->next=NULL;/*���½ڵ��ָ����Ϊ��*/  
    while(p1->num>0)/*����ڵ����ֵ����0*/  
    {  
		//���½ڵ��ָ���Ա��ֵΪ�ա����ǿձ����½ڵ����ӵ���ͷ��
		//���Ƿǿձ����½ڵ�ӵ���β;   
        if(head==NULL)  
            head=p1;/*�ձ������ͷ*/  
        else   
            p2->next=p1;/*�ǿձ��ӵ���β*/  
        p2=p1;		//�����¼���Ľ�� 
        p1=(struct node*)malloc(sizeof(struct node));/*��һ���½ڵ�*/  
        i++;  
        printf("������ֵ��ֵС�ڵ���0������ֵ��ŵ�ַΪ��p%d_ADDR= %p\n",i,p2);  
        scanf("%d",&p1->num);	//����ڵ��ֵ,�ж�һ���Ƿ��к����ڵ�Ҫ��������     
    }  
 
    free(p1);  //���뵽��û¼�룬�����ͷŵ�    
    p1=NULL;   //ʹָ���    
    p2->next = NULL; //����β�ˣ�ָ���    
    printf("�������������END��\n");    

    return head;/*���������ͷָ��*/  
}  

void print(struct node*head)/*����headΪͷ��������ڵ��ֵ*/  
{  
    struct node *temp;  
    temp=head;/*ȡ�������ͷָ��*/  
  
    printf("\n\n\n��������ֵΪ��\n");  
    while(temp!=NULL)/*ֻҪ�Ƿǿձ�*/  
    {  
        printf("%6d\n",temp->num);/*�������ڵ��ֵ*/  
        temp = temp->next;/*������������*/  
    }  
    printf("�����ӡ����!!");  
}  