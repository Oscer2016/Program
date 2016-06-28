#include <stdio.h>
#include <string.h>
#define N 3
#define M 10
int main(void)
{
	char p[M];
	char s[N][M];
	int i,j;
	printf("ÇëÊäÈë´ıÅÅĞò×Ö·û´®£º\n");
	for (i=0;i<N;i++)
		scanf("%s",s[i]);
	printf("×Ö·û´®°´ÉıĞòÅÅÁĞÎª£º\n");
	for (i=0;i<N;i++)
	{
		for (j=i+1;j<N;j++)
			if (strcmp(s[i],s[j])>0)
			{
				strcpy(p,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],p);
			}
		puts(s[i]);
	}

	return 0;
}