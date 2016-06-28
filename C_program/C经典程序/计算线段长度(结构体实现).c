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
	printf("请输入第一个点坐标：");
	scanf("%f%f",&l.p1.x,&l.p1.y);
	printf("请输入第二个点坐标：");
	scanf("%f%f",&l.p2.x,&l.p2.y);
	l.len = sqrt((l.p1.x-l.p2.x)*(l.p1.x-l.p2.x)+(l.p1.y-l.p2.y)*(l.p1.y-l.p2.y));
	printf("线段长度=%.2f\n",l.len);
	return 0;
}