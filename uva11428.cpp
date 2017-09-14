#include<stdio.h>
#include<stdlib.h>
#define max 10000+1

int main()
{
	bool isExist[max]={false};
	int x[max]; //Run Error bec.=>陣列大小 
	int y[max]; 
	for(int i=2;i<=59;i++)
	{
		for(int j=1;j<i;j++)
		{
			int tn;
			tn = i*i*i-j*j*j;
			//printf("tn:%d\n",tn);
			
			if(tn<=10000&&isExist[tn]==false) //N最大10000,59^3-58^3=10267//y取最小即可 
			{
				isExist[tn]=true;
				x[tn]=i; //bec.
				y[tn]=j; //bec.
			}
		}
	}
	
	int n;
	while(scanf("%d",&n)==1&&n!=0)
	{
		if(isExist[n]==true)
			printf("%d %d\n",x[n],y[n]);
		else printf("No solution\n");	
	}
	return 0;
}	
