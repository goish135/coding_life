#include<stdio.h>
int main() 
{
	int tc;
	scanf("%d",&tc);
	int n=1;
	int ink[37]={0};//0-9 (10) A~Z (26)
	int temp = tc;
	temp = temp-1;
	while(tc--)
	{
		//printf("tc:%d\n",tc);
		if(tc!=temp) printf("\n");
		for(int i=0;i<36;i++)
		{
			scanf("%d",&ink[i]);	
		}
		//printf("ink:%d\n\n",ink[2]);
		int tc2;
		scanf("%d",&tc2);
		//printf("tc2:%d\n\n",tc2);
		printf("Case %d:\n",n);
		//printf("Case %d:\n",n);
		while(tc2--)
		{
			//printf("Case %d:\n",n);
			int in;
			scanf("%d",&in);
			int min;
			int flag = 1;
			int sum[37]={0};
			for(int j=2;j<=36;j++)
			{
				for(int k=in;k;k/=j)
				{
					sum[j]+=ink[k%j];	
				}
				if(sum[j]<min||flag==1) {
					min=sum[j];flag=0;
				}
			}
			//printf("Case %d:\n",n);
			printf("Cheapest base(s) for number %d:",in);
			for(int m=2;m<=36;m++)
			{
				if(min==sum[m]) printf(" %d",m);
			}	
			printf("\n");	
		}	
		//printf("\n");
		n++;		
	}
}
