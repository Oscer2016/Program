#include <stdio.h>
#include <math.h>
struct point
{
	float x,y;
};
struct line
{
	struct point p1,p2;
	float len;
};

int main(void)
{
	struct line l;
	printf("�������һ�������꣺");
	scanf("%f%f",&l.p1.x,&l.p1.y);
	printf("������ڶ��������꣺");
	scanf("%f%f",&l.p2.x,&l.p2.y);
	l.len = sqrt((l.p1.x-l.p2.x)*(l.p1.x-l.p2.x)+(l.p1.y-l.p2.y)*(l.p1.y-l.p2.y));
	printf("�߶γ���=%.2f\n",l.len);
	return 0;
}