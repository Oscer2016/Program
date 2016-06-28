#include <stdio.h>
#include <malloc.h>
int main(void)
{
	char *a;
	int i, j, k, m;
	
	printf("请输入字符串长度：");
	scanf("%d",&m);
	a = (char *)malloc(sizeof(char)*m);
	printf("请输入字符串:");
	for (i=0; i<=m; i++)
		scanf("%c",&a[i]);
	for (i=0; a[i]; i++)
	{
		for (j=k=i+1; a[j]; j++)
			if (a[i] != a[j])
				a[k++] = a[j];
			a[k] = '\0';
	}
	printf("%s",a);
	printf("\n");
	
	return 0;
}