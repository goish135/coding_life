#include<stdio.h>
int main()
{
	int n,x,y,f;
	while(scanf("%d",&n)==1&&n!=0)
	{
		
		for(int i=1;;i++)
		{
			if(i*i*i>n)
			{
				x=i;
				//printf("x:%d\n",x);
				//break;
				
			}
			else continue;
		//}
		 f = 0 ;
		for(int j=1;j<x;j++)
		{
			int r = x*x*x-j*j*j;
			if(r==n)
			{
				y=j;
				f = 1;
				break;
			}
		}
		if(f==1) break;
		if(x*x*x-(x-1)*(x-1)*(x-1)>n) break;
		}
		if(f==1) printf("%d %d\n",x,y);
		else printf("No solution\n");
	}
	return 0;
}
