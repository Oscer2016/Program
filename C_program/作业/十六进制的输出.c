/*
		����%x %X %#x %#X���÷�
*/

#include <stdio.h>
int main(void)
{
	int x = 47;  

	printf("%x\n", x);  //��������:  2f
	printf("%X\n", x);	//��������:  2F
	printf("%#X\n", x);	//��������:  0X2F  %#X�Ƽ�ʹ��
	printf("%#x\n", x);	//��������:  0x2f

	return 0;
}
