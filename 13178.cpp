// Q13178
#include<stdio.h>
// #define long long  ll

int main()
{
	//freopen("13178.in.txt","r",stdin);
	//freopen("13178.out.txt","w",stdout);
	int tc;
	scanf("%d",&tc);
	long long int n,N;
	while(tc--) // + !=EOF
	{
		scanf("%lld",&n);
		long long  sum=0,temp;
		//printf("%lld\n",n);
		for(long long int i=1;i<=n;i++)
		{
			temp = i;
			sum+=temp%10;
			while(1)
			{
				temp/=10;
				sum+=temp%10;
				if(temp==0) break;
			}
		}
		N=sum;
		if(N%3==0) printf("YES\n"); // + \n
		else printf("NO\n"); // + \n
	}
	return 0;	
} 
