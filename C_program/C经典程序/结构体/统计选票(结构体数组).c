#include <stdio.h>
#include <string.h>
struct person
{
	char name[20];
	int count;
};
int main(void)
{
	struct person leader[3]={"fu",0,"lu",0,"shou",0},t;
	int i,j,k;
	int n=3,m;					//候选班长人数
	char name[20];
	printf("please input count of votes:");
	scanf("%d",&m);
	printf("please input the election's name:\n");
	for (i=1; i<=m; i++)		//根据选票，统计候选者票数
	{
		printf("No.%d: ",i);
		scanf("%s",name);
		for (j=0; j<3; j++)
			if (strcmp(name,leader[j].name)==0)
				leader[j].count++;
	}
	for (i=0; i<n-1; i++)		//以得票数为关键字，进行升序排序
	{
		k=i;
		for (j=i+1; j<n; j++)
			if (leader[k].count<leader[j].count)
				k=j;
			if (k!=j)
			{
				t = leader[i];
				leader[i] = leader[k];
				leader[k] = t;
			}
	}
	printf("the vote of leader is:\n");
	for (i=0; i<n; i++)
		printf("%s\t%d\n",leader[i].name,leader[i].count);
	return 0;
}