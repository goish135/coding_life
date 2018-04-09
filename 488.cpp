#include<stdio.h>

int main()
{
	//freopen("in.txt","r",stdin);
	int tc; // test case
	scanf("%d",&tc);
	while(tc--)
	{
		int a,f;
		scanf("%d",&a);
		scanf("%d",&f);
		//printf("a:%d\nf:%d\n",a,f); // input OK...
		for(int i=1;i<=f;i++) // c99 not support for(int i...)
		{
			for(int j=1;j<=a;j++)
			{
				for(int k=1;k<=j;k++)
				{
					printf("%d",j); 
				}
				printf("\n");
			}
			for(int m=a-1;m>=1;m--)
			{
				for(int n=1;n<=m;n++)
				{
					printf("%d",m);
				}
				printf("\n");
			}
			if(i!=f)
				printf("\n");
		}
		if(tc>0)
				printf("\n");
	}
	return 0;	
} 
