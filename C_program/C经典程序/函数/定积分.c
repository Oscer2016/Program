/*
	���η��󶨻��ֺ���
	aΪ�������ޣ�bΪ�������ޣ�nΪ�������仮�ֳ�
	С����ĸ�����fΪָ�򱻻�������ָ��
*/
#include <stdio.h>
#include <math.h>
float jifen(float a,float b,int n,float (*f)(float x))
{
	float y,h;
	int i;
	y = 0.5 * (f(a) + f(b));		//Ҳ����д��y = 0.5 * (��*f��(a) + ��*f��(b))
	h = (b-a)/n;
	for (i=1; i<n; i++)
		y = y + f(a + i * h);
	return y*h;
}
//����A1�ı�������
float fun1(float x)
{
	return 1+x*x;
}
//����A2�ı�������
float fun2(float x)
{
	return x/(1+x*x);
}
//����A3�ı�������
float fun3(float x)
{
	return (x+x*x)/(1+sin(x)+x*x);
}
//�����������Ի����㷨
int main(void)
{
	printf("A1=%8.2f\n",jifen(2,4,100,fun1));
	printf("A2=%8.2f\n",jifen(1,2.5,100,fun2));
	printf("A3=%8.2f\n",jifen(1,3,100,fun3));
	return 0;
}