#include<stdio.h>
int main()
{
	int in;
	while(scanf("%d",&in)!=EOF)
	{
		int sum = 0;
		int i;
		for(i=1;;i++)
		{
			if((sum+i)<in)
			{
				sum+=i;
			}
			else break;
		}
		//printf("sum:%d\n",sum);
		//printf("i:%d\n",i);
		int u,d;
		if(i%2==0) //down
		{
			int th = in-sum;
			//printf("-th:%d",th);
			for(u=1,d=i;u<th;u++,d--);
		}
		else //up 
		{
			int th = i-(in-sum)+1;
			//printf("th:%d",th);
			for(u=1,d=i;u<th;u++,d--);
		}
		printf("TERM %d IS %d/%d\n",in,u,d);
	}
	return 0;
 } 
