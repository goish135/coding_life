#include<stdio.h>
int main()
{
	long long int s,d;
	while(scanf("%lld %lld",&s,&d)==2)
	{
		long long int sum=0;
		for(long long int i=s;;i++)
		{
			sum+=i;
			if(sum>=d)
			{
				printf("%lld\n",i);
				break;
			}
		}
	}
	return 0;	
} 
