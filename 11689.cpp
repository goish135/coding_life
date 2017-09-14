#include<stdio.h>
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		int total=a+b;
		int count = 0;
		while(total/c)
		{
			count += total/c;
			total = (total/c)+(total%c);
		}
		printf("%d\n",count);
	}
	return 0;
}
