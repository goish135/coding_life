#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n;
	while(scanf("%d",&n)&&n!=0)
	{
		long long int sum=0;
		while(n>=10)//imp >=
		{
			sum =0;
			for(int i=n;i;i/=10)
			{
				//printf("%d$\n",i);
				//system("pause");
				sum+=i%10;
			}
			n=sum;
			//printf("%d$$",n);
		}
		printf("%d\n",n);
	}
	return 0;
}	
				
