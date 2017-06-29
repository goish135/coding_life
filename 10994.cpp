#include<stdio.h>
int main()
{
	long long int p,q;
	while(scanf("%lld %lld",&p,&q)&&(p>0||q>0))
	{
		long long int sum1 = 0;
		long long int sum2 = 0;
		p = p-1;//imp.
		while(p!=0)
		{
			sum1=(p/10)*45+(p%10+1)*(p%10)/2+sum1;
			p/=10;
		}
		//printf("sum1:%d\n",sum1);
		
		while(q!=0)
		{
			sum2=(q/10)*45+(q%10+1)*(q%10)/2+sum2;
			q/=10;
		}
		//printf("sum2:%d\n",sum2);
		long long int ans;
		ans =sum2-sum1;
		printf("%lld\n",ans);
	}
	return 0;
}		
			
