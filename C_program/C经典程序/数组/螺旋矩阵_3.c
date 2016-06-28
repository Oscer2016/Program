#include <stdio.h>
#define N 30
void screw_matrix(int a[][N],int m,int n)
{
	int right,left,up,down;
	int d=1,x=0,y=0;
	while (1)
	{
		a[x][y]=d++;
		//判断各方向可否前进
		right=y<n-1 && a[x][y+1]==0;
		down=x<m-1 && a[x+1][y]==0;
		left=y>0 && a[x][y-1]==0;
		up=x>0 && a[x-1][y]==0;
		//判断前进方向
		if (down)
			if (right)	y++;
			else		x++;
		else if (left)
			if (down)	x++;
			else		y--;
		else if (up)
			if (left)	y--;
			else		x--;
		else if (right)
			if (up)		x--;
			else		y++;
		else	break;
	}
}
//输出二维数组
void outputmat(int array[][N],int m,int n)
{
	int i,j;
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			printf("%4d",array[i][j]);
		printf("\n");
	}
}
int main(void)
{
	int a[N][N]={0};
	int m=5,n=7;
	printf("请输入矩阵维数m和n：");
	scanf("%d%d",&m,&n);
	screw_matrix(a,m,n);
	outputmat(a,m,n);
	return 0;
}