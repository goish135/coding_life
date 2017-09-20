#include<stdio.h>
#include<stdlib.h>
int main()
{
	int fib[41]={0};
	fib[0]=0;
	fib[1]=1;
	int i;
	for(i=2;i<=40;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
		//if(fib[i]>100000000) break;
	}
	//printf("%d\n",fib[40]);
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
		int in;
		scanf("%d",&in);
		printf("%d = ",in);
		int k;
		for(k=0;;k++)
		{
			if(in<fib[k]) break; 
		}
		int out[41]={0};
		for(int m=k-1;;m--)
		{
			if(in-fib[m]>=0) 
			{
				out[m]=1;
				in = in - fib[m];
			}
			if(in==0) break;
		}
		// print
		int n;
		for(n=k-1;out[n]!=1;n--);
		for(int w=n;w>=2;w--) printf("%d",out[w]);
		printf(" (fib)\n");
	}
	return 0;
 } 

