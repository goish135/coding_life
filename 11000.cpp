#include<stdio.h>
int main()
{
	long long int m[100];
	long long int f[100];
	m[0]=0;
	f[0]=1;
	
	int n;
	long long int total;
	while(scanf("%d",&n)&&n!=-1)
	{
		for(int i=1;i<=n;i++)
		{
			m[i]=m[i-1]+f[i-1];
			f[i]=m[i-1]+1;
			total=m[i-1]*2+1+f[i-1]; 	
		}
		printf("%lld %lld\n",m[n],total);	
	} 
	return 0;		
} 
