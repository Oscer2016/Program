#include <stdio.h>
int main()
{
	int score,n;
	char grade;
	printf("��������ĳɼ���");
	scanf("%d",&score);
	n = score/10;
	switch(n)
	{ 
	case 10: 
	case  9: grade='A';break;
	case  8: grade='B';break;
	case  7: grade='C';break;
	case  6: grade='D';break;
	default: grade='E';
	}
	printf("�ɼ��ȼ���%c\n",grade);
	return(0);
 }
	 
