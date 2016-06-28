#include <stdio.h>
int main(void)
{
	char str[100],c;
	int i=0,j,alpha1=0,alpha2=0,digit=0,space=0,other=0;
	printf("Please input a string(<=100):");
	while ((str[i]=getchar())!='\n')
		i++;
	str[i]='\0';
	i=0;
	while (str[i]!='\0')
	{
		if (str[i]>='A' && str[i]<='Z')
			alpha1++;
		else if (str[i]>='a' && str[i]<='z')
			alpha2++;
		else if (str[i]>='0' && str[i]<='9')
			digit++;
		else if (str[i]==' ')
			space++;
		else
			other++;
		i++;
	}
	printf("alpha1=%d,alpha2=%d,digit=%d,space=%d,other=%d\n",alpha1,alpha2,
			digit,space,other);

	return 0;
}