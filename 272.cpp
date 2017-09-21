#include<stdio.h>
int main()
{
	char ch;
	int flag = 1;
	while(scanf("%c",&ch)==1)
	{
		if(ch=='"')
		{
			if(flag==1)
			{
				printf("``");
				flag*=-1;
			}
			else
			{
				printf("''");
				flag*=-1;
			}
		}
		else 
			printf("%c",ch);
	}
	return 0;
}
