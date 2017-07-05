#include<stdio.h>
int main()
{
	int tc;
	int a,b;
	int c,d;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d %d",&a,&b);
		c = a/3;
		d = b/3;
		printf("%d\n",c*d);
	}
	return 0;
}		
		
