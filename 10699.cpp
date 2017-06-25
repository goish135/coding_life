#include<stdio.h>
int main()
{
	int N;
	while(scanf("%d",&N)==1&&N!=0)
	{
		int temp = N;
		int d = 0;
		int oldvalue = 0;
		for(int j=2;j<=N;j++)
		{	
			int i;
			for(i=N;i%j==0&&i!=1;i/=j)
			{
				if(oldvalue!=j) {d++;}
				oldvalue = j;
				//printf("*%d\n",oldvalue);
			}
			N = i;//impor.
			if(i==1) break;
		}
		printf("%d : %d\n",temp,d);
	}
	return 0;
}				
